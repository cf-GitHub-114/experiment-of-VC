
// exp7-6View.cpp : Cexp76View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp7-6.h"
#endif

#include "exp7-6Doc.h"
#include "exp7-6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp76View

IMPLEMENT_DYNCREATE(Cexp76View, CView)

BEGIN_MESSAGE_MAP(Cexp76View, CView)
END_MESSAGE_MAP()

// Cexp76View ����/����

Cexp76View::Cexp76View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp76View::~Cexp76View()
{
}

BOOL Cexp76View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp76View ����

void Cexp76View::OnDraw(CDC* /*pDC*/)
{
	Cexp76Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp76View ���

#ifdef _DEBUG
void Cexp76View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp76View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp76Doc* Cexp76View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp76Doc)));
	return (Cexp76Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp76View ��Ϣ�������
