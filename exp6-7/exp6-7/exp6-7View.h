
// exp6-7View.h : Cexp67View ��Ľӿ�
//

#pragma once


class Cexp67View : public CView
{
protected: // �������л�����
	Cexp67View();
	DECLARE_DYNCREATE(Cexp67View)

// ����
public:
	Cexp67Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp67View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp6-7View.cpp �еĵ��԰汾
inline Cexp67Doc* Cexp67View::GetDocument() const
   { return reinterpret_cast<Cexp67Doc*>(m_pDocument); }
#endif

