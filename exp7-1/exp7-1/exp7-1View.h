
// exp7-1View.h : Cexp71View ��Ľӿ�
//

#pragma once


class Cexp71View : public CView
{
protected: // �������л�����
	Cexp71View();
	DECLARE_DYNCREATE(Cexp71View)

// ����
public:
	Cexp71Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp71View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp7-1View.cpp �еĵ��԰汾
inline Cexp71Doc* Cexp71View::GetDocument() const
   { return reinterpret_cast<Cexp71Doc*>(m_pDocument); }
#endif

