// MyDlg05.cpp : 实现文件
//

#include "stdafx.h"
#include "exp8-4.h"
#include "MyDlg05.h"
#include "afxdialogex.h"


// MyDlg05 对话框

IMPLEMENT_DYNAMIC(MyDlg05, CDialogEx)

MyDlg05::MyDlg05(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, left(0)
	, top(0)
	, right(0)
	, bottom(0)
{

}

MyDlg05::~MyDlg05()
{
}

void MyDlg05::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, left);
	DDX_Text(pDX, IDC_EDIT2, top);
	DDX_Text(pDX, IDC_EDIT3, right);
	DDX_Text(pDX, IDC_EDIT4, bottom);
}


BEGIN_MESSAGE_MAP(MyDlg05, CDialogEx)
END_MESSAGE_MAP()


// MyDlg05 消息处理程序
