#pragma once


// MyDlg07 �Ի���

class MyDlg07 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg07)

public:
	MyDlg07(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~MyDlg07();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int red;
	int green;
	int blue;
};
