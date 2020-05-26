
// exp7-3View.cpp : Cexp73View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp7-3.h"
#endif

#include "exp7-3Doc.h"
#include "exp7-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp73View

IMPLEMENT_DYNCREATE(Cexp73View, CView)

BEGIN_MESSAGE_MAP(Cexp73View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexp73View ����/����

Cexp73View::Cexp73View()
{
	// TODO: �ڴ˴���ӹ������
	//��ʼ������
	rect.left = 10;	
	rect.top = 10;
	rect.right = 100;
	rect.bottom = 100;
	flag = 0;//��ʼ����־
	left = 0;
	top = 0;
	right = 0;
	bottom = 0;
}

Cexp73View::~Cexp73View()
{
}

BOOL Cexp73View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp73View ����

void Cexp73View::OnDraw(CDC* pDC)
{
	Cexp73Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	//CString s = _T("jdfdsfnekjf");
	//pDC->TextOutW(0, 0, s);
	pDC->Rectangle(&rect);//������
}


// Cexp73View ���

#ifdef _DEBUG
void Cexp73View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp73View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp73Doc* Cexp73View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp73Doc)));
	return (Cexp73Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp73View ��Ϣ�������


void Cexp73View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ 
	if (flag == 1) {//����һ
	    rect.left += (point.x - downX);
	    rect.top += (point.y - downY);
	    rect.right += (point.x - downX);
	    rect.bottom += (point.y - downY);
		downX += (point.x - downX);
		downY += (point.y - downY);
		/*������
		rect.left = left + (point.x - downX);
	    rect.top = top + (point.y - downY);
	    rect.right = right + (point.x - downX);
	    rect.bottom = bottom +  (point.y - downY);*/
		Invalidate();//ǿ���ػ�
	}
	
	CView::OnMouseMove(nFlags, point);
}


void Cexp73View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	downX = point.x;
	downY = point.y;	
	left = rect.left;
	top = rect.top;
	right = rect.right;
	bottom = rect.bottom;
	flag = 1;
	CView::OnLButtonDown(nFlags, point);
}


void Cexp73View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 0;
	CView::OnLButtonUp(nFlags, point);
}
