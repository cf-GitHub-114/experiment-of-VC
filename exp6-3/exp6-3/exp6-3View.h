
// exp6-3View.h : Cexp63View ��Ľӿ�
//

#pragma once


class Cexp63View : public CView
{
protected: // �������л�����
	Cexp63View();
	DECLARE_DYNCREATE(Cexp63View)

// ����
public:
	Cexp63Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp63View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp6-3View.cpp �еĵ��԰汾
inline Cexp63Doc* Cexp63View::GetDocument() const
   { return reinterpret_cast<Cexp63Doc*>(m_pDocument); }
#endif

