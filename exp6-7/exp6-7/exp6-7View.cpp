
// exp6-7View.cpp : Cexp67View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp6-7.h"
#endif

#include "exp6-7Doc.h"
#include "exp6-7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp67View

IMPLEMENT_DYNCREATE(Cexp67View, CView)

BEGIN_MESSAGE_MAP(Cexp67View, CView)
END_MESSAGE_MAP()

// Cexp67View ����/����

Cexp67View::Cexp67View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp67View::~Cexp67View()
{
}

BOOL Cexp67View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp67View ����

void Cexp67View::OnDraw(CDC* /*pDC*/)
{
	Cexp67Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp67View ���

#ifdef _DEBUG
void Cexp67View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp67View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp67Doc* Cexp67View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp67Doc)));
	return (Cexp67Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp67View ��Ϣ�������
