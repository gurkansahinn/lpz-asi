#include <string>

#include "plugin.h"
#include "CCmdlineParams.h"
#include "CLog.h"

using namespace plugin;

class lpzasi {
public:
    lpzasi() {
        AllocConsole();
        CCmdlineParams::Process(GetCommandLine());

        std::string serverAddress = CCmdlineParams::GetArgumentValue(SAMP_PARAM_ADDRESS) + " ip adresli sunucuya baðlanýyorsun.";
        CLog::SendServerInfo(serverAddress);
    }
} _lpzasi;