#pragma once


// MyDlg05 �Ի���

class MyDlg05 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg05)

public:
	MyDlg05(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDlg05();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int left;
	int top;
	int right;
	int bottom;
};
