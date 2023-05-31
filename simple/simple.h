
// simple.h : main header file for the simple application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CsimpleApp:
// See simple.cpp for the implementation of this class
//

class CsimpleApp : public CWinApp
{
public:
	CsimpleApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

public:
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CsimpleApp theApp;
