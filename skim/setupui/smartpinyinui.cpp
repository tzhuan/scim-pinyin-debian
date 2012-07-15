#include <kdialog.h>
#include <klocale.h>
/****************************************************************************
** Form implementation generated from reading ui file './smartpinyinui.ui'
**
** Created: 日  8月 7 00:23:57 2005
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.4   edited Nov 24 2003 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "smartpinyinui.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtabwidget.h>
#include <qcheckbox.h>
#include <qframe.h>
#include <qspinbox.h>
#include <qlabel.h>
#include <qgroupbox.h>
#include <klineedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "skimkeygrabber.h"

/*
 *  Constructs a SmartPinyinSettingUI as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
SmartPinyinSettingUI::SmartPinyinSettingUI( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "SmartPinyinSettingUI" );
    SmartPinyinSettingUILayout = new QVBoxLayout( this, 0, 0, "SmartPinyinSettingUILayout"); 

    tabWidget2 = new QTabWidget( this, "tabWidget2" );

    tab = new QWidget( tabWidget2, "tab" );
    tabLayout = new QVBoxLayout( tab, 11, 6, "tabLayout"); 

    layout14 = new QHBoxLayout( 0, 0, 6, "layout14"); 

    layout10 = new QVBoxLayout( 0, 0, 6, "layout10"); 

    kcfg__IMEngine_Pinyin_AutoCombinePhrase = new QCheckBox( tab, "kcfg__IMEngine_Pinyin_AutoCombinePhrase" );
    layout10->addWidget( kcfg__IMEngine_Pinyin_AutoCombinePhrase );

    kcfg__IMEngine_Pinyin_AutoFillPreedit = new QCheckBox( tab, "kcfg__IMEngine_Pinyin_AutoFillPreedit" );
    layout10->addWidget( kcfg__IMEngine_Pinyin_AutoFillPreedit );

    kcfg__IMEngine_Pinyin_MatchLongerPhrase = new QCheckBox( tab, "kcfg__IMEngine_Pinyin_MatchLongerPhrase" );
    layout10->addWidget( kcfg__IMEngine_Pinyin_MatchLongerPhrase );

    kcfg__IMEngine_Pinyin_AlwaysShowLookup = new QCheckBox( tab, "kcfg__IMEngine_Pinyin_AlwaysShowLookup" );
    layout10->addWidget( kcfg__IMEngine_Pinyin_AlwaysShowLookup );

    kcfg__IMEngine_Pinyin_ShowAllKeys = new QCheckBox( tab, "kcfg__IMEngine_Pinyin_ShowAllKeys" );
    layout10->addWidget( kcfg__IMEngine_Pinyin_ShowAllKeys );

    kcfg__IMEngine_Pinyin_DynamicAdjust = new QCheckBox( tab, "kcfg__IMEngine_Pinyin_DynamicAdjust" );
    layout10->addWidget( kcfg__IMEngine_Pinyin_DynamicAdjust );
    layout14->addLayout( layout10 );

    line1 = new QFrame( tab, "line1" );
    line1->setFrameShape( QFrame::VLine );
    line1->setFrameShadow( QFrame::Sunken );
    line1->setFrameShape( QFrame::VLine );
    layout14->addWidget( line1 );

    frame3 = new QFrame( tab, "frame3" );
    frame3->setFrameShape( QFrame::NoFrame );
    frame3->setFrameShadow( QFrame::Raised );
    frame3->setLineWidth( 0 );
    frame3Layout = new QVBoxLayout( frame3, 0, 0, "frame3Layout"); 

    layout11 = new QGridLayout( 0, 1, 1, 0, 6, "layout11"); 

    kcfg__IMEngine_Pinyin_SavePeriod = new QSpinBox( frame3, "kcfg__IMEngine_Pinyin_SavePeriod" );
    kcfg__IMEngine_Pinyin_SavePeriod->setMaxValue( 1000000 );

    layout11->addWidget( kcfg__IMEngine_Pinyin_SavePeriod, 5, 1 );

    kcfg__IMEngine_Pinyin_DynamicSensitivity = new QSpinBox( frame3, "kcfg__IMEngine_Pinyin_DynamicSensitivity" );

    layout11->addWidget( kcfg__IMEngine_Pinyin_DynamicSensitivity, 4, 1 );

    textLabel1_5_2_2_3 = new QLabel( frame3, "textLabel1_5_2_2_3" );

    layout11->addWidget( textLabel1_5_2_2_3, 3, 0 );

    textLabel1_5 = new QLabel( frame3, "textLabel1_5" );

    layout11->addWidget( textLabel1_5, 0, 0 );

    textLabel1_5_2 = new QLabel( frame3, "textLabel1_5_2" );

    layout11->addWidget( textLabel1_5_2, 1, 0 );

    textLabel1_5_2_2_2 = new QLabel( frame3, "textLabel1_5_2_2_2" );

    layout11->addWidget( textLabel1_5_2_2_2, 4, 0 );

    kcfg__IMEngine_Pinyin_MaxPreeditLength = new QSpinBox( frame3, "kcfg__IMEngine_Pinyin_MaxPreeditLength" );

    layout11->addWidget( kcfg__IMEngine_Pinyin_MaxPreeditLength, 1, 1 );

    textLabel1_5_2_2 = new QLabel( frame3, "textLabel1_5_2_2" );

    layout11->addWidget( textLabel1_5_2_2, 2, 0 );

    kcfg__IMEngine_Pinyin_MaxUserPhraseLength = new QSpinBox( frame3, "kcfg__IMEngine_Pinyin_MaxUserPhraseLength" );
    kcfg__IMEngine_Pinyin_MaxUserPhraseLength->setMaxValue( 100 );

    layout11->addWidget( kcfg__IMEngine_Pinyin_MaxUserPhraseLength, 0, 1 );

    kcfg__IMEngine_Pinyin_SmartMatchLevel = new QSpinBox( frame3, "kcfg__IMEngine_Pinyin_SmartMatchLevel" );

    layout11->addWidget( kcfg__IMEngine_Pinyin_SmartMatchLevel, 2, 1 );

    textLabel1_5_2_2_2_2 = new QLabel( frame3, "textLabel1_5_2_2_2_2" );

    layout11->addWidget( textLabel1_5_2_2_2_2, 5, 0 );

    kcfg__IMEngine_Pinyin_BurstStackSize = new QSpinBox( frame3, "kcfg__IMEngine_Pinyin_BurstStackSize" );
    kcfg__IMEngine_Pinyin_BurstStackSize->setMaxValue( 1000 );

    layout11->addWidget( kcfg__IMEngine_Pinyin_BurstStackSize, 3, 1 );
    frame3Layout->addLayout( layout11 );
    layout14->addWidget( frame3 );
    tabLayout->addLayout( layout14 );

    line2 = new QFrame( tab, "line2" );
    line2->setFrameShape( QFrame::HLine );
    line2->setFrameShadow( QFrame::Sunken );
    line2->setFrameShape( QFrame::HLine );
    tabLayout->addWidget( line2 );

    kcfg__IMEngine_Pinyin_User_DataBinary = new QCheckBox( tab, "kcfg__IMEngine_Pinyin_User_DataBinary" );
    tabLayout->addWidget( kcfg__IMEngine_Pinyin_User_DataBinary );

    layout13 = new QHBoxLayout( 0, 0, 6, "layout13"); 
    spacer1 = new QSpacerItem( 309, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout13->addItem( spacer1 );

    advancedCBox = new QCheckBox( tab, "advancedCBox" );
    layout13->addWidget( advancedCBox );
    tabLayout->addLayout( layout13 );
    spacer2 = new QSpacerItem( 20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tabLayout->addItem( spacer2 );
    tabWidget2->insertTab( tab, QString::fromLatin1("") );

    tab_2 = new QWidget( tabWidget2, "tab_2" );
    tabLayout_2 = new QVBoxLayout( tab_2, 11, 6, "tabLayout_2"); 

    layout9 = new QHBoxLayout( 0, 0, 6, "layout9"); 

    kcfg__IMEngine_Pinyin_Tone = new QCheckBox( tab_2, "kcfg__IMEngine_Pinyin_Tone" );
    layout9->addWidget( kcfg__IMEngine_Pinyin_Tone );

    kcfg__IMEngine_Pinyin_Incomplete = new QCheckBox( tab_2, "kcfg__IMEngine_Pinyin_Incomplete" );
    layout9->addWidget( kcfg__IMEngine_Pinyin_Incomplete );

    kcfg__IMEngine_Pinyin_Ambiguities = new QCheckBox( tab_2, "kcfg__IMEngine_Pinyin_Ambiguities" );
    layout9->addWidget( kcfg__IMEngine_Pinyin_Ambiguities );
    tabLayout_2->addLayout( layout9 );

    groupBox1 = new QGroupBox( tab_2, "groupBox1" );
    groupBox1->setColumnLayout(0, Qt::Vertical );
    groupBox1->layout()->setSpacing( 6 );
    groupBox1->layout()->setMargin( 11 );
    groupBox1Layout = new QGridLayout( groupBox1->layout() );
    groupBox1Layout->setAlignment( Qt::AlignTop );

    kcfg__IMEngine_Pinyin_Ambiguity_NeLe = new QCheckBox( groupBox1, "kcfg__IMEngine_Pinyin_Ambiguity_NeLe" );

    groupBox1Layout->addWidget( kcfg__IMEngine_Pinyin_Ambiguity_NeLe, 0, 1 );

    kcfg__IMEngine_Pinyin_Ambiguity_LeRi = new QCheckBox( groupBox1, "kcfg__IMEngine_Pinyin_Ambiguity_LeRi" );

    groupBox1Layout->addWidget( kcfg__IMEngine_Pinyin_Ambiguity_LeRi, 1, 1 );

    kcfg__IMEngine_Pinyin_Ambiguity_FoHe = new QCheckBox( groupBox1, "kcfg__IMEngine_Pinyin_Ambiguity_FoHe" );

    groupBox1Layout->addWidget( kcfg__IMEngine_Pinyin_Ambiguity_FoHe, 2, 1 );

    kcfg__IMEngine_Pinyin_Ambiguity_ZhiZi = new QCheckBox( groupBox1, "kcfg__IMEngine_Pinyin_Ambiguity_ZhiZi" );

    groupBox1Layout->addWidget( kcfg__IMEngine_Pinyin_Ambiguity_ZhiZi, 0, 0 );

    kcfg__IMEngine_Pinyin_Ambiguity_ChiCi = new QCheckBox( groupBox1, "kcfg__IMEngine_Pinyin_Ambiguity_ChiCi" );

    groupBox1Layout->addWidget( kcfg__IMEngine_Pinyin_Ambiguity_ChiCi, 1, 0 );

    kcfg__IMEngine_Pinyin_Ambiguity_ShiSi = new QCheckBox( groupBox1, "kcfg__IMEngine_Pinyin_Ambiguity_ShiSi" );

    groupBox1Layout->addWidget( kcfg__IMEngine_Pinyin_Ambiguity_ShiSi, 2, 0 );

    kcfg__IMEngine_Pinyin_Ambiguity_InIng = new QCheckBox( groupBox1, "kcfg__IMEngine_Pinyin_Ambiguity_InIng" );

    groupBox1Layout->addWidget( kcfg__IMEngine_Pinyin_Ambiguity_InIng, 2, 2 );

    kcfg__IMEngine_Pinyin_Ambiguity_AnAng = new QCheckBox( groupBox1, "kcfg__IMEngine_Pinyin_Ambiguity_AnAng" );

    groupBox1Layout->addWidget( kcfg__IMEngine_Pinyin_Ambiguity_AnAng, 0, 2 );

    kcfg__IMEngine_Pinyin_Ambiguity_EnEng = new QCheckBox( groupBox1, "kcfg__IMEngine_Pinyin_Ambiguity_EnEng" );

    groupBox1Layout->addWidget( kcfg__IMEngine_Pinyin_Ambiguity_EnEng, 1, 2 );
    tabLayout_2->addWidget( groupBox1 );
    spacer3 = new QSpacerItem( 20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tabLayout_2->addItem( spacer3 );
    tabWidget2->insertTab( tab_2, QString::fromLatin1("") );

    TabPage = new QWidget( tabWidget2, "TabPage" );
    TabPageLayout = new QGridLayout( TabPage, 1, 1, 11, 6, "TabPageLayout"); 

    textLabel1_2 = new QLabel( TabPage, "textLabel1_2" );

    TabPageLayout->addWidget( textLabel1_2, 1, 0 );

    textLabel1_3 = new QLabel( TabPage, "textLabel1_3" );

    TabPageLayout->addWidget( textLabel1_3, 2, 0 );

    textLabel1_4 = new QLabel( TabPage, "textLabel1_4" );

    TabPageLayout->addWidget( textLabel1_4, 3, 0 );

    textLabel1 = new QLabel( TabPage, "textLabel1" );

    TabPageLayout->addWidget( textLabel1, 0, 0 );

    punctButton = new SkimEditShortcutButton( TabPage, "punctButton" );

    TabPageLayout->addWidget( punctButton, 0, 2 );

    kcfg__IMEngine_Pinyin_FullWidthPunctKey = new KLineEdit( TabPage, "kcfg__IMEngine_Pinyin_FullWidthPunctKey" );

    TabPageLayout->addWidget( kcfg__IMEngine_Pinyin_FullWidthPunctKey, 0, 1 );

    letterButton = new SkimEditShortcutButton( TabPage, "letterButton" );

    TabPageLayout->addWidget( letterButton, 1, 2 );

    kcfg__IMEngine_Pinyin_FullWidthLetterKey = new KLineEdit( TabPage, "kcfg__IMEngine_Pinyin_FullWidthLetterKey" );

    TabPageLayout->addWidget( kcfg__IMEngine_Pinyin_FullWidthLetterKey, 1, 1 );

    modeButton = new SkimEditShortcutButton( TabPage, "modeButton" );

    TabPageLayout->addWidget( modeButton, 2, 2 );

    kcfg__IMEngine_Pinyin_ModeSwitchKey = new KLineEdit( TabPage, "kcfg__IMEngine_Pinyin_ModeSwitchKey" );

    TabPageLayout->addWidget( kcfg__IMEngine_Pinyin_ModeSwitchKey, 2, 1 );

    kcfg__IMEngine_Pinyin_ChineseSwitchKey = new KLineEdit( TabPage, "kcfg__IMEngine_Pinyin_ChineseSwitchKey" );

    TabPageLayout->addWidget( kcfg__IMEngine_Pinyin_ChineseSwitchKey, 3, 1 );

    chineseModeButton = new SkimEditShortcutButton( TabPage, "chineseModeButton" );

    TabPageLayout->addWidget( chineseModeButton, 3, 2 );

    upButton = new SkimEditShortcutButton( TabPage, "upButton" );

    TabPageLayout->addWidget( upButton, 4, 2 );

    kcfg__IMEngine_Pinyin_PageUpKey = new KLineEdit( TabPage, "kcfg__IMEngine_Pinyin_PageUpKey" );

    TabPageLayout->addWidget( kcfg__IMEngine_Pinyin_PageUpKey, 4, 1 );

    downButton = new SkimEditShortcutButton( TabPage, "downButton" );

    TabPageLayout->addWidget( downButton, 5, 2 );

    kcfg__IMEngine_Pinyin_PageDownKey = new KLineEdit( TabPage, "kcfg__IMEngine_Pinyin_PageDownKey" );

    TabPageLayout->addWidget( kcfg__IMEngine_Pinyin_PageDownKey, 5, 1 );

    disableButton = new SkimEditShortcutButton( TabPage, "disableButton" );

    TabPageLayout->addWidget( disableButton, 6, 2 );

    kcfg__IMEngine_Pinyin_DisablePhraseKey = new KLineEdit( TabPage, "kcfg__IMEngine_Pinyin_DisablePhraseKey" );

    TabPageLayout->addWidget( kcfg__IMEngine_Pinyin_DisablePhraseKey, 6, 1 );

    textLabel1_4_2_2_2 = new QLabel( TabPage, "textLabel1_4_2_2_2" );

    TabPageLayout->addWidget( textLabel1_4_2_2_2, 6, 0 );

    textLabel1_4_2 = new QLabel( TabPage, "textLabel1_4_2" );

    TabPageLayout->addWidget( textLabel1_4_2, 4, 0 );

    textLabel1_4_2_2 = new QLabel( TabPage, "textLabel1_4_2_2" );

    TabPageLayout->addWidget( textLabel1_4_2_2, 5, 0 );
    spacer5 = new QSpacerItem( 20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding );
    TabPageLayout->addItem( spacer5, 7, 1 );
    tabWidget2->insertTab( TabPage, QString::fromLatin1("") );
    SmartPinyinSettingUILayout->addWidget( tabWidget2 );
    languageChange();
    resize( QSize(564, 347).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( kcfg__IMEngine_Pinyin_ChineseSwitchKey, SIGNAL( textChanged(const QString&) ), chineseModeButton, SLOT( setShortcuts(const QString&) ) );
    connect( chineseModeButton, SIGNAL( setEditorText(const QString&) ), kcfg__IMEngine_Pinyin_ChineseSwitchKey, SLOT( setText(const QString&) ) );
    connect( kcfg__IMEngine_Pinyin_DisablePhraseKey, SIGNAL( textChanged(const QString&) ), disableButton, SLOT( setShortcuts(const QString&) ) );
    connect( disableButton, SIGNAL( setEditorText(const QString&) ), kcfg__IMEngine_Pinyin_DisablePhraseKey, SLOT( setText(const QString&) ) );
    connect( kcfg__IMEngine_Pinyin_FullWidthLetterKey, SIGNAL( textChanged(const QString&) ), letterButton, SLOT( setShortcuts(const QString&) ) );
    connect( letterButton, SIGNAL( setEditorText(const QString&) ), kcfg__IMEngine_Pinyin_FullWidthLetterKey, SLOT( setText(const QString&) ) );
    connect( kcfg__IMEngine_Pinyin_FullWidthPunctKey, SIGNAL( textChanged(const QString&) ), punctButton, SLOT( setShortcuts(const QString&) ) );
    connect( punctButton, SIGNAL( setEditorText(const QString&) ), kcfg__IMEngine_Pinyin_FullWidthPunctKey, SLOT( setText(const QString&) ) );
    connect( kcfg__IMEngine_Pinyin_ModeSwitchKey, SIGNAL( textChanged(const QString&) ), modeButton, SLOT( setShortcuts(const QString&) ) );
    connect( modeButton, SIGNAL( setEditorText(const QString&) ), kcfg__IMEngine_Pinyin_ModeSwitchKey, SLOT( setText(const QString&) ) );
    connect( kcfg__IMEngine_Pinyin_PageDownKey, SIGNAL( textChanged(const QString&) ), downButton, SLOT( setShortcuts(const QString&) ) );
    connect( downButton, SIGNAL( setEditorText(const QString&) ), kcfg__IMEngine_Pinyin_PageDownKey, SLOT( setText(const QString&) ) );
    connect( kcfg__IMEngine_Pinyin_PageUpKey, SIGNAL( textChanged(const QString&) ), upButton, SLOT( setShortcuts(const QString&) ) );
    connect( upButton, SIGNAL( setEditorText(const QString&) ), kcfg__IMEngine_Pinyin_PageUpKey, SLOT( setText(const QString&) ) );
    connect( advancedCBox, SIGNAL( toggled(bool) ), kcfg__IMEngine_Pinyin_User_DataBinary, SLOT( setShown(bool) ) );
    connect( advancedCBox, SIGNAL( toggled(bool) ), line2, SLOT( setShown(bool) ) );
    connect( advancedCBox, SIGNAL( toggled(bool) ), line1, SLOT( setShown(bool) ) );
    connect( advancedCBox, SIGNAL( toggled(bool) ), frame3, SLOT( setShown(bool) ) );
    connect( kcfg__IMEngine_Pinyin_AutoCombinePhrase, SIGNAL( toggled(bool) ), kcfg__IMEngine_Pinyin_MatchLongerPhrase, SLOT( setDisabled(bool) ) );
    connect( kcfg__IMEngine_Pinyin_AutoFillPreedit, SIGNAL( toggled(bool) ), kcfg__IMEngine_Pinyin_AlwaysShowLookup, SLOT( setEnabled(bool) ) );
    connect( kcfg__IMEngine_Pinyin_AutoFillPreedit, SIGNAL( toggled(bool) ), kcfg__IMEngine_Pinyin_ShowAllKeys, SLOT( setEnabled(bool) ) );
    connect( kcfg__IMEngine_Pinyin_Ambiguities, SIGNAL( toggled(bool) ), groupBox1, SLOT( setEnabled(bool) ) );

    // tab order
    setTabOrder( tabWidget2, kcfg__IMEngine_Pinyin_AutoCombinePhrase );
    setTabOrder( kcfg__IMEngine_Pinyin_AutoCombinePhrase, kcfg__IMEngine_Pinyin_AutoFillPreedit );
    setTabOrder( kcfg__IMEngine_Pinyin_AutoFillPreedit, kcfg__IMEngine_Pinyin_MatchLongerPhrase );
    setTabOrder( kcfg__IMEngine_Pinyin_MatchLongerPhrase, kcfg__IMEngine_Pinyin_AlwaysShowLookup );
    setTabOrder( kcfg__IMEngine_Pinyin_AlwaysShowLookup, kcfg__IMEngine_Pinyin_ShowAllKeys );
    setTabOrder( kcfg__IMEngine_Pinyin_ShowAllKeys, kcfg__IMEngine_Pinyin_DynamicAdjust );
    setTabOrder( kcfg__IMEngine_Pinyin_DynamicAdjust, advancedCBox );
    setTabOrder( advancedCBox, kcfg__IMEngine_Pinyin_MaxUserPhraseLength );
    setTabOrder( kcfg__IMEngine_Pinyin_MaxUserPhraseLength, kcfg__IMEngine_Pinyin_MaxPreeditLength );
    setTabOrder( kcfg__IMEngine_Pinyin_MaxPreeditLength, kcfg__IMEngine_Pinyin_SmartMatchLevel );
    setTabOrder( kcfg__IMEngine_Pinyin_SmartMatchLevel, kcfg__IMEngine_Pinyin_BurstStackSize );
    setTabOrder( kcfg__IMEngine_Pinyin_BurstStackSize, kcfg__IMEngine_Pinyin_DynamicSensitivity );
    setTabOrder( kcfg__IMEngine_Pinyin_DynamicSensitivity, kcfg__IMEngine_Pinyin_SavePeriod );
    setTabOrder( kcfg__IMEngine_Pinyin_SavePeriod, kcfg__IMEngine_Pinyin_User_DataBinary );
    setTabOrder( kcfg__IMEngine_Pinyin_User_DataBinary, kcfg__IMEngine_Pinyin_Tone );
    setTabOrder( kcfg__IMEngine_Pinyin_Tone, kcfg__IMEngine_Pinyin_Incomplete );
    setTabOrder( kcfg__IMEngine_Pinyin_Incomplete, kcfg__IMEngine_Pinyin_Ambiguity_NeLe );
    setTabOrder( kcfg__IMEngine_Pinyin_Ambiguity_NeLe, kcfg__IMEngine_Pinyin_Ambiguity_LeRi );
    setTabOrder( kcfg__IMEngine_Pinyin_Ambiguity_LeRi, kcfg__IMEngine_Pinyin_Ambiguity_FoHe );
    setTabOrder( kcfg__IMEngine_Pinyin_Ambiguity_FoHe, kcfg__IMEngine_Pinyin_Ambiguity_ZhiZi );
    setTabOrder( kcfg__IMEngine_Pinyin_Ambiguity_ZhiZi, kcfg__IMEngine_Pinyin_Ambiguity_ChiCi );
    setTabOrder( kcfg__IMEngine_Pinyin_Ambiguity_ChiCi, kcfg__IMEngine_Pinyin_Ambiguity_ShiSi );
    setTabOrder( kcfg__IMEngine_Pinyin_Ambiguity_ShiSi, kcfg__IMEngine_Pinyin_Ambiguity_InIng );
    setTabOrder( kcfg__IMEngine_Pinyin_Ambiguity_InIng, kcfg__IMEngine_Pinyin_Ambiguity_AnAng );
    setTabOrder( kcfg__IMEngine_Pinyin_Ambiguity_AnAng, kcfg__IMEngine_Pinyin_Ambiguity_EnEng );
    setTabOrder( kcfg__IMEngine_Pinyin_Ambiguity_EnEng, kcfg__IMEngine_Pinyin_FullWidthPunctKey );
    setTabOrder( kcfg__IMEngine_Pinyin_FullWidthPunctKey, kcfg__IMEngine_Pinyin_FullWidthLetterKey );
    setTabOrder( kcfg__IMEngine_Pinyin_FullWidthLetterKey, kcfg__IMEngine_Pinyin_ModeSwitchKey );
    setTabOrder( kcfg__IMEngine_Pinyin_ModeSwitchKey, kcfg__IMEngine_Pinyin_ChineseSwitchKey );
    setTabOrder( kcfg__IMEngine_Pinyin_ChineseSwitchKey, kcfg__IMEngine_Pinyin_PageUpKey );
    setTabOrder( kcfg__IMEngine_Pinyin_PageUpKey, kcfg__IMEngine_Pinyin_PageDownKey );
    setTabOrder( kcfg__IMEngine_Pinyin_PageDownKey, kcfg__IMEngine_Pinyin_DisablePhraseKey );

    // buddies
    textLabel1_5_2_2_3->setBuddy( kcfg__IMEngine_Pinyin_BurstStackSize );
    textLabel1_5->setBuddy( kcfg__IMEngine_Pinyin_MaxUserPhraseLength );
    textLabel1_5_2->setBuddy( kcfg__IMEngine_Pinyin_MaxPreeditLength );
    textLabel1_5_2_2_2->setBuddy( kcfg__IMEngine_Pinyin_DynamicSensitivity );
    textLabel1_5_2_2->setBuddy( kcfg__IMEngine_Pinyin_SmartMatchLevel );
    textLabel1_5_2_2_2_2->setBuddy( kcfg__IMEngine_Pinyin_SavePeriod );
    textLabel1_2->setBuddy( kcfg__IMEngine_Pinyin_FullWidthLetterKey );
    textLabel1_3->setBuddy( kcfg__IMEngine_Pinyin_ModeSwitchKey );
    textLabel1_4->setBuddy( kcfg__IMEngine_Pinyin_ChineseSwitchKey );
    textLabel1->setBuddy( kcfg__IMEngine_Pinyin_FullWidthPunctKey );
    textLabel1_4_2_2_2->setBuddy( kcfg__IMEngine_Pinyin_DisablePhraseKey );
    textLabel1_4_2->setBuddy( kcfg__IMEngine_Pinyin_PageUpKey );
    textLabel1_4_2_2->setBuddy( kcfg__IMEngine_Pinyin_PageDownKey );
}

/*
 *  Destroys the object and frees any allocated resources
 */
