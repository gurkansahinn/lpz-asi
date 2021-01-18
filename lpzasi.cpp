#include <string>

#include "plugin.h"
#include "CCmdlineParams.h"

using namespace plugin;

class lpzasi {
public:
    lpzasi() {
        AllocConsole();
        CCmdlineParams::Process(GetCommandLine());

        std::string serverAddress = CCmdlineParams::GetArgumentValue(SAMP_PARAM_ADDRESS) + " ip adresli sunucuya baðlanýyorsun.";
        MessageBox(NULL, serverAddress.c_str(), "LAST PROJECT Z - Development", MB_OK | MB_SETFOREGROUND);
    }
} _lpzasi;