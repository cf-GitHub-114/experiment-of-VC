
// exp7-2View.cpp : Cexp72View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp7-2.h"
#endif

#include "exp7-2Doc.h"
#include "exp7-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp72View

IMPLEMENT_DYNCREATE(Cexp72View, CView)

BEGIN_MESSAGE_MAP(Cexp72View, CView)
END_MESSAGE_MAP()

// Cexp72View ����/����

Cexp72View::Cexp72View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp72View::~Cexp72View()
{
}

BOOL Cexp72View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp72View ����

void Cexp72View::OnDraw(CDC* /*pDC*/)
{
	Cexp72Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp72View ���

#ifdef _DEBUG
void Cexp72View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp72View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp72Doc* Cexp72View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp72Doc)));
	return (Cexp72Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp72View ��Ϣ�������
