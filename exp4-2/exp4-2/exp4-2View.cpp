
// exp4-2View.cpp : Cexp42View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp4-2.h"
#endif

#include "exp4-2Doc.h"
#include "exp4-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp42View

IMPLEMENT_DYNCREATE(Cexp42View, CView)

BEGIN_MESSAGE_MAP(Cexp42View, CView)
END_MESSAGE_MAP()

// Cexp42View ����/����

Cexp42View::Cexp42View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp42View::~Cexp42View()
{
}

BOOL Cexp42View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp42View ����

void Cexp42View::OnDraw(CDC* /*pDC*/)
{
	Cexp42Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp42View ���

#ifdef _DEBUG
void Cexp42View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp42View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp42Doc* Cexp42View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp42Doc)));
	return (Cexp42Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp42View ��Ϣ�������
