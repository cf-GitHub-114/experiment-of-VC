
// exp5-5View.cpp : Cexp55View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp5-5.h"
#endif

#include "exp5-5Doc.h"
#include "exp5-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp55View

IMPLEMENT_DYNCREATE(Cexp55View, CView)

BEGIN_MESSAGE_MAP(Cexp55View, CView)
	ON_COMMAND(ID_VIEW_DRAWLINE, &Cexp55View::OnViewDrawline)
	ON_COMMAND(ID_VIEW_DRAWRECTANGLE, &Cexp55View::OnViewDrawrectangle)
	ON_COMMAND(ID_VIEW_DRAWELLIPSE, &Cexp55View::OnViewDrawellipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexp55View 构造/析构

Cexp55View::Cexp55View()
{
	// TODO: 在此处添加构造代码
}

Cexp55View::~Cexp55View()
{
}

BOOL Cexp55View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp55View 绘制

void Cexp55View::OnDraw(CDC* pDC)
{
	Cexp55Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp55View 诊断

#ifdef _DEBUG
void Cexp55View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp55View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp55Doc* Cexp55View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp55Doc)));
	return (Cexp55Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp55View 消息处理程序


void Cexp55View::OnViewDrawline()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	dc.MoveTo(downPointX, downPointY);
	dc.LineTo(upPointX, upPointY);//画线
}


void Cexp55View::OnViewDrawrectangle()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	CRect rect(downPointX, downPointY, upPointX, upPointY);
	dc.Rectangle(rect);//画矩形
}


void Cexp55View::OnViewDrawellipse()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	CRect rect(downPointX, downPointY, upPointX, upPointY);
	dc.Ellipse(rect);//画椭圆
}


void Cexp55View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	downPointX = point.x;
	downPointY = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cexp55View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	upPointX = point.x;
	upPointY = point.y;
	CView::OnLButtonUp(nFlags, point);
}
