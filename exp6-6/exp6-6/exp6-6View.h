
// exp6-6View.h : Cexp66View ��Ľӿ�
//

#pragma once


class Cexp66View : public CView
{
protected: // �������л�����
	Cexp66View();
	DECLARE_DYNCREATE(Cexp66View)

// ����
public:
	Cexp66Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp66View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp6-6View.cpp �еĵ��԰汾
inline Cexp66Doc* Cexp66View::GetDocument() const
   { return reinterpret_cast<Cexp66Doc*>(m_pDocument); }
#endif

