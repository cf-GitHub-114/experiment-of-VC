
// exp7-4View.cpp : Cexp74View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp7-4.h"
#endif

#include "exp7-4Doc.h"
#include "exp7-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp74View

IMPLEMENT_DYNCREATE(Cexp74View, CView)

BEGIN_MESSAGE_MAP(Cexp74View, CView)
END_MESSAGE_MAP()

// Cexp74View ����/����

Cexp74View::Cexp74View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp74View::~Cexp74View()
{
}

BOOL Cexp74View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp74View ����

void Cexp74View::OnDraw(CDC* /*pDC*/)
{
	Cexp74Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp74View ���

#ifdef _DEBUG
void Cexp74View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp74View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp74Doc* Cexp74View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp74Doc)));
	return (Cexp74Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp74View ��Ϣ�������
