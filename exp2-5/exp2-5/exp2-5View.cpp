
// exp2-5View.cpp : Cexp25View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp2-5.h"
#endif

#include "exp2-5Doc.h"
#include "exp2-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp25View

IMPLEMENT_DYNCREATE(Cexp25View, CView)

BEGIN_MESSAGE_MAP(Cexp25View, CView)
END_MESSAGE_MAP()

// Cexp25View ����/����

Cexp25View::Cexp25View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp25View::~Cexp25View()
{
}

BOOL Cexp25View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp25View ����

void Cexp25View::OnDraw(CDC* /*pDC*/)
{
	Cexp25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp25View ���

#ifdef _DEBUG
void Cexp25View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp25View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp25Doc* Cexp25View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp25Doc)));
	return (Cexp25Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp25View ��Ϣ�������
