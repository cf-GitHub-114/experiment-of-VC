
// exp7-2View.h : Cexp72View ��Ľӿ�
//

#pragma once


class Cexp72View : public CView
{
protected: // �������л�����
	Cexp72View();
	DECLARE_DYNCREATE(Cexp72View)

// ����
public:
	Cexp72Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp72View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp7-2View.cpp �еĵ��԰汾
inline Cexp72Doc* Cexp72View::GetDocument() const
   { return reinterpret_cast<Cexp72Doc*>(m_pDocument); }
#endif

