// CMyDialog.cpp : implementation file
//

#include "pch.h"
#include "ModalDialog.h"
#include "afxdialogex.h"
#include "CMyDialog.h"


// CMyDialog dialog

IMPLEMENT_DYNAMIC(CMyDialog, CDialog)

CMyDialog::CMyDialog(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
{

}

CMyDialog::~CMyDialog()
{
}

void CMyDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, m_combo);
}


BEGIN_MESSAGE_MAP(CMyDialog, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &CMyDialog::OnBnClickedButton1)
//	ON_BN_CLICKED(IDOK, &CMyDialog::OnBnClickedOk)
END_MESSAGE_MAP()


// CMyDialog message handlers


BOOL CMyDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  Add extra initialization here
	SetDlgItemText(IDC_EDIT1, m_str);
	m_combo.SetCurSel(m_font);

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}


void CMyDialog::OnOK()
{
	// TODO: Add your specialized code here and/or call the base class
	GetDlgItemText(IDC_EDIT1, m_str);
	m_font = m_combo.GetCurSel();

	CDialog::OnOK();
}


void CMyDialog::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	EndDialog(IDC_BUTTON1);
}


//void CMyDialog::OnBnClickedOk()
//{
	// TODO: Add your control notification handler code here
//	CDialog::OnOK();
//}
