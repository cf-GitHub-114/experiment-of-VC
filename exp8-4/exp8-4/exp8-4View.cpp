
// exp8-4View.cpp : Cexp84View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp8-4.h"
#endif

#include "exp8-4Doc.h"
#include "exp8-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp84View

IMPLEMENT_DYNCREATE(Cexp84View, CView)

BEGIN_MESSAGE_MAP(Cexp84View, CView)
END_MESSAGE_MAP()

// Cexp84View ����/����

Cexp84View::Cexp84View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp84View::~Cexp84View()
{
}

BOOL Cexp84View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp84View ����

void Cexp84View::OnDraw(CDC* /*pDC*/)
{
	Cexp84Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp84View ���

#ifdef _DEBUG
void Cexp84View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp84View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp84Doc* Cexp84View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp84Doc)));
	return (Cexp84Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp84View ��Ϣ�������
