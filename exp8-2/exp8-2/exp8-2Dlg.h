
// exp8-2Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// Cexp82Dlg �Ի���
class Cexp82Dlg : public CDialogEx
{
// ����
public:
	Cexp82Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EXP82_DIALOG };
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
	CComboBox comboBox;
	double a;
	double b;
	double c;
	afx_msg void OnBnClickedButton1();
	CString errorMes;
};
