
// exp6-1View.h : Cexp61View ��Ľӿ�
//

#pragma once


class Cexp61View : public CView
{
protected: // �������л�����
	Cexp61View();
	DECLARE_DYNCREATE(Cexp61View)

// ����
public:
	Cexp61Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp61View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp6-1View.cpp �еĵ��԰汾
inline Cexp61Doc* Cexp61View::GetDocument() const
   { return reinterpret_cast<Cexp61Doc*>(m_pDocument); }
#endif

