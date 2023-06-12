
// Button_by_codeView.h : interface of the CButtonbycodeView class
//

#pragma once


class CButtonbycodeView : public CView
{
protected: // create from serialization only
	CButtonbycodeView() noexcept;
	DECLARE_DYNCREATE(CButtonbycodeView)

// Attributes
public:
	CButtonbycodeDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CButtonbycodeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Button_by_codeView.cpp
inline CButtonbycodeDoc* CButtonbycodeView::GetDocument() const
   { return reinterpret_cast<CButtonbycodeDoc*>(m_pDocument); }
#endif

