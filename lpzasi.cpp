#include <string>

#include "LPZ.h"
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
			if (CCmdlineParams::GetArgumentValue(SAMP_PARAM_ADDRESS) == LPZ_SERVER_IP)
			{
				CLog::SendInfoMessage("Last Project Z sunucularına " + CCmdlineParams::GetArgumentValue(SAMP_PARAM_UNAME) + " olarak bağlanıyorsun.");
				CHUD::Initialize();
				CHUD::ToggleComponent(ALL, false);
				CHUD::ToggleComponent(CROSSHAIR, true);
				LPZ::Connect();
			}
			break;

		case DLL_PROCESS_DETACH:
			LPZ::Disconnect();
			break;

	}
	return TRUE;
}