
// exp6-3View.cpp : Cexp63View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp6-3.h"
#endif

#include "exp6-3Doc.h"
#include "exp6-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp63View

IMPLEMENT_DYNCREATE(Cexp63View, CView)

BEGIN_MESSAGE_MAP(Cexp63View, CView)
END_MESSAGE_MAP()

// Cexp63View ����/����

Cexp63View::Cexp63View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp63View::~Cexp63View()
{
}

BOOL Cexp63View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp63View ����

void Cexp63View::OnDraw(CDC* /*pDC*/)
{
	Cexp63Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp63View ���

#ifdef _DEBUG
void Cexp63View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp63View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp63Doc* Cexp63View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp63Doc)));
	return (Cexp63Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp63View ��Ϣ�������
