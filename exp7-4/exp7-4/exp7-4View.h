
// exp7-4View.h : Cexp74View ��Ľӿ�
//

#pragma once


class Cexp74View : public CView
{
protected: // �������л�����
	Cexp74View();
	DECLARE_DYNCREATE(Cexp74View)

// ����
public:
	Cexp74Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp74View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp7-4View.cpp �еĵ��԰汾
inline Cexp74Doc* Cexp74View::GetDocument() const
   { return reinterpret_cast<Cexp74Doc*>(m_pDocument); }
#endif

