
// exp8-3View.cpp : Cexp83View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp8-3.h"
#endif

#include "exp8-3Doc.h"
#include "exp8-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp83View

IMPLEMENT_DYNCREATE(Cexp83View, CView)

BEGIN_MESSAGE_MAP(Cexp83View, CView)
END_MESSAGE_MAP()

// Cexp83View ����/����

Cexp83View::Cexp83View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp83View::~Cexp83View()
{
}

BOOL Cexp83View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp83View ����

void Cexp83View::OnDraw(CDC* /*pDC*/)
{
	Cexp83Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp83View ���

#ifdef _DEBUG
void Cexp83View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp83View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp83Doc* Cexp83View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp83Doc)));
	return (Cexp83Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp83View ��Ϣ�������
