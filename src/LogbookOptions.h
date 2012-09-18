///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __logbookoptions__
#define __logbookoptions__

#include "wx/wxprec.h"

#ifndef  WX_PRECOMP
  #include "wx/wx.h"
#endif //precompiled headers

#include <wx/sizer.h>
#include <wx/gdicmn.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statline.h>
#include <wx/checkbox.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/button.h>
#include <wx/dialog.h>


///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class LogbookOptions
///////////////////////////////////////////////////////////////////////////////
class Options;
class logbook_pi;

class LogbookOptions : public wxDialog 
{
	public:
		wxScrolledWindow* m_scrolledWindow1;
		wxNotebook* m_notebook4;
		wxPanel* m_panel15;
		wxStaticText* m_staticText132;
		wxChoice* m_choiceDateFormat;
		wxChoice* m_choiceDate1;
		wxChoice* m_choiceDate2;
		wxChoice* m_choiceDate3;
		wxStaticText* m_staticText128;
		wxTextCtrl* m_textCtrlDateSeparator;
		wxStaticText* m_staticTextDate;
		wxStaticText* m_staticText133;
		wxChoice* m_choiceTimeFormat;
		wxCheckBox* m_checkBoxNoSeconds;
		wxStaticText* m_staticTextTime;
		wxRadioButton* m_radioBtnUTC;
		wxStaticText* m_staticText71;
		wxStaticLine* m_staticline44;
		wxCheckBox* m_checkBoxShowLogbook;
		wxStaticText* m_staticText76;
		wxCheckBox* m_checkBoxShowOnlySelectedLayouts;
		wxStaticText* m_staticText741;
		wxStaticLine* m_staticline25;
		wxStaticLine* m_staticline22;
		wxStaticText* m_staticText123;
		wxStaticText* m_staticText56;
		wxTextCtrl* m_timerText;
		wxStaticText* m_staticText121;
		wxStaticText* m_staticText122;
		wxStaticText* m_staticText1231;
		wxStaticText* m_staticText124;
		wxStaticLine* m_staticline10;
		wxStaticText* m_staticText731;
		wxStaticText* m_staticText742;
		wxStaticText* m_staticText751;
		wxButton* m_buttonInstallHTMLFiles;
		wxButton* m_buttonInstallLanguages;
		wxButton* m_buttonUninstall;
		wxStaticLine* m_staticline261;
		wxPanel* m_panel20;
		wxStaticText* m_staticText1041;
		wxStaticLine* m_staticline34;
		wxStaticText* m_staticText99;
		wxStaticText* m_staticText100;
		wxStaticText* m_staticText102;
		wxStaticLine* m_staticline33;
		wxStaticText* m_staticText96;
		wxStaticText* m_staticText97;
		wxStaticLine* m_staticline32;
		wxStaticText* m_staticText104;
		wxStaticText* m_staticText105;
		wxStaticText* m_staticText107;
		wxPanel* m_panel16;
		wxStaticText* m_staticText34;
		wxStaticText* m_staticText31;
		wxTextCtrl* m_sDeg;
		wxStaticText* m_staticText35;
		wxTextCtrl* m_sMin;
		wxStaticText* m_staticText36;
		wxTextCtrl* m_sSec;
		wxStaticText* m_staticText38;
		wxTextCtrl* m_sDist;
		wxStaticText* m_staticText39;
		wxTextCtrl* m_sSpeed;
		wxStaticText* m_staticText40;
		wxStaticText* m_staticText41;
		wxTextCtrl* m_smeter;
		wxStaticText* m_staticText63;
		wxStaticText* m_staticText48;
		wxTextCtrl* m_sFeet;
		wxStaticText* m_staticText632;
		wxStaticText* m_staticText49;
		wxTextCtrl* m_sFathom;
		wxStaticText* m_staticText42;
		wxStaticText* m_staticText43;
		wxTextCtrl* m_sBaro;
		wxStaticText* m_staticText44;
		wxTextCtrl* m_sKnots;
		wxTextCtrl* m_sMeterSec;
		wxTextCtrl* m_sKmh;
		wxStaticText* m_staticText791;
		wxStaticText* m_staticText46;
		wxStaticText* m_staticText47;
		wxTextCtrl* m_sLiter;
		wxStaticText* m_staticText50;
		wxTextCtrl* m_sMotorh;
		wxStaticText* m_staticText106;
		wxStaticText* m_staticText70;
		wxStaticText* m_staticText712;
		wxStaticText* m_staticText72;
		wxStaticText* m_staticText73;
		wxStaticLine* m_staticline251;
		wxStaticText* m_staticText75;
		wxStaticLine* m_staticline26;
		wxStaticText* m_staticText51;
		wxChoice* m_choiceWind;
		wxStaticText* m_staticText45;
		wxChoice* m_choiceDir;
		wxPanel* m_panel17;
		wxStaticText* m_staticText761;
		wxBitmapButton* m_bpButtonODT;
		wxStaticText* m_staticText77;
		wxBitmapButton* m_bpButtonDatamanager;
		wxStaticText* m_staticText78;
		wxBitmapButton* m_bpButtonMail;
		wxStaticText* m_staticText79;
		wxButton* m_buttonResetPath;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Cancel;

		wxString stimeh;
		wxString stimei;
		wxString stimem;
		wxString stimes;
		wxString sam;
		wxArrayString sadate;
		wxString sseplocale;
		wxString ssepindiv;
		wxCheckBox* m_checkBoxPopUp;
		wxDateTime textCtrlDate;

