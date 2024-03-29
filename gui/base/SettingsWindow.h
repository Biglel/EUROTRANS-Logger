///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 18 2019)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/checkbox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/filepicker.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/textctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

namespace base
{

	///////////////////////////////////////////////////////////////////////////////
	/// Class SettingsWindow
	///////////////////////////////////////////////////////////////////////////////
	class SettingsWindow : public wxDialog
	{
		private:

		protected:
			wxCheckBox* m_checkBoxETS2;
			wxDirPickerCtrl* m_dirCtrlETS2Path;
			wxCheckBox* m_checkBoxATS;
			wxDirPickerCtrl* m_dirCtrlATSPath;
			wxTextCtrl* m_textCtrlURL;
			wxTextCtrl* m_textCtrlToken;
			wxCheckBox* m_checkBoxStartOnStartup;
			wxCheckBox* m_checkBoxRunInBackground;
			wxButton* m_buttonOK;

			// Virtual event handlers, overide them in your derived class
			virtual void on_install_ets2( wxCommandEvent& event ) = 0;
			virtual void on_install_ats( wxCommandEvent& event ) = 0;
			virtual void on_click_ok( wxCommandEvent& event ) = 0;


		public:

			SettingsWindow( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("EUROTRANS-Logger - Configuration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
			~SettingsWindow();

	};

} // namespace base

