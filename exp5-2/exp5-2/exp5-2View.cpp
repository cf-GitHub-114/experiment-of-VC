
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
