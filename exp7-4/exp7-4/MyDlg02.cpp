// MyDlg02.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "exp7-4.h"
#include "MyDlg02.h"
#include "afxdialogex.h"


// MyDlg02 �Ի���

IMPLEMENT_DYNAMIC(MyDlg02, CDialogEx)

MyDlg02::MyDlg02(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, addend1(0)
	, addend2(0)
	, sum(0)
{

}

MyDlg02::~MyDlg02()
{
}

void MyDlg02::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, addend1);
	DDX_Text(pDX, IDC_EDIT2, addend2);
	DDX_Text(pDX, IDC_EDIT3, sum);
}


BEGIN_MESSAGE_MAP(MyDlg02, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg02::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg02 ��Ϣ�������


void MyDlg02::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	this->UpdateData(true);//��ǰ̨�����͵���̨
	sum = addend1 + addend2;
	UpdateData(false);//����̨���ݴ���ǰ̨
}
