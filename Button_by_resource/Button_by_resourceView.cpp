
// Button_by_resourceView.cpp : implementation of the CButtonbyresourceView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Button_by_resource.h"
#endif

#include "Button_by_resourceDoc.h"
#include "Button_by_resourceView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CButtonbyresourceView

IMPLEMENT_DYNCREATE(CButtonbyresourceView, CFormView)

BEGIN_MESSAGE_MAP(CButtonbyresourceView, CFormView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CFormView::OnFilePrintPreview)
	ON_BN_CLICKED(IDC_BUTTON1, &CButtonbyresourceView::OnBnClickedButton1)
END_MESSAGE_MAP()

// CButtonbyresourceView construction/destruction

CButtonbyresourceView::CButtonbyresourceView() noexcept
	: CFormView(IDD_BUTTON_BY_RESOURCE_FORM)
{
	// TODO: add construction code here

}

CButtonbyresourceView::~CButtonbyresourceView()
{
}

void CButtonbyresourceView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CHECK1, m_checkbox);
	DDX_Control(pDX, IDC_CHECK2, m_3state);
	DDX_Control(pDX, IDC_RADIO1, m_radio1);
	DDX_Control(pDX, IDC_RADIO2, m_radio2);
}

BOOL CButtonbyresourceView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CButtonbyresourceView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();


	m_checkbox.SetCheck(1);
	m_3state.SetCheck(2);
	m_radio2.SetCheck(1);
}


// CButtonbyresourceView printing

BOOL CButtonbyresourceView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CButtonbyresourceView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CButtonbyresourceView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CButtonbyresourceView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}


// CButtonbyresourceView diagnostics

#ifdef _DEBUG
void CButtonbyresourceView::AssertValid() const
{
	CFormView::AssertValid();
}

void CButtonbyresourceView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CButtonbyresourceDoc* CButtonbyresourceView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CButtonbyresourceDoc)));
	return (CButtonbyresourceDoc*)m_pDocument;
}
#endif //_DEBUG


// CButtonbyresourceView message handlers


void CButtonbyresourceView::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here

	int state_checkbox = m_checkbox.GetCheck();
	int state_3state = m_3state.GetCheck();
	int state_radio1 = m_radio1.GetCheck();
	int state_radio2 = m_radio2.GetCheck();

	CString str;
	str.Format(_T("Button state : %d, %d, %d, %d"),
		state_checkbox, state_3state, state_radio1, state_radio2);

	MessageBox(str, _T("Button example"), MB_ICONINFORMATION);
}
