
// exp5-2View.cpp : Cexp52View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp5-2.h"
#endif

#include "exp5-2Doc.h"
#include "exp5-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp52View

IMPLEMENT_DYNCREATE(Cexp52View, CView)

BEGIN_MESSAGE_MAP(Cexp52View, CView)
	ON_COMMAND(ID_VIEW_SHOWCOLORELLIPSE, &Cexp52View::OnViewShowcolorellipse)
END_MESSAGE_MAP()

// Cexp52View ����/����

Cexp52View::Cexp52View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp52View::~Cexp52View()
{
}

BOOL Cexp52View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp52View ����

void Cexp52View::OnDraw(CDC* /*pDC*/)
{
	Cexp52Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp52View ���

#ifdef _DEBUG
void Cexp52View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp52View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp52Doc* Cexp52View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp52Doc)));
	return (Cexp52Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp52View ��Ϣ�������


void Cexp52View::OnViewShowcolorellipse()
{
	// TODO: �ڴ���������������
	int red = 0, green = 255, blue = 0;
	int width = 2;
	CClientDC dc(this);//����һ��CClientDC�Ķ���dc
	CRect rc;//����һ�����ζ���
	GetClientRect(&rc);//��ȡ�ͻ�����С
	int r = 100;//����һ�����ͱ���r,ΪԲ�εİ뾶
	int x = (rc.left + rc.right) / 2;//��ȡ�ͻ����е�
	int y = (rc.top + rc.bottom) / 2;
	for (int i = 0;i < 10;i++) {
		int color = RGB(red,green,blue);//������ɫ
		CPen newPen(PS_SOLID,width,color);//�����±�
		CPen *oldPen = dc.SelectObject(&newPen);//���¹���ıʺ��豸��������ϵ����
		r -= 10;//�Ȼ����Բ�����Ȼ�С��Բ���ᱻ����Ĵ�Բ��ס
		CRect A(x - r, y - r, x + r, y + r);
		dc.Ellipse(A);
		dc.SelectObject(oldPen);//���ɱ�ѡ���豸����
		red += 20;
		green  -= 20;
		blue += 20;
	}
}
