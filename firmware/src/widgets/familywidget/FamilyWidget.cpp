#include "FamilyWidget.h"
#include "icons.h"
#include "config_helper.h"


FamilyWidget::FamilyWidget(ScreenManager &manager) : Widget(manager) {
}

FamilyWidget::~FamilyWidget(){
}

void FamilyWidget::setup() {
  m_time = GlobalTime::getInstance();
  #ifdef FAMILY_SCREEN_MODE
      m_screenMode = FAMILY_SCREEN_MODE;
  #endif
  configureColors();
}



void FamilyWidget::draw(bool force){
      //TODO figure out how to implement method
}

void FamilyWidget::configureColors() {
    m_foregroundColor = m_screenMode == Light ? TFT_BLACK : TFT_WHITE;
    m_backgroundColor = m_screenMode == Light ? TFT_WHITE : TFT_BLACK;

    // NOTE: In Light mode, we draw decorative black chunks and display the high and low on them in white.
    //       It does not make sense to have glaring white chunks in dark mode, so we don't draw them at all,
    //       and display the high and low in white too.
    m_invertedForegroundColor = m_screenMode == Light ? m_backgroundColor : m_foregroundColor;
    m_invertedBackgroundColor = m_screenMode == Light ? m_foregroundColor : m_backgroundColor;

    m_manager.setBackgroundColor(m_backgroundColor);
}

String FamilyWidget::getName(){
  return "family";
}



