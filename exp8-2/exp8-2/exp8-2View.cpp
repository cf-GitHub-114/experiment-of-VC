
// exp8-2View.cpp : Cexp82View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp8-2.h"
#endif

#include "exp8-2Doc.h"
#include "exp8-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp82View

IMPLEMENT_DYNCREATE(Cexp82View, CView)

BEGIN_MESSAGE_MAP(Cexp82View, CView)
END_MESSAGE_MAP()

// Cexp82View ����/����

Cexp82View::Cexp82View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp82View::~Cexp82View()
{
}

BOOL Cexp82View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp82View ����

void Cexp82View::OnDraw(CDC* /*pDC*/)
{
	Cexp82Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp82View ���

#ifdef _DEBUG
void Cexp82View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp82View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp82Doc* Cexp82View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp82Doc)));
	return (Cexp82Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp82View ��Ϣ�������
