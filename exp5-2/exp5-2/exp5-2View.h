
// exp5-2View.h : Cexp52View ��Ľӿ�
//

#pragma once


class Cexp52View : public CView
{
protected: // �������л�����
	Cexp52View();
	DECLARE_DYNCREATE(Cexp52View)

// ����
public:
	Cexp52Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp52View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp5-2View.cpp �еĵ��԰汾
inline Cexp52Doc* Cexp52View::GetDocument() const
   { return reinterpret_cast<Cexp52Doc*>(m_pDocument); }
#endif

