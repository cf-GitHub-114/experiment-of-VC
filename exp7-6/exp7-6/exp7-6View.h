
// exp7-6View.h : Cexp76View ��Ľӿ�
//

#pragma once


class Cexp76View : public CView
{
protected: // �������л�����
	Cexp76View();
	DECLARE_DYNCREATE(Cexp76View)

// ����
public:
	Cexp76Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp76View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // exp7-6View.cpp �еĵ��԰汾
inline Cexp76Doc* Cexp76View::GetDocument() const
   { return reinterpret_cast<Cexp76Doc*>(m_pDocument); }
#endif

