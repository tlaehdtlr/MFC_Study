
// InputSaveLoadView.cpp : implementation of the CInputSaveLoadView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "InputSaveLoad.h"
#endif

#include "InputSaveLoadDoc.h"
#include "InputSaveLoadView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CInputSaveLoadView

IMPLEMENT_DYNCREATE(CInputSaveLoadView, CView)

BEGIN_MESSAGE_MAP(CInputSaveLoadView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CInputSaveLoadView construction/destruction

CInputSaveLoadView::CInputSaveLoadView() noexcept
{
	// TODO: add construction code here

}

CInputSaveLoadView::~CInputSaveLoadView()
{
}

BOOL CInputSaveLoadView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CInputSaveLoadView drawing

void CInputSaveLoadView::OnDraw(CDC* /*pDC*/)
{
	CInputSaveLoadDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CInputSaveLoadView printing

BOOL CInputSaveLoadView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CInputSaveLoadView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CInputSaveLoadView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CInputSaveLoadView diagnostics

#ifdef _DEBUG
void CInputSaveLoadView::AssertValid() const
{
	CView::AssertValid();
}

void CInputSaveLoadView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CInputSaveLoadDoc* CInputSaveLoadView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CInputSaveLoadDoc)));
	return (CInputSaveLoadDoc*)m_pDocument;
}
#endif //_DEBUG


// CInputSaveLoadView message handlers
