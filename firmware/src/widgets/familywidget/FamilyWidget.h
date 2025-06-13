#ifndef FAMILY_WIDGET_H
#define FAMILY_WIDGET_H

#include "Widget.h"
#include "Utils.h"
#include "config_helper.h"
#include "GlobalTime.h"


class FamilyWidget: public Widget{
    public:
        FamilyWidget(ScreenManager &manager);
        ~FamilyWidget() override;

        void setup() override;
        void draw(bool force = false) override;
        String getName() override;

    private:
        void displayImage(int displayIndex, const String &digit);
        void configureColors();

        GlobalTime *m_time;
        int8_t m_mode;
        String name;
        bool visible;

        ScreenMode m_screenMode = Dark;
        uint16_t m_foregroundColor;
        uint16_t m_backgroundColor;
        uint16_t m_invertedForegroundColor;
        uint16_t m_invertedBackgroundColor;

        ScreenMode m_screenMode = Dark;
        const int centre = 120; // Centre location of the screen(240x240)
};




#endif //FAMILY_WIDGET_H