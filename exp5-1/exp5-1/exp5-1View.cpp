
// exp5-1View.cpp : Cexp51View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp5-1.h"
#endif

#include "exp5-1Doc.h"
#include "exp5-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp51View

IMPLEMENT_DYNCREATE(Cexp51View, CView)

BEGIN_MESSAGE_MAP(Cexp51View, CView)
	ON_COMMAND(ID_VIEW_SHOWELLIPSE, &Cexp51View::OnViewShowellipse)
END_MESSAGE_MAP()

// Cexp51View ����/����

Cexp51View::Cexp51View()
{
	// TODO: �ڴ˴���ӹ������
}

Cexp51View::~Cexp51View()
{
}

BOOL Cexp51View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp51View ����

void Cexp51View::OnDraw(CDC* pDC)
{
	Cexp51Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp51View ���

#ifdef _DEBUG
void Cexp51View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp51View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp51Doc* Cexp51View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp51Doc)));
	return (Cexp51Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp51View ��Ϣ�������


void Cexp51View::OnViewShowellipse()
{
	// TODO: �ڴ���������������
	CClientDC dc(this);//����һ��CClientDC�Ķ���dc
	CRect rc;//����һ�����ζ���
	//CArray<CRect,CRect&>ca;
	//ca.SetSize(20);
	GetClientRect(&rc);//��ȡ�ͻ�����С
	int r = 100;//����һ�����ͱ���r,ΪԲ�εİ뾶
	int x = (rc.left + rc.right)/2;//��ȡ�ͻ����е�
	int y = (rc.top + rc.bottom)/2;
	for (int i = 0;i < 10;i++) {
		r -= 10;//�Ȼ����Բ�����Ȼ�С��Բ���ᱻ����Ĵ�Բ��ס
		CRect A(x-r , y-r , x+r , y+r);
		dc.Ellipse(A);
	}
}
