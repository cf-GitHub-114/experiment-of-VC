
// exp6-1View.cpp : Cexp61View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp6-1.h"
#endif

#include "exp6-1Doc.h"
#include "exp6-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp61View

IMPLEMENT_DYNCREATE(Cexp61View, CView)

BEGIN_MESSAGE_MAP(Cexp61View, CView)
END_MESSAGE_MAP()

// Cexp61View ����/����

Cexp61View::Cexp61View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp61View::~Cexp61View()
{
}

BOOL Cexp61View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp61View ����

void Cexp61View::OnDraw(CDC* /*pDC*/)
{
	Cexp61Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CFileDialog cfd(true);  //����Ի������
	int r = cfd.DoModal();  //�����Ի���
	CClientDC dc(this);
	if (r == IDOK) {//ȷ��Ҫ�˳��Ի���
		CString filename = cfd.GetPathName();
		dc.TextOutW(300, 200, filename);
	}
}


// Cexp61View ���

#ifdef _DEBUG
void Cexp61View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp61View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp61Doc* Cexp61View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp61Doc)));
	return (Cexp61Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp61View ��Ϣ�������
