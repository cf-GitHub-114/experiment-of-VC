
// exp5-5View.cpp : Cexp55View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp5-5.h"
#endif

#include "exp5-5Doc.h"
#include "exp5-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp55View

IMPLEMENT_DYNCREATE(Cexp55View, CView)

BEGIN_MESSAGE_MAP(Cexp55View, CView)
	ON_COMMAND(ID_VIEW_DRAWLINE, &Cexp55View::OnViewDrawline)
	ON_COMMAND(ID_VIEW_DRAWRECTANGLE, &Cexp55View::OnViewDrawrectangle)
	ON_COMMAND(ID_VIEW_DRAWELLIPSE, &Cexp55View::OnViewDrawellipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexp55View ����/����

Cexp55View::Cexp55View()
{
	// TODO: �ڴ˴���ӹ������
}

Cexp55View::~Cexp55View()
{
}

BOOL Cexp55View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp55View ����

void Cexp55View::OnDraw(CDC* pDC)
{
	Cexp55Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp55View ���

#ifdef _DEBUG
void Cexp55View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp55View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp55Doc* Cexp55View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp55Doc)));
	return (Cexp55Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp55View ��Ϣ�������


void Cexp55View::OnViewDrawline()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	dc.MoveTo(downPointX, downPointY);
	dc.LineTo(upPointX, upPointY);//����
}


void Cexp55View::OnViewDrawrectangle()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CRect rect(downPointX, downPointY, upPointX, upPointY);
	dc.Rectangle(rect);//������
}


void Cexp55View::OnViewDrawellipse()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);
	CRect rect(downPointX, downPointY, upPointX, upPointY);
	dc.Ellipse(rect);//����Բ
}


void Cexp55View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	downPointX = point.x;
	downPointY = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cexp55View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	upPointX = point.x;
	upPointY = point.y;
	CView::OnLButtonUp(nFlags, point);
}
