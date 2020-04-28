
// exp4-2View.cpp : Cexp42View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// Cexp42View 构造/析构

Cexp42View::Cexp42View()
{
	// TODO: 在此处添加构造代码
}

Cexp42View::~Cexp42View()
{
}

BOOL Cexp42View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp42View 绘制

void Cexp42View::OnDraw(CDC* pDC)
{
	Cexp42Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->A);
}


// Cexp42View 诊断

#ifdef _DEBUG
void Cexp42View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp42View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp42Doc* Cexp42View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp42Doc)));
	return (Cexp42Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp42View 消息处理程序


void Cexp42View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexp42Doc* pDoc = GetDocument();
	CRect clientRec;
	GetClientRect(&clientRec);//获取客户区大小
	switch (nChar) {
	case VK_UP:
		if (pDoc->A.top > 0) {
			pDoc->A.top -= 5;
			pDoc->A.bottom -= 5;
		}break;
	case VK_DOWN:
		if (pDoc->A.bottom <= (clientRec.bottom-clientRec.top)) {//保证右下角的点在客户区内
			pDoc->A.top += 5;
			pDoc->A.bottom += 5;
		}break;
	case VK_LEFT:
		if (pDoc->A.left > 0) {
			pDoc->A.left -= 5;
			pDoc->A.right -= 5;
		}break;
	case VK_RIGHT:
		if (pDoc->A.right <= (clientRec.right - clientRec.left)) {//保证右下角的点在客户区内
			pDoc->A.right += 5;
			pDoc->A.left += 5;
		}break;
	case VK_HOME:
		if (pDoc->A.top > 0 && pDoc->A.left > 0) {//保证右下角的点在客户区内
			pDoc->A.top -= 5;
			pDoc->A.left -= 5;
		}break;
	case VK_END:
		if (pDoc->A.top > 0 && pDoc->A.left > 0) {//保证右下角的点在客户区内
			pDoc->A.top += 5;
			pDoc->A.left += 5;
		}break;
	}
	InvalidateRect(NULL,TRUE);//强制重绘
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void Cexp42View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexp42Doc* pDoc = GetDocument();
	pDoc->A.left = 500;
	pDoc->A.top = 100;
	pDoc->A.right = 900;
	pDoc->A.bottom = 400;
	InvalidateRect(NULL, TRUE);//强制重绘
	CView::OnLButtonDown(nFlags, point);
}
