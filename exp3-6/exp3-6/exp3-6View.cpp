
// exp3-6View.cpp : Cexp36View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp3-6.h"
#endif

#include "exp3-6Doc.h"
#include "exp3-6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp36View

IMPLEMENT_DYNCREATE(Cexp36View, CView)

BEGIN_MESSAGE_MAP(Cexp36View, CView)
END_MESSAGE_MAP()

// Cexp36View ����/����

Cexp36View::Cexp36View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp36View::~Cexp36View()
{
}

BOOL Cexp36View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp36View ����

void Cexp36View::OnDraw(CDC* /*pDC*/)
{
	Cexp36Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp36View ���

#ifdef _DEBUG
void Cexp36View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp36View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp36Doc* Cexp36View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp36Doc)));
	return (Cexp36Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp36View ��Ϣ�������
