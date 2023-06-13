
// SubClassView.cpp : implementation of the CSubClassView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "SubClass.h"
#endif

#include "SubClassDoc.h"
#include "SubClassView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSubClassView

IMPLEMENT_DYNCREATE(CSubClassView, CFormView)

BEGIN_MESSAGE_MAP(CSubClassView, CFormView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CFormView::OnFilePrintPreview)
	ON_EN_CHANGE(IDC_EDIT1, &CSubClassView::OnEnChangeEdit1)
END_MESSAGE_MAP()

// CSubClassView construction/destruction

CSubClassView::CSubClassView() noexcept
	: CFormView(IDD_SUBCLASS_FORM)
{
	// TODO: add construction code here

}

CSubClassView::~CSubClassView()
{
}

void CSubClassView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_edit1);
}

BOOL CSubClassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CSubClassView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();
	m_edit2.SubclassDlgItem(IDC_EDIT2, this);
}


// CSubClassView printing

BOOL CSubClassView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSubClassView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSubClassView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CSubClassView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}


// CSubClassView diagnostics

#ifdef _DEBUG
void CSubClassView::AssertValid() const
{
	CFormView::AssertValid();
}

void CSubClassView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CSubClassDoc* CSubClassView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSubClassDoc)));
	return (CSubClassDoc*)m_pDocument;
}
#endif //_DEBUG


// CSubClassView message handlers


void CSubClassView::OnEnChangeEdit1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CFormView::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}
