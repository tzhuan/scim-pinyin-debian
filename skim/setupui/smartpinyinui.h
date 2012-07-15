/****************************************************************************
** Form interface generated from reading ui file './smartpinyinui.ui'
**
** Created: 日  8月 7 00:23:54 2005
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.4   edited Nov 24 2003 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SMARTPINYINSETTINGUI_H
#define SMARTPINYINSETTINGUI_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class SkimEditShortcutButton;
class QTabWidget;
class QCheckBox;
class QFrame;
class QSpinBox;
class QLabel;
class QGroupBox;
class KLineEdit;

class SmartPinyinSettingUI : public QWidget
{
    Q_OBJECT

public:
    SmartPinyinSettingUI( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~SmartPinyinSettingUI();

    QTabWidget* tabWidget2;
    QWidget* tab;
    QCheckBox* kcfg__IMEngine_Pinyin_AutoCombinePhrase;
    QCheckBox* kcfg__IMEngine_Pinyin_AutoFillPreedit;
    QCheckBox* kcfg__IMEngine_Pinyin_MatchLongerPhrase;
    QCheckBox* kcfg__IMEngine_Pinyin_AlwaysShowLookup;
    QCheckBox* kcfg__IMEngine_Pinyin_ShowAllKeys;
    QCheckBox* kcfg__IMEngine_Pinyin_DynamicAdjust;
    QFrame* line1;
    QFrame* frame3;
    QSpinBox* kcfg__IMEngine_Pinyin_SavePeriod;
    QSpinBox* kcfg__IMEngine_Pinyin_DynamicSensitivity;
    QLabel* textLabel1_5_2_2_3;
    QLabel* textLabel1_5;
    QLabel* textLabel1_5_2;
    QLabel* textLabel1_5_2_2_2;
    QSpinBox* kcfg__IMEngine_Pinyin_MaxPreeditLength;
    QLabel* textLabel1_5_2_2;
    QSpinBox* kcfg__IMEngine_Pinyin_MaxUserPhraseLength;
    QSpinBox* kcfg__IMEngine_Pinyin_SmartMatchLevel;
    QLabel* textLabel1_5_2_2_2_2;
    QSpinBox* kcfg__IMEngine_Pinyin_BurstStackSize;
    QFrame* line2;
    QCheckBox* kcfg__IMEngine_Pinyin_User_DataBinary;
    QCheckBox* advancedCBox;
    QWidget* tab_2;
    QCheckBox* kcfg__IMEngine_Pinyin_Tone;
    QCheckBox* kcfg__IMEngine_Pinyin_Incomplete;
    QCheckBox* kcfg__IMEngine_Pinyin_Ambiguities;
    QGroupBox* groupBox1;
    QCheckBox* kcfg__IMEngine_Pinyin_Ambiguity_NeLe;
    QCheckBox* kcfg__IMEngine_Pinyin_Ambiguity_LeRi;
    QCheckBox* kcfg__IMEngine_Pinyin_Ambiguity_FoHe;
    QCheckBox* kcfg__IMEngine_Pinyin_Ambiguity_ZhiZi;
    QCheckBox* kcfg__IMEngine_Pinyin_Ambiguity_ChiCi;
    QCheckBox* kcfg__IMEngine_Pinyin_Ambiguity_ShiSi;
    QCheckBox* kcfg__IMEngine_Pinyin_Ambiguity_InIng;
    QCheckBox* kcfg__IMEngine_Pinyin_Ambiguity_AnAng;
    QCheckBox* kcfg__IMEngine_Pinyin_Ambiguity_EnEng;
    QWidget* TabPage;
    QLabel* textLabel1_2;
    QLabel* textLabel1_3;
    QLabel* textLabel1_4;
    QLabel* textLabel1;
    SkimEditShortcutButton* punctButton;
    KLineEdit* kcfg__IMEngine_Pinyin_FullWidthPunctKey;
    SkimEditShortcutButton* letterButton;
    KLineEdit* kcfg__IMEngine_Pinyin_FullWidthLetterKey;
    SkimEditShortcutButton* modeButton;
    KLineEdit* kcfg__IMEngine_Pinyin_ModeSwitchKey;
    KLineEdit* kcfg__IMEngine_Pinyin_ChineseSwitchKey;
    SkimEditShortcutButton* chineseModeButton;
    SkimEditShortcutButton* upButton;
    KLineEdit* kcfg__IMEngine_Pinyin_PageUpKey;
    SkimEditShortcutButton* downButton;
    KLineEdit* kcfg__IMEngine_Pinyin_PageDownKey;
    SkimEditShortcutButton* disableButton;
    KLineEdit* kcfg__IMEngine_Pinyin_DisablePhraseKey;
    QLabel* textLabel1_4_2_2_2;
    QLabel* textLabel1_4_2;
    QLabel* textLabel1_4_2_2;

protected:
    QVBoxLayout* SmartPinyinSettingUILayout;
    QVBoxLayout* tabLayout;
    QSpacerItem* spacer2;
    QHBoxLayout* layout14;
    QVBoxLayout* layout10;
    QVBoxLayout* frame3Layout;
    QGridLayout* layout11;
    QHBoxLayout* layout13;
    QSpacerItem* spacer1;
    QVBoxLayout* tabLayout_2;
    QSpacerItem* spacer3;
    QHBoxLayout* layout9;
    QGridLayout* groupBox1Layout;
    QGridLayout* TabPageLayout;
    QSpacerItem* spacer5;

protected slots:
    virtual void languageChange();

private:
    QPixmap image0;

};

#endif // SMARTPINYINSETTINGUI_H
