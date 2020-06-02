// MyDlg07.cpp : 实现文件
//

#include "stdafx.h"
#include "exp8-6.h"
#include "MyDlg07.h"
#include "afxdialogex.h"


// MyDlg07 对话框

IMPLEMENT_DYNAMIC(MyDlg07, CDialogEx)

MyDlg07::MyDlg07(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, red(0)
	, green(0)
	, blue(0)
{

}

MyDlg07::~MyDlg07()
{
}

void MyDlg07::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, red);
	DDX_Text(pDX, IDC_EDIT2, green);
	DDX_Text(pDX, IDC_EDIT3, blue);
}


BEGIN_MESSAGE_MAP(MyDlg07, CDialogEx)
END_MESSAGE_MAP()


// MyDlg07 消息处理程序
