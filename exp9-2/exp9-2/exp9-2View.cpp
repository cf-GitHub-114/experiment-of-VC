
// exp9-2View.cpp : Cexp92View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp9-2.h"
#endif

#include "exp9-2Doc.h"
#include "exp9-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp92View

IMPLEMENT_DYNCREATE(Cexp92View, CView)

BEGIN_MESSAGE_MAP(Cexp92View, CView)
END_MESSAGE_MAP()

// Cexp92View ����/����

Cexp92View::Cexp92View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp92View::~Cexp92View()
{
}

BOOL Cexp92View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp92View ����

void Cexp92View::OnDraw(CDC* /*pDC*/)
{
	Cexp92Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp92View ���

#ifdef _DEBUG
void Cexp92View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp92View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp92Doc* Cexp92View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp92Doc)));
	return (Cexp92Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp92View ��Ϣ�������
