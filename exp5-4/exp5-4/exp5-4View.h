
// exp5-4View.h : Cexp54View ��Ľӿ�
//

#pragma once


class Cexp54View : public CView
{
protected: // �������л�����
	Cexp54View();
	DECLARE_DYNCREATE(Cexp54View)

// ����
public:
	Cexp54Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp54View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp5-4View.cpp �еĵ��԰汾
inline Cexp54Doc* Cexp54View::GetDocument() const
   { return reinterpret_cast<Cexp54Doc*>(m_pDocument); }
#endif

