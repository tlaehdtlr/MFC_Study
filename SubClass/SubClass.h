
// SubClass.h : main header file for the SubClass application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CSubClassApp:
// See SubClass.cpp for the implementation of this class
//

class CSubClassApp : public CWinApp
{
public:
	CSubClassApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSubClassApp theApp;
