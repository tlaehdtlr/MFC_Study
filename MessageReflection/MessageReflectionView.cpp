
// MessageReflectionView.cpp : implementation of the CMessageReflectionView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MessageReflection.h"
#endif

#include "MessageReflectionDoc.h"
#include "MessageReflectionView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMessageReflectionView

IMPLEMENT_DYNCREATE(CMessageReflectionView, CFormView)

BEGIN_MESSAGE_MAP(CMessageReflectionView, CFormView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMessageReflectionView construction/destruction

CMessageReflectionView::CMessageReflectionView() noexcept
	: CFormView(IDD_MESSAGEREFLECTION_FORM)
{
	// TODO: add construction code here

}

CMessageReflectionView::~CMessageReflectionView()
{
}

void CMessageReflectionView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_list);
}

BOOL CMessageReflectionView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CMessageReflectionView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	m_list.AddString(_T("사과"));
	m_list.AddString(_T("포도"));
	m_list.AddString(_T("참외"));
	m_list.AddString(_T("수박"));
}


// CMessageReflectionView printing

BOOL CMessageReflectionView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMessageReflectionView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMessageReflectionView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CMessageReflectionView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}


// CMessageReflectionView diagnostics

#ifdef _DEBUG
void CMessageReflectionView::AssertValid() const
{
	CFormView::AssertValid();
}

void CMessageReflectionView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CMessageReflectionDoc* CMessageReflectionView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMessageReflectionDoc)));
	return (CMessageReflectionDoc*)m_pDocument;
}
#endif //_DEBUG


// CMessageReflectionView message handlers
