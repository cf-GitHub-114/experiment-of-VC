
// exp5-5View.h : Cexp55View ��Ľӿ�
//

#pragma once


class Cexp55View : public CView
{
protected: // �������л�����
	Cexp55View();
	DECLARE_DYNCREATE(Cexp55View)

// ����
public:
	Cexp55Doc* GetDocument() const;
	int downPointX, downPointY, upPointX, upPointY;//�����������ͷ����ʱ��������ͱ���

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp55View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewDrawline();
	afx_msg void OnViewDrawrectangle();
	afx_msg void OnViewDrawellipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp5-5View.cpp �еĵ��԰汾
inline Cexp55Doc* Cexp55View::GetDocument() const
   { return reinterpret_cast<Cexp55Doc*>(m_pDocument); }
#endif

