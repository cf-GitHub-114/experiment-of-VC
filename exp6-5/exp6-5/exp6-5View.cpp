
// exp6-5View.cpp : Cexp65View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp6-5.h"
#endif

#include "exp6-5Doc.h"
#include "exp6-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp65View

IMPLEMENT_DYNCREATE(Cexp65View, CView)

BEGIN_MESSAGE_MAP(Cexp65View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// Cexp65View ����/����

Cexp65View::Cexp65View()
{
	// TODO: �ڴ˴���ӹ������
	s = "";
	rect.left = 200,
	rect.top = 300;
	rect.right = 800;
	rect.bottom = 350;
}

Cexp65View::~Cexp65View()
{
}

BOOL Cexp65View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp65View ����

void Cexp65View::OnDraw(CDC* pDC)
{
	Cexp65Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(rect);
}


// Cexp65View ���

#ifdef _DEBUG
void Cexp65View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp65View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp65Doc* Cexp65View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp65Doc)));
	return (Cexp65Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp65View ��Ϣ�������


void Cexp65View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	s = s+(char)nChar;
	CSize txtpot;
	txtpot = dc.GetTextExtent(s);
	if(txtpot.cx <= 598){    //txtpot.cxΪ�ַ���s�����س���
		dc.TextOutW( 201,310, s);
		
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}
