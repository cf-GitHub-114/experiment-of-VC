
// exp6-5View.cpp : Cexp65View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp6-5.h"
#endif

#include "exp6-5Doc.h"
#include "exp6-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp65View

IMPLEMENT_DYNCREATE(Cexp65View, CView)

BEGIN_MESSAGE_MAP(Cexp65View, CView)
END_MESSAGE_MAP()

// Cexp65View ����/����

Cexp65View::Cexp65View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp65View::~Cexp65View()
{
}

BOOL Cexp65View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp65View ����

void Cexp65View::OnDraw(CDC* /*pDC*/)
{
	Cexp65Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp65View ���

#ifdef _DEBUG
void Cexp65View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp65View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp65Doc* Cexp65View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp65Doc)));
	return (Cexp65Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp65View ��Ϣ�������
