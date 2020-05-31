#pragma once


// MyDlg05 对话框

class MyDlg05 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg05)

public:
	MyDlg05(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyDlg05();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int left;
	int top;
	int right;
	int bottom;
};
