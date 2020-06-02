
// exp8-5View.cpp : Cexp85View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp8-5.h"
#endif

#include "exp8-5Doc.h"
#include "exp8-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp85View

IMPLEMENT_DYNCREATE(Cexp85View, CView)

BEGIN_MESSAGE_MAP(Cexp85View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp85View ����/����

Cexp85View::Cexp85View()
{
	// TODO: �ڴ˴���ӹ������
	rect.left = 100;
	rect.top = 100;
	rect.right = 300;
	rect.bottom = 400;
}

Cexp85View::~Cexp85View()
{
}

BOOL Cexp85View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp85View ����

void Cexp85View::OnDraw(CDC* pDC)
{
	Cexp85Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(rect);//����Բ
}


// Cexp85View ���

#ifdef _DEBUG
void Cexp85View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp85View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp85Doc* Cexp85View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp85Doc)));
	return (Cexp85Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp85View ��Ϣ�������


void Cexp85View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CRgn rgnB;
	rgnB.CreateEllipticRgn(100, 100, 300, 400);
	BOOL flag = rgnB.PtInRegion(point);
	if (flag) {//������Բ��
		CPen newPen(PS_DASH, 1, RGB(255,0,0));//�����±�newPen(PS_DASH����, 1�߿�, RGB(255,0,0)��ɫ)
		CPen *pOldPen = dc.SelectObject(&newPen);//���¹���ıʺ��豸��������ϵ����
		dc.MoveTo(100,100);
		dc.LineTo(300,100);
		dc.LineTo(300, 400);
		dc.LineTo(100, 400);
		dc.LineTo(100, 100);
		dc.SelectObject(pOldPen);//���ɱ�ѡ���豸����
	}
	else//�㲻����Բ��
		;

	CView::OnLButtonDown(nFlags, point);
}
