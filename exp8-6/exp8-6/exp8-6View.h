
// exp8-6View.h : Cexp86View ��Ľӿ�
//

#pragma once


class Cexp86View : public CView
{
protected: // �������л�����
	Cexp86View();
	DECLARE_DYNCREATE(Cexp86View)

// ����
public:
	Cexp86Doc* GetDocument() const;

// ����
public:
	CRect rect;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp86View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnColorfulellipse();
};

#ifndef _DEBUG  // exp8-6View.cpp �еĵ��԰汾
inline Cexp86Doc* Cexp86View::GetDocument() const
   { return reinterpret_cast<Cexp86Doc*>(m_pDocument); }
#endif

