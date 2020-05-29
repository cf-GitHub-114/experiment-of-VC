#pragma once


// MyDlg03 对话框

class MyDlg03 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg03)

public:
	MyDlg03(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyDlg03();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString str1;
	int str2;
	CString str3;
	afx_msg void OnBnClickedButton1();
};
