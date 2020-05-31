#pragma once
#include "afxwin.h"


// MyDlg04 对话框

class MyDlg04 : public CDialogEx
{
	DECLARE_DYNAMIC(MyDlg04)

public:
	MyDlg04(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~MyDlg04();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString showname;
	CListBox listBox_show;
	virtual BOOL OnInitDialog();
};
