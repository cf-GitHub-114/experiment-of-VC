
// exp3-6View.h : Cexp36View ��Ľӿ�
//

#pragma once


class Cexp36View : public CView
{
protected: // �������л�����
	Cexp36View();
	DECLARE_DYNCREATE(Cexp36View)

// ����
public:
	Cexp36Doc* GetDocument() const;
	CArray<CRect,CRect>ca;//����Ԫ��Ϊ���ε�����
	int downX;//�������ĺ�����
	int downY;//��������������
	int width;//���εĿ��
	int height;//���εĸ߶�
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp36View();
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
};

#ifndef _DEBUG  // exp3-6View.cpp �еĵ��԰汾
inline Cexp36Doc* Cexp36View::GetDocument() const
   { return reinterpret_cast<Cexp36Doc*>(m_pDocument); }
#endif

