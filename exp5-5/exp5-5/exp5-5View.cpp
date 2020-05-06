
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

void Cexp55View::OnDraw(CDC* /*pDC*/)
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
