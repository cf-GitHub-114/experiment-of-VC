#pragma once


// MyDlg02 �Ի���

class MyDlg02 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg02)

public:
	MyDlg02(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDlg02();

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
	int sum;
	afx_msg void OnBnClickedButton1();
};
