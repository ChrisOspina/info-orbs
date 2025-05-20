#ifndef FAMILY_WIDGET_H
#define FAMILY_WIDGET_H

#include "Widget.h"
#include "config_helper.h"

class FamilyWidget: public Widget{
    public:
        FamilyWidget(ScreenManager &manager);
        ~FamilyWidget() override;
        void setup() override;
        void update(bool force = false) override;
        void draw(bool force = false) override;
        void buttonPressed(uint8_t buttonId, ButtonState state) override;
        String getName() override;

    private:
        void displayImage(int displayIndex, const String &digit);
        void changeMode();
        int8_t m_mode;
};




#endif //FAMILY_WIDGET_H