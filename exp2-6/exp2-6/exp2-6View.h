
// exp2-6View.h : Cexp26View ��Ľӿ�
//

#pragma once


class Cexp26View : public CView
{
protected: // �������л�����
	Cexp26View();
	DECLARE_DYNCREATE(Cexp26View)

// ����
public:
	Cexp26Doc* GetDocument() const;
	CRect rect;//����һ������
	int height;
// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp26View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp2-6View.cpp �еĵ��԰汾
inline Cexp26Doc* Cexp26View::GetDocument() const
   { return reinterpret_cast<Cexp26Doc*>(m_pDocument); }
#endif

