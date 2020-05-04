
// exp5-2View.cpp : Cexp52View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp5-2.h"
#endif

#include "exp5-2Doc.h"
#include "exp5-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp52View

IMPLEMENT_DYNCREATE(Cexp52View, CView)

BEGIN_MESSAGE_MAP(Cexp52View, CView)
END_MESSAGE_MAP()

// Cexp52View 构造/析构

Cexp52View::Cexp52View()
{
	// TODO: 在此处添加构造代码

}

Cexp52View::~Cexp52View()
{
}

BOOL Cexp52View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp52View 绘制

void Cexp52View::OnDraw(CDC* /*pDC*/)
{
	Cexp52Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp52View 诊断

#ifdef _DEBUG
void Cexp52View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp52View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp52Doc* Cexp52View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp52Doc)));
	return (Cexp52Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp52View 消息处理程序
