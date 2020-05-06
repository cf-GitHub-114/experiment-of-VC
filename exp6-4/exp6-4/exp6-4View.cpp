
// exp6-4View.cpp : Cexp64View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp6-4.h"
#endif

#include "exp6-4Doc.h"
#include "exp6-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp64View

IMPLEMENT_DYNCREATE(Cexp64View, CView)

BEGIN_MESSAGE_MAP(Cexp64View, CView)
END_MESSAGE_MAP()

// Cexp64View 构造/析构

Cexp64View::Cexp64View()
{
	// TODO: 在此处添加构造代码

}

Cexp64View::~Cexp64View()
{
}

BOOL Cexp64View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp64View 绘制

void Cexp64View::OnDraw(CDC* /*pDC*/)
{
	Cexp64Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp64View 诊断

#ifdef _DEBUG
void Cexp64View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp64View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp64Doc* Cexp64View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp64Doc)));
	return (Cexp64Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp64View 消息处理程序
