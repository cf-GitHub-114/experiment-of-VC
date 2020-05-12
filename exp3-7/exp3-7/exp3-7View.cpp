
// exp3-7View.cpp : Cexp37View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp3-7.h"
#endif

#include "exp3-7Doc.h"
#include "exp3-7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp37View

IMPLEMENT_DYNCREATE(Cexp37View, CView)

BEGIN_MESSAGE_MAP(Cexp37View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp37View ����/����

Cexp37View::Cexp37View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp37View::~Cexp37View()
{
}

BOOL Cexp37View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp37View ����

void Cexp37View::OnDraw(CDC* pDC)
{
	Cexp37Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0;i < pDoc->ca.GetSize();i++) {
		pDC->Ellipse(pDoc->ca.GetAt(i));//�ھ����л���Բ
	}

}


// Cexp37View ���

#ifdef _DEBUG
void Cexp37View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp37View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp37Doc* Cexp37View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp37Doc)));
	return (Cexp37Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp37View ��Ϣ�������


void Cexp37View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexp37Doc* pDoc = GetDocument();
	pDoc->width = rand() % 50 + 5;//5-54
	pDoc->height = rand() % 50 + 5;
	CRect rect(point.x - pDoc->width / 2, point.y - pDoc->height / 2, point.x + pDoc->width, point.y + pDoc->height);
	pDoc->ca.Add(rect);
	Invalidate();//ǿ���ػ�

	CView::OnLButtonDown(nFlags, point);
}
