
// exp3-4View.h : Cexp34View ��Ľӿ�
//

#pragma once


class Cexp34View : public CView
{
protected: // �������л�����
	Cexp34View();
	DECLARE_DYNCREATE(Cexp34View)

// ����
public:
	Cexp34Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp34View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp3-4View.cpp �еĵ��԰汾
inline Cexp34Doc* Cexp34View::GetDocument() const
   { return reinterpret_cast<Cexp34Doc*>(m_pDocument); }
#endif

