
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
END_MESSAGE_MAP()

// Cexp85View ����/����

Cexp85View::Cexp85View()
{
	// TODO: �ڴ˴���ӹ������

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

void Cexp85View::OnDraw(CDC* /*pDC*/)
{
	Cexp85Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
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
