#ifndef FAMILY_WIDGET_H
#define FAMILY_WIDGET_H

#include "Widget.h"
#include "config_helper.h"

class FamilyWidget: public Widget{
    public:
        FamilyWidget(ScreenManager &manager);
        ~FamilyWidget() override;

        void setup() override;
        void draw(bool force = false) override;
        String getName() override;
        bool isVisible() const;
        void setName(const std::string& name);
        void setVisibility(bool visible);
        
    private:
        void displayImage(int displayIndex, const String &digit);
};




#endif //FAMILY_WIDGET_H