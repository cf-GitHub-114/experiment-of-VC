// MyDlg04.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "exp8-1.h"
#include "MyDlg04.h"
#include "afxdialogex.h"


// MyDlg04 �Ի���

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


// MyDlg04 ��Ϣ�������


BOOL MyDlg04::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	listBox_show.AddString(showname);//���б����ʾ�ļ���
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
