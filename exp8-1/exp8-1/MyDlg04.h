#pragma once
#include "afxwin.h"


// MyDlg04 �Ի���

class MyDlg04 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg04)

public:
	MyDlg04(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDlg04();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString showname;
	CListBox listBox_show;
	virtual BOOL OnInitDialog();
};
