#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(ClickNoFrames, PlayerObject) {
    bool pushButton(PlayerButton button) {
        bool isEnabled = Mod::get()->getSettingValue<bool>("enabled");

        if (isEnabled && button == PlayerButton::Jump) {
            return false;
        }

        return PlayerObject::pushButton(button);
    }
};
