
// ��������View.cpp : C��������View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "��������.h"
#endif

#include "��������Doc.h"
#include "��������View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C��������View

IMPLEMENT_DYNCREATE(C��������View, CView)

BEGIN_MESSAGE_MAP(C��������View, CView)
END_MESSAGE_MAP()

// C��������View ����/����

C��������View::C��������View()
{
	// TODO: �ڴ˴���ӹ������

}

C��������View::~C��������View()
{
}

BOOL C��������View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C��������View ����

void C��������View::OnDraw(CDC* /*pDC*/)
{
	C��������Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C��������View ���

#ifdef _DEBUG
void C��������View::AssertValid() const
{
	CView::AssertValid();
}

void C��������View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C��������Doc* C��������View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C��������Doc)));
	return (C��������Doc*)m_pDocument;
}
#endif //_DEBUG


// C��������View ��Ϣ�������
