// Addone.cpp: 实现文件
//

#include "stdafx.h"
#include "Contact.h"
#include "Addone.h"
#include "afxdialogex.h"


// Addone 对话框

IMPLEMENT_DYNAMIC(Addone, CDialogEx)

Addone::Addone(CWnd* pParent /*=nullptr*/)
	: CDialogEx(ID_AddOne, pParent)
	, Name(_T(""))
	, Tel(_T(""))
	,Sex(_T(""))
{

}

Addone::~Addone()
{
}

void Addone::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_Name_Edit, Name);
	DDV_MaxChars(pDX, Name, 10);
	DDX_Text(pDX, IDC_Tel_Edit, Tel);
}


BEGIN_MESSAGE_MAP(Addone, CDialogEx)
END_MESSAGE_MAP()


// Addone 消息处理程序