SmartPinyinSettingUI::~SmartPinyinSettingUI()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void SmartPinyinSettingUI::languageChange()
{
    setCaption( tr2i18n( "Smart Pinyin" ) );
    kcfg__IMEngine_Pinyin_AutoCombinePhrase->setText( tr2i18n( "Auto &combin phrase" ) );
    kcfg__IMEngine_Pinyin_AutoFillPreedit->setText( tr2i18n( "Auto &fill preedit" ) );
    kcfg__IMEngine_Pinyin_MatchLongerPhrase->setText( tr2i18n( "&Match longer phrase" ) );
    kcfg__IMEngine_Pinyin_AlwaysShowLookup->setText( tr2i18n( "Always show lookup &table" ) );
    kcfg__IMEngine_Pinyin_ShowAllKeys->setText( tr2i18n( "Show all &keys" ) );
    kcfg__IMEngine_Pinyin_DynamicAdjust->setText( tr2i18n( "&Dynamic adjust" ) );
    textLabel1_5_2_2_3->setText( tr2i18n( "&Burst stack size" ) );
    textLabel1_5->setText( tr2i18n( "Max &user phrase length" ) );
    textLabel1_5_2->setText( tr2i18n( "Max &preedit length" ) );
    textLabel1_5_2_2_2->setText( tr2i18n( "D&ynamic sensitivity" ) );
    textLabel1_5_2_2->setText( tr2i18n( "&Smart match level" ) );
    textLabel1_5_2_2_2_2->setText( tr2i18n( "Sa&ve period (sec)" ) );
    kcfg__IMEngine_Pinyin_User_DataBinary->setText( tr2i18n( "Save user data in binary &format" ) );
    advancedCBox->setText( tr2i18n( "&Advanced" ) );
    tabWidget2->changeTab( tab, tr2i18n( "General" ) );
    kcfg__IMEngine_Pinyin_Tone->setText( tr2i18n( "&Use tone" ) );
    kcfg__IMEngine_Pinyin_Incomplete->setText( tr2i18n( "Allow incomplete &pinyin" ) );
    kcfg__IMEngine_Pinyin_Ambiguities->setText( tr2i18n( "Enable A&mbiguities" ) );
    groupBox1->setTitle( tr2i18n( "Ambiguities" ) );
    kcfg__IMEngine_Pinyin_Ambiguity_NeLe->setText( tr2i18n( "&N and L" ) );
    kcfg__IMEngine_Pinyin_Ambiguity_LeRi->setText( tr2i18n( "&L and R" ) );
    kcfg__IMEngine_Pinyin_Ambiguity_FoHe->setText( tr2i18n( "&F and H" ) );
    kcfg__IMEngine_Pinyin_Ambiguity_ZhiZi->setText( tr2i18n( "&Zh and Z" ) );
    kcfg__IMEngine_Pinyin_Ambiguity_ChiCi->setText( tr2i18n( "&Ch and C" ) );
    kcfg__IMEngine_Pinyin_Ambiguity_ShiSi->setText( tr2i18n( "&Sh and S" ) );
    kcfg__IMEngine_Pinyin_Ambiguity_InIng->setText( tr2i18n( "&In and Ing" ) );
    kcfg__IMEngine_Pinyin_Ambiguity_AnAng->setText( tr2i18n( "&An and Ang" ) );
    kcfg__IMEngine_Pinyin_Ambiguity_EnEng->setText( tr2i18n( "&En and Eng" ) );
    tabWidget2->changeTab( tab_2, tr2i18n( "Pinyin" ) );
    textLabel1_2->setText( tr2i18n( "Full width &letter" ) );
    textLabel1_3->setText( tr2i18n( "&Mode switch" ) );
    textLabel1_4->setText( tr2i18n( "&Chinese mode switch" ) );
    textLabel1->setText( tr2i18n( "Full with &punctuation" ) );
    textLabel1_4_2_2_2->setText( tr2i18n( "&Disable phrase" ) );
    textLabel1_4_2->setText( tr2i18n( "Page &up" ) );
    textLabel1_4_2_2->setText( tr2i18n( "Page dow&n" ) );
    tabWidget2->changeTab( TabPage, tr2i18n( "Keyboard" ) );
}

#include "smartpinyinui.moc"
