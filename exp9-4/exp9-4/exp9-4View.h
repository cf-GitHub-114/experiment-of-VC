
// exp9-4View.h : Cexp94View ��Ľӿ�
//

#pragma once


class Cexp94View : public CView
{
protected: // �������л�����
	Cexp94View();
	DECLARE_DYNCREATE(Cexp94View)

// ����
public:
	Cexp94Doc* GetDocument() const;
	CRect cr;
	CPoint mouse;//��¼��갴�µ�ʱ������
	int flag;//������״̬��1Ϊ���£�0Ϊ����

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp94View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp9-4View.cpp �еĵ��԰汾
inline Cexp94Doc* Cexp94View::GetDocument() const
   { return reinterpret_cast<Cexp94Doc*>(m_pDocument); }
#endif

