
// exp1-3View.cpp : Cexp13View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp1-3.h"
#endif

#include "exp1-3Doc.h"
#include "exp1-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp13View

IMPLEMENT_DYNCREATE(Cexp13View, CView)

BEGIN_MESSAGE_MAP(Cexp13View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp13View 构造/析构

Cexp13View::Cexp13View()
{
	// TODO: 在此处添加构造代码
	s2 = "吃饭睡觉玩手机";

}

Cexp13View::~Cexp13View()
{
}

BOOL Cexp13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp13View 绘制

void Cexp13View::OnDraw(CDC* /*pDC*/)
{
	Cexp13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp13View 诊断

#ifdef _DEBUG
void Cexp13View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp13View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp13Doc* Cexp13View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp13Doc)));
	return (Cexp13Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp13View 消息处理程序


void Cexp13View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexp13Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CClientDC dc(this);
	dc.TextOutW(300, 300,pDoc->s1+s2 );
	//CString s3 = "study";   //此句是错误的
	CView::OnLButtonDown(nFlags, point);
}
