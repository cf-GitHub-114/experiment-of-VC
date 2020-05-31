// MyDlg04.cpp : 实现文件
//

#include "stdafx.h"
#include "exp8-1.h"
#include "MyDlg04.h"
#include "afxdialogex.h"


// MyDlg04 对话框

IMPLEMENT_DYNAMIC(MyDlg04, CDialogEx)

MyDlg04::MyDlg04(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, showname(_T(""))
{

}

MyDlg04::~MyDlg04()
{
}

void MyDlg04::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, showname);
	DDX_Control(pDX, IDC_LIST1, listBox_show);
}


BEGIN_MESSAGE_MAP(MyDlg04, CDialogEx)
END_MESSAGE_MAP()


// MyDlg04 消息处理程序


BOOL MyDlg04::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	listBox_show.AddString(showname);//在列表框显示文件名
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
