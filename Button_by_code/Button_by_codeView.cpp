
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
