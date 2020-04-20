
// exp3-3View.cpp : Cexp33View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp3-3.h"
#endif

#include "exp3-3Doc.h"
#include "exp3-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp33View

IMPLEMENT_DYNCREATE(Cexp33View, CView)

BEGIN_MESSAGE_MAP(Cexp33View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp33View ����/����

Cexp33View::Cexp33View()
{
	// TODO: �ڴ˴���ӹ������
}

Cexp33View::~Cexp33View()
{
}

BOOL Cexp33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp33View ����

void Cexp33View::OnDraw(CDC* pDC)
{
	Cexp33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(&pDoc->A);//�ڿͻ���������A
	pDC->Rectangle(pDoc->B);//�ڿͻ���������B
	pDC->Rectangle(pDoc->C);//�ڿͻ���������C
}


// Cexp33View ���

#ifdef _DEBUG
void Cexp33View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp33Doc* Cexp33View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp33Doc)));
	return (Cexp33Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp33View ��Ϣ�������


void Cexp33View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexp33Doc* pDoc = GetDocument();
	CClientDC dc(this);//����һ��CClientDC�Ķ���dc
		if (pDoc->A.PtInRect(point)){//�ھ���A�е����
            CString s1;
            s1.Format(_T("%d"), pDoc->a);
			dc.TextOutW(point.x, point.y, s1);
		}
		 else if(pDoc->B.PtInRect(point)) {//�ھ���B�е����
			CString s2;
			s2.Format(_T("%d"), pDoc->b);
			dc.TextOutW(point.x, point.y, s2);
		}
		 else {//���ھ���A��B�е����
			 CString s3;
			 s3 = "�����Ч";
			 dc.TextOutW(point.x, point.y, s3);
	}
	CView::OnLButtonDown(nFlags, point);
}


void Cexp33View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexp33Doc* pDoc = GetDocument();
	int c;
	c = pDoc->a + pDoc->b;
	CClientDC dc(this);
		if (point.x > 300 && point.x < 400 && point.y > 300 && point.y < 500) {//�ھ���B���Ҽ��������
			CString s4;
			s4.Format(_T("%d"),c);
			dc.TextOutW(point.x, point.y, s4);
	}
	CView::OnRButtonDown(nFlags, point);
}
