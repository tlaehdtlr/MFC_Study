
// Button_by_codeView.cpp : implementation of the CButtonbycodeView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Button_by_code.h"
#endif

#include "Button_by_codeDoc.h"
#include "Button_by_codeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CButtonbycodeView

IMPLEMENT_DYNCREATE(CButtonbycodeView, CView)

BEGIN_MESSAGE_MAP(CButtonbycodeView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CREATE()
	ON_BN_CLICKED(101, OnButtonClicked)
END_MESSAGE_MAP()

// CButtonbycodeView construction/destruction

CButtonbycodeView::CButtonbycodeView() noexcept
{
	// TODO: add construction code here

}

CButtonbycodeView::~CButtonbycodeView()
{
}

BOOL CButtonbycodeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CButtonbycodeView drawing

void CButtonbycodeView::OnDraw(CDC* /*pDC*/)
{
	CButtonbycodeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CButtonbycodeView printing

BOOL CButtonbycodeView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CButtonbycodeView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CButtonbycodeView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CButtonbycodeView diagnostics

#ifdef _DEBUG
void CButtonbycodeView::AssertValid() const
{
	CView::AssertValid();
}

void CButtonbycodeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CButtonbycodeDoc* CButtonbycodeView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CButtonbycodeDoc)));
	return (CButtonbycodeDoc*)m_pDocument;
}
#endif //_DEBUG


// CButtonbycodeView message handlers

int CButtonbycodeView::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  Add your specialized creation code here

	m_pushbutton.Create(_T("Push button"),
		WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
		CRect(20, 20, 160, 50), this, 101);
	
	m_checkbox.Create(_T("Check box"),
		WS_CHILD| WS_VISIBLE | BS_AUTOCHECKBOX,
		CRect(20, 60, 160, 90), this, 102);

	m_3state.Create(_T("3 state check box"),
		WS_CHILD| WS_VISIBLE | BS_AUTO3STATE,
		CRect(20, 100, 160, 130), this, 103);

	m_radio1.Create(_T("Radio 1"),
		WS_CHILD| WS_VISIBLE | WS_GROUP | BS_AUTORADIOBUTTON,
		CRect(20, 170, 160, 200), this, 104);

	m_radio2.Create(_T("Radio 2"),
		WS_CHILD| WS_VISIBLE | BS_AUTORADIOBUTTON,
		CRect(20, 210, 160, 240), this, 105);
	
	m_groupbox.Create(_T("Group box"),
		WS_CHILD| WS_VISIBLE | BS_GROUPBOX,
		CRect(20, 140, 160, 250), this, 106);

	m_checkbox.SetCheck(1);
	m_3state.SetCheck(2);
	m_radio2.SetCheck(1);

	return 0;
}


void CButtonbycodeView::OnButtonClicked()
{
	// TODO: Add your implementation code here.
	int state_checkbox = m_checkbox.GetCheck();
	int state_3state = m_3state.GetCheck();
	int state_radio1 = m_radio1.GetCheck();
	int state_radio2 = m_radio2.GetCheck();

	CString str;
	str.Format(_T("Button state : %d, %d, %d, %d"),
		state_checkbox, state_3state, state_radio1, state_radio2);

	MessageBox(str, _T("Button ¿¹Á¦"), MB_ICONINFORMATION);
}
