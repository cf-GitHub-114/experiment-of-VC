
// exp2-4View.h : Cexp24View ��Ľӿ�
//

#pragma once


class Cexp24View : public CView
{
protected: // �������л�����
	Cexp24View();
	DECLARE_DYNCREATE(Cexp24View)

// ����
public:
	Cexp24Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~Cexp24View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp2-4View.cpp �еĵ��԰汾
inline Cexp24Doc* Cexp24View::GetDocument() const
   { return reinterpret_cast<Cexp24Doc*>(m_pDocument); }
#endif

