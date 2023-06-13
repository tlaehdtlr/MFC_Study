
// ModalDialog.h : main header file for the ModalDialog application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CModalDialogApp:
// See ModalDialog.cpp for the implementation of this class
//

class CModalDialogApp : public CWinApp
{
public:
	CModalDialogApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CModalDialogApp theApp;
