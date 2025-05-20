#include "FamilyWidget.h"
#include "icons.h"

#include "config_helper.h"


FamilyWidget::FamilyWidget(ScreenManager &manager) : Widget(manager) {
}

FamilyWidget::~FamilyWidget(){
}

void FamilyWidget::draw(bool force){
  m_manager.setFont(DEFAULT_FONT);
  m_time->updateTime();

        //model.setChangedStatus(false);

}

