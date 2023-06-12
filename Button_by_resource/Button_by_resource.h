
// Button_by_resource.h : main header file for the Button_by_resource application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CButtonbyresourceApp:
// See Button_by_resource.cpp for the implementation of this class
//

class CButtonbyresourceApp : public CWinApp
{
public:
	CButtonbyresourceApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CButtonbyresourceApp theApp;
