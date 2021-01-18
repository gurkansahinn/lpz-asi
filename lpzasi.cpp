#include <string>

#include "plugin.h"
#include "CCmdlineParams.h"
#include "CLog.h"
#include "CMem.h"

using namespace plugin;

class lpzasi {
public:
    lpzasi() {
        AllocConsole();
        CCmdlineParams::Process(GetCommandLine());

        std::string messageInfo = CCmdlineParams::GetArgumentValue(SAMP_PARAM_ADDRESS) + " ip adresli sunucuya bağlanıyorsun.";
        CLog::SendInfoMessage(messageInfo);
    }
} _lpzasi;