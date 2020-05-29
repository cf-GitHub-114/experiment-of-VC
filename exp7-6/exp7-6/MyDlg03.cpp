// MyDlg03.cpp : 实现文件
//

#include "stdafx.h"
#include "exp7-6.h"
#include "MyDlg03.h"
#include "afxdialogex.h"


// MyDlg03 对话框

IMPLEMENT_DYNAMIC(MyDlg03, CDialogEx)

MyDlg03::MyDlg03(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, str1(_T(""))
	, str2(0)
	, str3(_T(""))
{
	str1 = (_T(""));//初始化变量
	str2 = 0;
	str3 = (_T(""));
}

MyDlg03::~MyDlg03()
{
}

void MyDlg03::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, str1);
	DDX_Text(pDX, IDC_EDIT2, str2);
	DDX_Text(pDX, IDC_EDIT3, str3);
}


BEGIN_MESSAGE_MAP(MyDlg03, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg03::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg03 消息处理程序


void MyDlg03::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);//将前台数据送到后台
	CString s2;
	s2.Format(_T("%d"),str2);//将数字输出为字符串
	str3 = str1 + s2;
	UpdateData(false);//将后台数据传到前台
}
