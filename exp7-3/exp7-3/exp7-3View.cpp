
// exp7-3View.cpp : Cexp73View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp7-3.h"
#endif

#include "exp7-3Doc.h"
#include "exp7-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp73View

IMPLEMENT_DYNCREATE(Cexp73View, CView)

BEGIN_MESSAGE_MAP(Cexp73View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexp73View 构造/析构

Cexp73View::Cexp73View()
{
	// TODO: 在此处添加构造代码
	//初始化矩形
	rect.left = 10;	
	rect.top = 10;
	rect.right = 100;
	rect.bottom = 100;
	flag = 0;//初始化标志
	left = 0;
	top = 0;
	right = 0;
	bottom = 0;
}

Cexp73View::~Cexp73View()
{
}

BOOL Cexp73View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp73View 绘制

void Cexp73View::OnDraw(CDC* pDC)
{
	Cexp73Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	//CString s = _T("jdfdsfnekjf");
	//pDC->TextOutW(0, 0, s);
	pDC->Rectangle(&rect);//画矩形
}


// Cexp73View 诊断

#ifdef _DEBUG
void Cexp73View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp73View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp73Doc* Cexp73View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp73Doc)));
	return (Cexp73Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp73View 消息处理程序


void Cexp73View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值 
	if (flag == 1) {//方法一
	    rect.left += (point.x - downX);
	    rect.top += (point.y - downY);
	    rect.right += (point.x - downX);
	    rect.bottom += (point.y - downY);
		downX += (point.x - downX);
		downY += (point.y - downY);
		/*方法二
		rect.left = left + (point.x - downX);
	    rect.top = top + (point.y - downY);
	    rect.right = right + (point.x - downX);
	    rect.bottom = bottom +  (point.y - downY);*/
		Invalidate();//强制重绘
	}
	
	CView::OnMouseMove(nFlags, point);
}


void Cexp73View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	downX = point.x;
	downY = point.y;	
	left = rect.left;
	top = rect.top;
	right = rect.right;
	bottom = rect.bottom;
	flag = 1;
	CView::OnLButtonDown(nFlags, point);
}


void Cexp73View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 0;
	CView::OnLButtonUp(nFlags, point);
}
