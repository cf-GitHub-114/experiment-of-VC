
// exp9-1View.cpp : Cexp91View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp9-1.h"
#endif

#include "exp9-1Doc.h"
#include "exp9-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp91View

IMPLEMENT_DYNCREATE(Cexp91View, CView)

BEGIN_MESSAGE_MAP(Cexp91View, CView)
	ON_COMMAND(ID_VIEW_GETNAME, &Cexp91View::OnViewGetname)
END_MESSAGE_MAP()

// Cexp91View ����/����

Cexp91View::Cexp91View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp91View::~Cexp91View()
{
}

BOOL Cexp91View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp91View ����

void Cexp91View::OnDraw(CDC* pDC)
{
	Cexp91Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->TextOutW(200,300,pDoc->filename);
}


// Cexp91View ���

#ifdef _DEBUG
void Cexp91View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp91View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp91Doc* Cexp91View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp91Doc)));
	return (Cexp91Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp91View ��Ϣ�������


void Cexp91View::OnViewGetname()
{
	// TODO: �ڴ���������������
	Cexp91Doc* pDoc = GetDocument();
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK) {
		pDoc->filename = cfd.GetPathName();
	}
	Invalidate();
}
