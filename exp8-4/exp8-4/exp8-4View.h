
// exp8-4View.h : Cexp84View ��Ľӿ�
//

#pragma once


class Cexp84View : public CView
{
protected: // �������л�����
	Cexp84View();
	DECLARE_DYNCREATE(Cexp84View)

// ����
public:
	Cexp84Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp84View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp8-4View.cpp �еĵ��԰汾
inline Cexp84Doc* Cexp84View::GetDocument() const
   { return reinterpret_cast<Cexp84Doc*>(m_pDocument); }
#endif

