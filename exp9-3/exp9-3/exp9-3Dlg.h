
// exp9-3Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"
#include<fstream>
#include<string>
using namespace std;


// Cexp93Dlg 对话框
class Cexp93Dlg : public CDialogEx
{
// 构造
public:
	Cexp93Dlg(CWnd* pParent = NULL);	// 标准构造函数
	CArray<CString, CString>ca;//装列表框中姓名的数组
	CString sname;
	int count;//数组元素个数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EXP93_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CListBox listBox;
	CEdit showName;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnLbnSelchangeList1();
	CString changeName;
	afx_msg void OnIddExp93Dialog();
};
