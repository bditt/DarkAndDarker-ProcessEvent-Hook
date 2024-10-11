#include <Windows.h>
#include <map>
#include "SDK.hpp"

#include <MinHook.h>

using namespace SDK;

typedef void(__thiscall* tprocess_event)(UObject* Object, SDK::UFunction* Function, void* Params);
tprocess_event process_event_orig = nullptr;

void start_console() {
	AllocConsole();
	FILE* f = 0;
	freopen_s(&f, "CONOUT$", "w", stdout);
	freopen_s(&f, "CONIN$", "r", stdin);
}

std::map<int, std::string> found_function;

void process_event_hook(UObject* Object, SDK::UFunction* Function, void* Params)
{
    if (Object->IsA(AActor::StaticClass()))
    {
        auto object_name = Object->GetFullName();
        auto function_name = Function->GetFullName();
        if (function_name.find("login") != std::string::npos ||
            function_name.find("Timeline__UpdateFunc") != std::string::npos ||
            function_name.find("GameplayTagUpdated") != std::string::npos ||
            function_name.find("ReceiveTick") != std::string::npos ||
            function_name.find("OnCharacterMoved") != std::string::npos ||
            function_name.find("ServerMovePacked") != std::string::npos ||
            function_name.find("OnRep_Replicated") != std::string::npos)
            return process_event_orig(Object, Function, Params);

        if (found_function.find(Function->Index) == found_function.end())
        {
            std::cout << "===== PE Called =====" << std::endl;
            std::cout << "Object Name: " << object_name << std::endl;
            std::cout << "Funciton Name: " << function_name << std::endl;
            if (function_name.find("OnServerCall") != std::string::npos)
            {
                ADCPlayerController test;
            }
            std::cout << "===== PE DONE =====" << std::endl << std::endl;
            found_function.emplace(Function->Index, function_name);
        }
    }

    process_event_orig(Object, Function, Params);
}

int real_main()
{
	srand(time(0));
    MH_Initialize();
    void* function_address = reinterpret_cast<void*>(InSDKUtils::GetImageBase() + Offsets::ProcessEvent);
    auto create_hook = MH_CreateHook(function_address, &process_event_hook, reinterpret_cast<void**>(&process_event_orig));
    std::cout << "Create Hook: " << create_hook << std::endl;
    auto enable_hook = MH_EnableHook(function_address);
    std::cout << "Enable Hook: " << enable_hook << std::endl;

    return true;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
		start_console();
		CreateThread(0, 0, (LPTHREAD_START_ROUTINE)real_main, 0, 0, 0);
	}
	return TRUE;
}