
// exp5-3View.cpp : Cexp53View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp5-3.h"
#endif

#include "exp5-3Doc.h"
#include "exp5-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp53View

IMPLEMENT_DYNCREATE(Cexp53View, CView)

BEGIN_MESSAGE_MAP(Cexp53View, CView)
END_MESSAGE_MAP()

// Cexp53View 构造/析构

Cexp53View::Cexp53View()
{
	// TODO: 在此处添加构造代码

}

Cexp53View::~Cexp53View()
{
}

BOOL Cexp53View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp53View 绘制

void Cexp53View::OnDraw(CDC* /*pDC*/)
{
	Cexp53Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp53View 诊断

#ifdef _DEBUG
void Cexp53View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp53View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp53Doc* Cexp53View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp53Doc)));
	return (Cexp53Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp53View 消息处理程序
