
// Button_by_resourceView.h : interface of the CButtonbyresourceView class
//

#pragma once


class CButtonbyresourceView : public CFormView
{
protected: // create from serialization only
	CButtonbyresourceView() noexcept;
	DECLARE_DYNCREATE(CButtonbyresourceView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_BUTTON_BY_RESOURCE_FORM };
#endif

// Attributes
public:
	CButtonbyresourceDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CButtonbyresourceView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Button_by_resourceView.cpp
inline CButtonbyresourceDoc* CButtonbyresourceView::GetDocument() const
   { return reinterpret_cast<CButtonbyresourceDoc*>(m_pDocument); }
#endif

