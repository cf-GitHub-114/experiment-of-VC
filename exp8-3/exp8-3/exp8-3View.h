
// exp8-3View.h : Cexp83View ��Ľӿ�
//

#pragma once


class Cexp83View : public CView
{
protected: // �������л�����
	Cexp83View();
	DECLARE_DYNCREATE(Cexp83View)

// ����
public:
	Cexp83Doc* GetDocument() const;

// ����
public:
	CArray<CRect,CRect>ca;//�����Ծ���ΪԪ�ص�����
	int downX, downY;//����װ���������ʱ����ı���
	int flag;//�����־����������ı�־
	CRect rect;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp83View();
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

#ifndef _DEBUG  // exp8-3View.cpp �еĵ��԰汾
inline Cexp83Doc* Cexp83View::GetDocument() const
   { return reinterpret_cast<Cexp83Doc*>(m_pDocument); }
#endif

