
// exp7-3View.h : Cexp73View ��Ľӿ�
//

#pragma once


class Cexp73View : public CView
{
protected: // �������л�����
	Cexp73View();
	DECLARE_DYNCREATE(Cexp73View)

// ����
public:
	Cexp73Doc* GetDocument() const;

// ����
public:
	int downX, downY;//����������ڴ�����������ʱ������
	int moveX, moveY;//��¼������������ͷ��ƶ��ľ���
	CRect rect;//����һ������
	int flag;//����һ����־����������ı�־
	int left, top, right, bottom;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp73View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp7-3View.cpp �еĵ��԰汾
inline Cexp73Doc* Cexp73View::GetDocument() const
   { return reinterpret_cast<Cexp73Doc*>(m_pDocument); }
#endif

