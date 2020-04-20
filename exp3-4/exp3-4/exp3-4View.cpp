
// exp3-4View.cpp : Cexp34View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp3-4.h"
#endif

#include "exp3-4Doc.h"
#include "exp3-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp34View

IMPLEMENT_DYNCREATE(Cexp34View, CView)

BEGIN_MESSAGE_MAP(Cexp34View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp34View ����/����

Cexp34View::Cexp34View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp34View::~Cexp34View()
{
}

BOOL Cexp34View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp34View ����

void Cexp34View::OnDraw(CDC* pDC)
{
	Cexp34Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	for (int i = 0;i < pDoc->ju.GetSize();i++) {
		pDC->Rectangle(pDoc->ju.GetAt(i));
	}
}


// Cexp34View ���

#ifdef _DEBUG
void Cexp34View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp34View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp34Doc* Cexp34View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp34Doc)));
	return (Cexp34Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp34View ��Ϣ�������


void Cexp34View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexp34Doc* pDoc = GetDocument();
	CClientDC dc(this);//����һ��CClientDC�Ķ���dc		
	CString s1;
	if (point.x > 0 && point.x < 60 && point.y > 0 && point.y < 100) {//�ھ���A�е����
		s1.Format(_T("%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, s1);
	}               //pDoc->ju[1].PtInRect(point)��Doc->ju.GetAt(1).PtInRect(point)��������
	else if (point.x > 100 && point.x < 200 && point.y > 100 && point.y < 200) {//�ھ���B�е����
		s1.Format(_T("%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, s1);
	}
	else if (point.x > 400 && point.x < 500 && point.y > 400 && point.y < 600) {//�ھ���D�е����
	    int count = ++pDoc->count;
		CString ss1;
		switch (count) {
		case 1:    //�á�1������
			ss1 = "+";
			dc.TextOutW(450, 410, ss1);
			break;
		case 2:
			ss1 = "-";
			dc.TextOutW(450, 430, ss1);
			break;
		case 3:
			ss1 = "*";
			dc.TextOutW(450, 450, ss1);
			break;
		case 4:
			ss1 = "/";
			dc.TextOutW(450, 470, ss1);
			break;
		}	
	}
	else {//���ھ���A��B��D�е����
		s1 = "�����Ч";
		dc.TextOutW(point.x, point.y, s1);
	}

	CView::OnLButtonDown(nFlags, point);
}


void Cexp34View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexp34Doc* pDoc = GetDocument();
	int c;
	CString ss2;
	CClientDC dc(this);
	if (point.x > 200 && point.x < 300 && point.y > 250 && point.y < 400) {//�ھ���C���Ҽ��������	
		int count = pDoc->count;
		CString ss2;
		if (count == 1) {
			c = pDoc->a + pDoc->b;
			ss2.Format(_T("%d"), c);
			dc.TextOutW(point.x, point.y, ss2);
		}
		else if (count == 2) {
			c = pDoc->a - pDoc->b;
			ss2.Format(_T("%d"), c);
			dc.TextOutW(point.x, point.y, ss2);
		}
		else if (count == 3) {
			c = pDoc->a * pDoc->b;
			ss2.Format(_T("%d"), c);
			dc.TextOutW(point.x, point.y, ss2);
		}
		else if (count == 4) {
			c = pDoc->a / pDoc->b;
			ss2.Format(_T("%d"), c);
			dc.TextOutW(point.x, point.y, ss2);
		}
		else {     //��û����������ھ���D�ڵ�������ĴΣ��ھ���C���Ҽ�����ʾ
			c = pDoc->a / pDoc->b;
			ss2.Format(_T("%d"), c);
			dc.TextOutW(point.x, point.y, ss2);
		}
	}

	CView::OnRButtonDown(nFlags, point);
}
