
// MessageReflection.h : main header file for the MessageReflection application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMessageReflectionApp:
// See MessageReflection.cpp for the implementation of this class
//

class CMessageReflectionApp : public CWinApp
{
public:
	CMessageReflectionApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMessageReflectionApp theApp;
