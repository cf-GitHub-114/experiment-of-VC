
// exp8-1View.h : Cexp81View ��Ľӿ�
//

#pragma once


class Cexp81View : public CView
{
protected: // �������л�����
	Cexp81View();
	DECLARE_DYNCREATE(Cexp81View)

// ����
public:
	Cexp81Doc* GetDocument() const;

// ����
public:
	CString filename;//����һ��װ�ļ����ı���
	int flag;// ����һ����־�Ѿ�����ļ����ı���

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp81View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnShowfilename();
};

#ifndef _DEBUG  // exp8-1View.cpp �еĵ��԰汾
inline Cexp81Doc* Cexp81View::GetDocument() const
   { return reinterpret_cast<Cexp81Doc*>(m_pDocument); }
#endif

