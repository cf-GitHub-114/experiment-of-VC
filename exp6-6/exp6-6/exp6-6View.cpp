
// exp6-6View.cpp : Cexp66View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp6-6.h"
#endif

#include "exp6-6Doc.h"
#include "exp6-6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp66View

IMPLEMENT_DYNCREATE(Cexp66View, CView)

BEGIN_MESSAGE_MAP(Cexp66View, CView)
END_MESSAGE_MAP()

// Cexp66View ����/����

Cexp66View::Cexp66View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp66View::~Cexp66View()
{
}

BOOL Cexp66View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp66View ����

void Cexp66View::OnDraw(CDC* /*pDC*/)
{
	Cexp66Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp66View ���

#ifdef _DEBUG
void Cexp66View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp66View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp66Doc* Cexp66View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp66Doc)));
	return (Cexp66Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp66View ��Ϣ�������
