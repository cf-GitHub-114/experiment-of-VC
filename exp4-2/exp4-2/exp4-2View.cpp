
// exp4-2View.cpp : Cexp42View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp4-2.h"
#endif

#include "exp4-2Doc.h"
#include "exp4-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp42View

IMPLEMENT_DYNCREATE(Cexp42View, CView)

BEGIN_MESSAGE_MAP(Cexp42View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp42View ����/����

Cexp42View::Cexp42View()
{
	// TODO: �ڴ˴���ӹ������
}

Cexp42View::~Cexp42View()
{
}

BOOL Cexp42View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp42View ����

void Cexp42View::OnDraw(CDC* pDC)
{
	Cexp42Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(pDoc->A);
}


// Cexp42View ���

#ifdef _DEBUG
void Cexp42View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp42View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp42Doc* Cexp42View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp42Doc)));
	return (Cexp42Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp42View ��Ϣ�������


void Cexp42View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexp42Doc* pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);//��ȡ�ͻ�����С
	switch (nChar) {
	case VK_UP:
		if (pDoc->A.top > 0) {
			pDoc->A.top -= 5;
			pDoc->A.bottom -= 5;
		}break;
	case VK_DOWN:
		if (pDoc->A.bottom <= (clientRec.bottom-clientRec.top)) {//��֤���½ǵĵ��ڿͻ�����
			pDoc->A.top += 5;
			pDoc->A.bottom += 5;
		}break;
	case VK_LEFT:
		if (pDoc->A.left > 0) {
			pDoc->A.left -= 5;
			pDoc->A.right -= 5;
		}break;
	case VK_RIGHT:
		if (pDoc->A.right <= (clientRec.right - clientRec.left)) {//��֤���½ǵĵ��ڿͻ�����
			pDoc->A.right += 5;
			pDoc->A.left += 5;
		}break;
	case VK_HOME:
		if (pDoc->A.top > 0 && pDoc->A.left > 0) {//��֤���½ǵĵ��ڿͻ�����
			pDoc->A.top -= 5;
			pDoc->A.left -= 5;
		}break;
	case VK_END:
		if (pDoc->A.top > 0 && pDoc->A.left > 0) {//��֤���½ǵĵ��ڿͻ�����
			pDoc->A.top += 5;
			pDoc->A.left += 5;
		}break;
	}
	InvalidateRect(NULL,TRUE);//ǿ���ػ�
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void Cexp42View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Cexp42Doc* pDoc = GetDocument();
	pDoc->A.left = 500;
	pDoc->A.top = 100;
	pDoc->A.right = 900;
	pDoc->A.bottom = 400;
	InvalidateRect(NULL, TRUE);//ǿ���ػ�
	CView::OnLButtonDown(nFlags, point);
}
