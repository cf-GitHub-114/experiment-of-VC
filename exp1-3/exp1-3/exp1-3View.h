
// exp1-3View.h : Cexp13View ��Ľӿ�
//

#pragma once


class Cexp13View : public CView
{
protected: // �������л�����
	Cexp13View();
	DECLARE_DYNCREATE(Cexp13View)

// ����
public:
	Cexp13Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp13View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	CString s2;

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp1-3View.cpp �еĵ��԰汾
inline Cexp13Doc* Cexp13View::GetDocument() const
   { return reinterpret_cast<Cexp13Doc*>(m_pDocument); }
#endif

