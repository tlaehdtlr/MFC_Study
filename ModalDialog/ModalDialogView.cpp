
// ModalDialogView.cpp : implementation of the CModalDialogView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "ModalDialog.h"
#endif

#include "ModalDialogDoc.h"
#include "ModalDialogView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CModalDialogView

IMPLEMENT_DYNCREATE(CModalDialogView, CView)

BEGIN_MESSAGE_MAP(CModalDialogView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CModalDialogView construction/destruction

CModalDialogView::CModalDialogView() noexcept
{
	// TODO: add construction code here

}

CModalDialogView::~CModalDialogView()
{
}

BOOL CModalDialogView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CModalDialogView drawing

void CModalDialogView::OnDraw(CDC* /*pDC*/)
{
	CModalDialogDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CModalDialogView printing

BOOL CModalDialogView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CModalDialogView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CModalDialogView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CModalDialogView diagnostics

#ifdef _DEBUG
void CModalDialogView::AssertValid() const
{
	CView::AssertValid();
}

void CModalDialogView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CModalDialogDoc* CModalDialogView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CModalDialogDoc)));
	return (CModalDialogDoc*)m_pDocument;
}
#endif //_DEBUG


// CModalDialogView message handlers
