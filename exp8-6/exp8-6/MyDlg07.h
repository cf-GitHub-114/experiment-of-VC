#pragma once


// MyDlg07 对话框

class MyDlg07 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg07)

public:
	MyDlg07(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyDlg07();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int red;
	int green;
	int blue;
};
