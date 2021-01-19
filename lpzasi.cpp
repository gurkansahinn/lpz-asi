#include <string>

#include "plugin.h"
#include "CCmdlineParams.h"
#include "CLog.h"
#include "CMem.h"
#include "CHud.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		AllocConsole();
		CCmdlineParams::Process(GetCommandLine());

		CLog::SendInfoMessage(CCmdlineParams::GetArgumentValue(SAMP_PARAM_ADDRESS) + " ip adresli sunucuya bağlanıyorsun.");

		CHUD::Initialize();

		// Hide All Hud Component
		CHUD::ToggleComponent(ALL, false);

		// Show PlayerCrosshair
		CHUD::ToggleComponent(CROSSHAIR, true);
		break;

	case DLL_PROCESS_DETACH:
		// veriler silinecek
		break;

	}
	return TRUE;
}