// MyDlg00.cpp : 实现文件
//

#include "stdafx.h"
#include "exp7-1.h"
#include "MyDlg00.h"
#include "afxdialogex.h"


// MyDlg00 对话框

IMPLEMENT_DYNAMIC(MyDlg00, CDialogEx)

MyDlg00::MyDlg00(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyDlg00::~MyDlg00()
{
}

void MyDlg00::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MyDlg00, CDialogEx)
END_MESSAGE_MAP()


// MyDlg00 消息处理程序
