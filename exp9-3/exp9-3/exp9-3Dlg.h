
// exp9-3Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"
#include<fstream>
#include<string>
using namespace std;


// Cexp93Dlg �Ի���
class Cexp93Dlg : public CDialogEx
{
// ����
public:
	Cexp93Dlg(CWnd* pParent = NULL);	// ��׼���캯��
	CArray<CString, CString>ca;//װ�б��������������
	CString sname;
	int count;//����Ԫ�ظ���

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EXP93_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
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
