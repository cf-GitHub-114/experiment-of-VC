
// exp3-5View.cpp : Cexp35View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp3-5.h"
#endif

#include "exp3-5Doc.h"
#include "exp3-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp35View

IMPLEMENT_DYNCREATE(Cexp35View, CView)

BEGIN_MESSAGE_MAP(Cexp35View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp35View 构造/析构

Cexp35View::Cexp35View()
{
	// TODO: 在此处添加构造代码
	flag = 0;//初始化变量
}

Cexp35View::~Cexp35View()
{
}

BOOL Cexp35View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp35View 绘制

void Cexp35View::OnDraw(CDC* pDC)
{
	Cexp35Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (flag) {
		CRect cr;//定义一个矩形来装客户区信息
	    this->GetClientRect(&cr);//获取客户区信息的函数，是视图类的一个成员函数
	    pDC->Ellipse(cr);
	}
	
}


// Cexp35View 诊断

#ifdef _DEBUG
void Cexp35View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp35View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp35Doc* Cexp35View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp35Doc)));
	return (Cexp35Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp35View 消息处理程序


void Cexp35View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cr;//定义一个矩形来装客户区信息
	this->GetClientRect(&cr);//获取客户区信息的函数，是视图类的一个成员函数
	CClientDC dc(this);
	dc.Ellipse(cr);//画圆操作
	flag = 1;//使窗口重绘后进行画圆的操作

	CView::OnLButtonDown(nFlags, point);
}
