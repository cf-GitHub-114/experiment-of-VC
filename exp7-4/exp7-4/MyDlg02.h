#pragma once


// MyDlg02 对话框

class MyDlg02 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg02)

public:
	MyDlg02(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyDlg02();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int addend1;
	int addend2;
	int sum;
	afx_msg void OnBnClickedButton1();
};
