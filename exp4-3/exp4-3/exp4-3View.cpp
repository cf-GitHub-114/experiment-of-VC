
// exp4-3View.cpp : Cexp43View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp4-3.h"
#endif

#include "exp4-3Doc.h"
#include "exp4-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp43View

IMPLEMENT_DYNCREATE(Cexp43View, CView)

BEGIN_MESSAGE_MAP(Cexp43View, CView)
END_MESSAGE_MAP()

// Cexp43View ����/����

Cexp43View::Cexp43View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp43View::~Cexp43View()
{
}

BOOL Cexp43View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp43View ����

void Cexp43View::OnDraw(CDC* /*pDC*/)
{
	Cexp43Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp43View ���

#ifdef _DEBUG
void Cexp43View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp43View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp43Doc* Cexp43View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp43Doc)));
	return (Cexp43Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp43View ��Ϣ�������
