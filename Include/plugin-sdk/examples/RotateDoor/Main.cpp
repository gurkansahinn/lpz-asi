#include` "plugin_SA.h"
#include "game_SA/CPlayerPed.h"
using namespace plugin;

class MyPlugin {
public:
    MyPlugin() {
        if (KeyPressed(VK_SHIFT))
        {
            CPlayerPed Player;
            Player.Remove();
        }
    }
} myPlugin;