
// exp1-3View.cpp : Cexp13View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp1-3.h"
#endif

#include "exp1-3Doc.h"
#include "exp1-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp13View

IMPLEMENT_DYNCREATE(Cexp13View, CView)

BEGIN_MESSAGE_MAP(Cexp13View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp13View ����/����

Cexp13View::Cexp13View()
{
	// TODO: �ڴ˴���ӹ������
	s2 = "�Է�˯�����ֻ�";

}

Cexp13View::~Cexp13View()
{
}

BOOL Cexp13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp13View ����

void Cexp13View::OnDraw(CDC* /*pDC*/)
{
	Cexp13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp13View ���

#ifdef _DEBUG
void Cexp13View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp13Doc* Cexp13View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp13Doc)));
	return (Cexp13Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp13View ��Ϣ�������


void Cexp13View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexp13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CClientDC dc(this);
	dc.TextOutW(300, 300,pDoc->s1+s2 );
	//CString s3 = "study";   //�˾��Ǵ����
	CView::OnLButtonDown(nFlags, point);
}
