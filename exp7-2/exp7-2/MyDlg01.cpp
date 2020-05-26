// MyDlg01.cpp : 实现文件
//

#include "stdafx.h"
#include "exp7-2.h"
#include "MyDlg01.h"
#include "afxdialogex.h"


// MyDlg01 对话框

IMPLEMENT_DYNAMIC(MyDlg01, CDialogEx)

MyDlg01::MyDlg01(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, addend1(0)
	, addend2(0)
{

}

MyDlg01::~MyDlg01()
{
}

void MyDlg01::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, addend1);
	DDX_Text(pDX, IDC_EDIT2, addend2);
}


BEGIN_MESSAGE_MAP(MyDlg01, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg01::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg01 消息处理程序


void MyDlg01::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	int exchange;
	this->UpdateData(true);//将前台（对话框）的数据送到后台（类）
	exchange = addend1;
	addend1 = addend2;
	addend2 = exchange;
	UpdateData(false);//将后台的数据传送到前台
}
