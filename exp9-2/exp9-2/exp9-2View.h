
// exp9-2View.h : Cexp92View ��Ľӿ�
//

#pragma once


class Cexp92View : public CView
{
protected: // �������л�����
	Cexp92View();
	DECLARE_DYNCREATE(Cexp92View)

// ����
public:
	Cexp92Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp92View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp9-2View.cpp �еĵ��԰汾
inline Cexp92Doc* Cexp92View::GetDocument() const
   { return reinterpret_cast<Cexp92Doc*>(m_pDocument); }
#endif

