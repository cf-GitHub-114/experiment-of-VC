
// exp3-5View.cpp : Cexp35View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp3-5.h"
#endif

#include "exp3-5Doc.h"
#include "exp3-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp35View

IMPLEMENT_DYNCREATE(Cexp35View, CView)

BEGIN_MESSAGE_MAP(Cexp35View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp35View ����/����

Cexp35View::Cexp35View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;//��ʼ������
}

Cexp35View::~Cexp35View()
{
}

BOOL Cexp35View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp35View ����

void Cexp35View::OnDraw(CDC* pDC)
{
	Cexp35Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	if (flag) {
		CRect cr;//����һ��������װ�ͻ�����Ϣ
	    this->GetClientRect(&cr);//��ȡ�ͻ�����Ϣ�ĺ���������ͼ���һ����Ա����
	    pDC->Ellipse(cr);
	}
	
}


// Cexp35View ���

#ifdef _DEBUG
void Cexp35View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp35View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp35Doc* Cexp35View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp35Doc)));
	return (Cexp35Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp35View ��Ϣ�������


void Cexp35View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect cr;//����һ��������װ�ͻ�����Ϣ
	this->GetClientRect(&cr);//��ȡ�ͻ�����Ϣ�ĺ���������ͼ���һ����Ա����
	CClientDC dc(this);
	dc.Ellipse(cr);//��Բ����
	flag = 1;//ʹ�����ػ����л�Բ�Ĳ���

	CView::OnLButtonDown(nFlags, point);
}