		// Virtual event handlers, overide them in your derived class
		 void onChoicePositionFormat( wxCommandEvent& event );
		 void OnTextEnterm_textCtrlWatermaker( wxCommandEvent& event );
		 void onCheckBoxToolTips( wxCommandEvent& event );
		 void onCeckBoxShowAllLayouts( wxCommandEvent& event );
		 void onCheckBoxShowOnlySelectedLayouts( wxCommandEvent& event );
		 void OnTextEnterLayoutPrefix( wxCommandEvent& event );
		 void OnCheckBoxMaintenanceRowColoured( wxCommandEvent& event );
		 void onCheckBoNoGPS( wxCommandEvent& event );
//		 void onCheckBoxGuardChanged( wxCommandEvent& event );
//		 void m_checkBoxTimerOnCheckBox( wxCommandEvent& event );
		 void onRadioBtnUTC( wxCommandEvent& event );
		 void onRadioBtnLocal( wxCommandEvent& event );
		 void onRadioBtnGPSAuto( wxCommandEvent& event );
		 void onButtonClickInstallHTMLFiles( wxCommandEvent& event );
		 void onButtonClickInstallLanguages( wxCommandEvent& event );
		 void onButtonClickODT( wxCommandEvent& event );
		 void onButtonClickDataManager( wxCommandEvent& event );
		 void onButtonClickMail( wxCommandEvent& event );
		 void onButtonHTMLEditor( wxCommandEvent& event );
		 void onTextEnterm_sKnots( wxCommandEvent& event );
		 void onTextEnterm_sMeterSec( wxCommandEvent& event );
		 void onTextEnterm_sKmh( wxCommandEvent& event );
		 void onTextm_sLiter( wxCommandEvent& event );
		 void OnButtonOKClick( wxCommandEvent& event );
		 void OnButtonClickUninstall( wxCommandEvent& event );
		 void OnButtonResetPaths( wxCommandEvent& event );
		 void OnTextEnterFuelTank( wxCommandEvent& event );
		 void OnTextEnterWaterTank( wxCommandEvent& event );
		 void OnTextEnterBank1( wxCommandEvent& event );
		 void onTextEnterBank2( wxCommandEvent& event );
		 void OnChoiceTimeFormat( wxCommandEvent& event );
		 void OnCheckboxNoSeconds( wxCommandEvent& event );
		 void OnChoiceDate1( wxCommandEvent& event );
		 void OnChoiceDate2( wxCommandEvent& event ); 
		 void OnChoiceDate3( wxCommandEvent& event );
		 void OnChoiceDateFormat( wxCommandEvent& event );
		 void OnTextDateSeparator( wxCommandEvent& event );
		 void OnCancel( wxCommandEvent& event );
		 void OnClose( wxCloseEvent& event );
	
	public:
		wxChoice* m_choicePositionFormat;
		wxCheckBox* m_checkBoxToolTips;
		wxCheckBox* m_checkBoxShowAllLayouts;
		wxTextCtrl* m_textCtrlLayoutPrefix;
		wxCheckBox* m_checkBoxNoGPS;
		wxChoice* m_choiceWindTo;
		wxCheckBox* m_checkBoxWayPoint;
		wxTextCtrl* m_textCtrlWayPoint;
		wxCheckBox* m_checkBoxGuardChanged;
		wxTextCtrl* m_textCtrlGuradChanged;
		wxCheckBox* m_checkBoxEverySM;
		wxTextCtrl* m_textCtrlEverySM;
		wxTextCtrl* m_textCtrlEverySMText;
		wxCheckBox* m_checkBoxCourseChanged;
		wxTextCtrl* m_textCtrlCourseCahngedMoreThen;
		wxTextCtrl* m_textCtrlCourseMessageAfter;
		wxTextCtrl* m_textCtrlChancedCourse;
		wxStaticText* m_staticText54;
		wxRadioButton* m_radioBtnLocal;
		wxChoice* m_choiceTzIndicator;
		wxChoice* m_choiceTzHours;
		wxRadioButton* m_radioBtnGPSAuto;
		wxTextCtrl* m_textCtrlTankWater;
		wxTextCtrl* m_textCtrlWatermaker;
		wxTextCtrl* m_textCtrlTankFuel;
		wxTextCtrl* m_textCtrlBank1;
		wxTextCtrl* m_textCtrlBank2;
		wxChoice* m_choiceDepth;
		wxChoice* m_choiceWaveSwell;
		wxChoice* m_choiceHeading;
		wxTextCtrl* m_textCtrlTemperature;
		wxTextCtrl* m_textCtrlAmpere;
		wxTextCtrl* m_Days;
		wxTextCtrl* m_Weeks;
		wxTextCtrl* m_textMonth;
		wxTextCtrl* m_textCtrlODTEditor;
		wxTextCtrl* m_textCtrlDataManager;
		wxTextCtrl* m_textCtrlMailClient;
		wxTextCtrl* m_textCtrlHTMLEditorPath;
		wxBitmapButton* m_bpButtonHTMLEditor;


		LogbookOptions( wxWindow* parent, Options* opt, logbookkonni_pi* log_pi, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(652,580), long style = wxDEFAULT_DIALOG_STYLE|wxVSCROLL );
		~LogbookOptions();

		void getValues();
		void setTimeFormat(int i);
		void setDateFormat();

	private:
		Options			 *opt;
		logbookkonni_pi* log_pi;
		wxDateTime		 sample;
		wxString		 path;
	    bool			 modified;
		wxString		oldPattern;
		wxString		oldDateFormat;
		int				iOldDateFormat;
		int				ioldDate1;
		int				ioldDate2;
		int				ioldDate3;
		int				ioldTimeFormat;
		bool			boldNoSeconds;

		wxString choicesWind[3];

		void init();
		void setValues();
		void loadLanguages();
		void updateWindChoice();
		void updateChoiceBoxes();
		void setDateEnabled(int i);
		void resetToOldDateTimeFormat();
	
};
#endif
