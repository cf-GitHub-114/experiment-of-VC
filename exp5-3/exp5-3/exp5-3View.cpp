
// exp5-3View.cpp : Cexp53View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp5-3.h"
#endif

#include "exp5-3Doc.h"
#include "exp5-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp53View

IMPLEMENT_DYNCREATE(Cexp53View, CView)

BEGIN_MESSAGE_MAP(Cexp53View, CView)
END_MESSAGE_MAP()

// Cexp53View ����/����

Cexp53View::Cexp53View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp53View::~Cexp53View()
{
}

BOOL Cexp53View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp53View ����

void Cexp53View::OnDraw(CDC* /*pDC*/)
{
	Cexp53Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp53View ���

#ifdef _DEBUG
void Cexp53View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp53View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp53Doc* Cexp53View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp53Doc)));
	return (Cexp53Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp53View ��Ϣ�������
