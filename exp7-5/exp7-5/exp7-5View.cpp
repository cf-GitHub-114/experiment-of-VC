
// exp7-5View.cpp : Cexp75View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp7-5.h"
#endif

#include "exp7-5Doc.h"
#include "exp7-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp75View

IMPLEMENT_DYNCREATE(Cexp75View, CView)

BEGIN_MESSAGE_MAP(Cexp75View, CView)
END_MESSAGE_MAP()

// Cexp75View ����/����

Cexp75View::Cexp75View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp75View::~Cexp75View()
{
}

BOOL Cexp75View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp75View ����

void Cexp75View::OnDraw(CDC* /*pDC*/)
{
	Cexp75Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp75View ���

#ifdef _DEBUG
void Cexp75View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp75View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp75Doc* Cexp75View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp75Doc)));
	return (Cexp75Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp75View ��Ϣ�������
