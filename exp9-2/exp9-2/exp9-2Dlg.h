
// exp9-2Dlg.h : ͷ�ļ�
//

#pragma once


// Cexp92Dlg �Ի���
class Cexp92Dlg : public CDialogEx
{
// ����
public:
	Cexp92Dlg(CWnd* pParent = NULL);	// ��׼���캯��
	void foo(CImage img, int x, int y, int w, int h)
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_EXP92_DIALOG };
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
	afx_msg void OnBnClickedpicturebutton();
	//void foo(CImage &img, int &sx, int &sy, int &w, int &h);
	//void foo(CImage img, int x, int y, int w, int h);
	void laaa(CImage & img, int & x, int & y, int & w, int & h);
};
