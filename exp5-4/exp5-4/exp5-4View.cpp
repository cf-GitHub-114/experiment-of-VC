
// exp5-4View.cpp : Cexp54View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp5-4.h"
#endif

#include "exp5-4Doc.h"
#include "exp5-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp54View

IMPLEMENT_DYNCREATE(Cexp54View, CView)

BEGIN_MESSAGE_MAP(Cexp54View, CView)
END_MESSAGE_MAP()

// Cexp54View ����/����

Cexp54View::Cexp54View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp54View::~Cexp54View()
{
}

BOOL Cexp54View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp54View ����

void Cexp54View::OnDraw(CDC* /*pDC*/)
{
	Cexp54Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp54View ���

#ifdef _DEBUG
void Cexp54View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp54View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp54Doc* Cexp54View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp54Doc)));
	return (Cexp54Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp54View ��Ϣ�������
