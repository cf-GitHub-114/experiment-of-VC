#pragma once


// MyDlg10 �Ի���

class MyDlg10 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg10)

public:
	MyDlg10(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDlg10();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
