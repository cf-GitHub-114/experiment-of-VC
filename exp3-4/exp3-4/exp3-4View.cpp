
// exp3-4View.cpp : Cexp34View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp3-4.h"
#endif

#include "exp3-4Doc.h"
#include "exp3-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp34View

IMPLEMENT_DYNCREATE(Cexp34View, CView)

BEGIN_MESSAGE_MAP(Cexp34View, CView)
END_MESSAGE_MAP()

// Cexp34View ����/����

Cexp34View::Cexp34View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp34View::~Cexp34View()
{
}

BOOL Cexp34View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp34View ����

void Cexp34View::OnDraw(CDC* /*pDC*/)
{
	Cexp34Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp34View ���

#ifdef _DEBUG
void Cexp34View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp34View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp34Doc* Cexp34View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp34Doc)));
	return (Cexp34Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp34View ��Ϣ�������
