// MyDlg03.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "exp7-6.h"
#include "MyDlg03.h"
#include "afxdialogex.h"


// MyDlg03 �Ի���

IMPLEMENT_DYNAMIC(MyDlg03, CDialogEx)

MyDlg03::MyDlg03(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, str1(_T(""))
	, str2(0)
	, str3(_T(""))
{
	str1 = (_T(""));//��ʼ������
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


// MyDlg03 ��Ϣ�������


void MyDlg03::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);//��ǰ̨�����͵���̨
	CString s2;
	s2.Format(_T("%d"),str2);//���������Ϊ�ַ���
	str3 = str1 + s2;
	UpdateData(false);//����̨���ݴ���ǰ̨
}
