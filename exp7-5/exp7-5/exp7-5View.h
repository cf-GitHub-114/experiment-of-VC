
// exp7-5View.h : Cexp75View ��Ľӿ�
//

#pragma once


class Cexp75View : public CView
{
protected: // �������л�����
	Cexp75View();
	DECLARE_DYNCREATE(Cexp75View)

// ����
public:
	Cexp75Doc* GetDocument() const;

// ����
public:
	CRect rect;//����һ����Բ�ľ���
	CRect cr;//����һ��װ�ͻ�����С�ľ���
	bool set;//����
	int r;//����Բ�ĵİ뾶
	int flag;//�����־Բ���˶�״̬�ı�־
	int flagD;//�����־����������ı�־
	int flagDB;//����һ��������˫���ı�־
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp75View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // exp7-5View.cpp �еĵ��԰汾
inline Cexp75Doc* Cexp75View::GetDocument() const
   { return reinterpret_cast<Cexp75Doc*>(m_pDocument); }
#endif

