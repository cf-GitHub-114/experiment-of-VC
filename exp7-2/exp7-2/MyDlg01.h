#pragma once


// MyDlg01 �Ի���

class MyDlg01 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg01)

public:
	MyDlg01(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDlg01();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int addend1;
	int addend2;
	afx_msg void OnBnClickedButton1();
};
