
// exp2-2View.cpp : Cexp22View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp2-2.h"
#endif

#include "exp2-2Doc.h"
#include "exp2-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp22View

IMPLEMENT_DYNCREATE(Cexp22View, CView)

BEGIN_MESSAGE_MAP(Cexp22View, CView)
END_MESSAGE_MAP()

// Cexp22View ����/����

Cexp22View::Cexp22View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp22View::~Cexp22View()
{
}

BOOL Cexp22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp22View ����

void Cexp22View::OnDraw(CDC* pDC)
{
	Cexp22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(200,200,pDoc->s);
	pDC->TextOutW(200, 300, pDoc->s1);
}


// Cexp22View ���

#ifdef _DEBUG
void Cexp22View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp22Doc* Cexp22View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp22Doc)));
	return (Cexp22Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp22View ��Ϣ�������
