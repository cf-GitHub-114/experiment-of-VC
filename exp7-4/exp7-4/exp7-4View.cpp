
// exp7-4View.cpp : Cexp74View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp7-4.h"
#endif

#include "exp7-4Doc.h"
#include "exp7-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp74View

IMPLEMENT_DYNCREATE(Cexp74View, CView)

BEGIN_MESSAGE_MAP(Cexp74View, CView)
END_MESSAGE_MAP()

// Cexp74View 构造/析构

Cexp74View::Cexp74View()
{
	// TODO: 在此处添加构造代码

}

Cexp74View::~Cexp74View()
{
}

BOOL Cexp74View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp74View 绘制

void Cexp74View::OnDraw(CDC* /*pDC*/)
{
	Cexp74Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp74View 诊断

#ifdef _DEBUG
void Cexp74View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp74View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp74Doc* Cexp74View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp74Doc)));
	return (Cexp74Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp74View 消息处理程序
