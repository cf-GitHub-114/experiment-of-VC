
// exp5-1View.cpp : Cexp51View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp5-1.h"
#endif

#include "exp5-1Doc.h"
#include "exp5-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp51View

IMPLEMENT_DYNCREATE(Cexp51View, CView)

BEGIN_MESSAGE_MAP(Cexp51View, CView)
	ON_COMMAND(ID_VIEW_SHOWELLIPSE, &Cexp51View::OnViewShowellipse)
END_MESSAGE_MAP()

// Cexp51View 构造/析构

Cexp51View::Cexp51View()
{
	// TODO: 在此处添加构造代码
}

Cexp51View::~Cexp51View()
{
}

BOOL Cexp51View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp51View 绘制

void Cexp51View::OnDraw(CDC* pDC)
{
	Cexp51Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp51View 诊断

#ifdef _DEBUG
void Cexp51View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp51View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp51Doc* Cexp51View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp51Doc)));
	return (Cexp51Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp51View 消息处理程序


void Cexp51View::OnViewShowellipse()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);//定义一个CClientDC的对象dc
	CRect rc;//定义一个矩形对象
	//CArray<CRect,CRect&>ca;
	//ca.SetSize(20);
	GetClientRect(&rc);//获取客户区大小
	int r = 100;//定义一个整型变量r,为圆形的半径
	int x = (rc.left + rc.right)/2;//获取客户区中点
	int y = (rc.top + rc.bottom)/2;
	for (int i = 0;i < 10;i++) {
		r -= 10;//先画大的圆，若先画小的圆，会被后面的大圆挡住
		CRect A(x-r , y-r , x+r , y+r);
		dc.Ellipse(A);
	}
}
