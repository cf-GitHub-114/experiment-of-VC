
// exp7-5View.h : Cexp75View ��Ľӿ�
//

#pragma once


class Cexp75View : public CView
{
protected: // �������л�����
	Cexp75View();
	DECLARE_DYNCREATE(Cexp75View)

// ����
public:
	Cexp75Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp75View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp7-5View.cpp �еĵ��԰汾
inline Cexp75Doc* Cexp75View::GetDocument() const
   { return reinterpret_cast<Cexp75Doc*>(m_pDocument); }
#endif

