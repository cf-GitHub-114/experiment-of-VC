
// exp6-5View.h : Cexp65View ��Ľӿ�
//

#pragma once


class Cexp65View : public CView
{
protected: // �������л�����
	Cexp65View();
	DECLARE_DYNCREATE(Cexp65View)

// ����
public:
	Cexp65Doc* GetDocument() const;
	CRect rect;//����һ������
	CString s;
	
// ����
public:
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cexp65View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // exp6-5View.cpp �еĵ��԰汾
inline Cexp65Doc* Cexp65View::GetDocument() const
   { return reinterpret_cast<Cexp65Doc*>(m_pDocument); }
#endif

