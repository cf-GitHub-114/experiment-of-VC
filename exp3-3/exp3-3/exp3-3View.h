
// exp3-3View.h : Cexp33View ��Ľӿ�
//

#pragma once


class Cexp33View : public CView
{
protected: // �������л�����
	Cexp33View();
	DECLARE_DYNCREATE(Cexp33View)

// ����
public:
	Cexp33Doc* GetDocument() const;

// ����
public:	

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp33View();
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

#ifndef _DEBUG  // exp3-3View.cpp �еĵ��԰汾
inline Cexp33Doc* Cexp33View::GetDocument() const
   { return reinterpret_cast<Cexp33Doc*>(m_pDocument); }
#endif

