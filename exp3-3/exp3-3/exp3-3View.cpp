
// exp3-3View.cpp : Cexp33View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp3-3.h"
#endif

#include "exp3-3Doc.h"
#include "exp3-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp33View

IMPLEMENT_DYNCREATE(Cexp33View, CView)

BEGIN_MESSAGE_MAP(Cexp33View, CView)
END_MESSAGE_MAP()

// Cexp33View ����/����

Cexp33View::Cexp33View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp33View::~Cexp33View()
{
}

BOOL Cexp33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp33View ����

void Cexp33View::OnDraw(CDC* /*pDC*/)
{
	Cexp33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp33View ���

#ifdef _DEBUG
void Cexp33View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp33Doc* Cexp33View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp33Doc)));
	return (Cexp33Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp33View ��Ϣ�������
