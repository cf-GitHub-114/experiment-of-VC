
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
END_MESSAGE_MAP()

// Cexp73View ����/����

Cexp73View::Cexp73View()
{
	// TODO: �ڴ˴���ӹ������

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

void Cexp73View::OnDraw(CDC* /*pDC*/)
{
	Cexp73Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
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
