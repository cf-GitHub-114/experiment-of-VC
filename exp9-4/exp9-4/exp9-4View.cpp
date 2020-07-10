
// exp9-4View.cpp : Cexp94View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp9-4.h"
#endif

#include "exp9-4Doc.h"
#include "exp9-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp94View

IMPLEMENT_DYNCREATE(Cexp94View, CView)

BEGIN_MESSAGE_MAP(Cexp94View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexp94View ����/����

Cexp94View::Cexp94View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;
	mouse = NULL;
}

Cexp94View::~Cexp94View()
{
}

BOOL Cexp94View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp94View ����

void Cexp94View::OnDraw(CDC* pDC)
{
	Cexp94Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	int n = pDoc->ca.GetCount();
	for (int i = 0; i < n; i++)
	{
		pDC->Ellipse(pDoc->ca[i]);
	}
	pDC->Ellipse(cr);

}


// Cexp94View ���

#ifdef _DEBUG
void Cexp94View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp94View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp94Doc* Cexp94View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp94Doc)));
	return (Cexp94Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp94View ��Ϣ�������


void Cexp94View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;//���������
	mouse = point;

	CView::OnLButtonDown(nFlags, point);
}


void Cexp94View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag == 1)//���������
	{
		cr.left = mouse.x;       
		cr.top = mouse.y;
		cr.right = point.x;
		cr.bottom = point.y;
		InvalidateRect(&cr);   

	}

	CView::OnMouseMove(nFlags, point);
}


void Cexp94View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexp94Doc* pDoc = GetDocument();
	flag = 0;
	pDoc->ca.Add(cr);

	CView::OnLButtonUp(nFlags, point);
}
