
// exp7-1View.cpp : Cexp71View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp7-1.h"
#endif

#include "exp7-1Doc.h"
#include "exp7-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp71View

IMPLEMENT_DYNCREATE(Cexp71View, CView)

BEGIN_MESSAGE_MAP(Cexp71View, CView)
END_MESSAGE_MAP()

// Cexp71View ����/����

Cexp71View::Cexp71View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp71View::~Cexp71View()
{
}

BOOL Cexp71View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp71View ����

void Cexp71View::OnDraw(CDC* /*pDC*/)
{
	Cexp71Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp71View ���

#ifdef _DEBUG
void Cexp71View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp71View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp71Doc* Cexp71View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp71Doc)));
	return (Cexp71Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp71View ��Ϣ�������
