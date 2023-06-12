
// Button_by_code.h : main header file for the Button_by_code application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CButtonbycodeApp:
// See Button_by_code.cpp for the implementation of this class
//

class CButtonbycodeApp : public CWinApp
{
public:
	CButtonbycodeApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CButtonbycodeApp theApp;
