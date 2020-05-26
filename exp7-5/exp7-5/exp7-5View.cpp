
// exp7-5View.cpp : Cexp75View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp7-5.h"
#endif

#include "exp7-5Doc.h"
#include "exp7-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp75View

IMPLEMENT_DYNCREATE(Cexp75View, CView)

BEGIN_MESSAGE_MAP(Cexp75View, CView)
END_MESSAGE_MAP()

// Cexp75View 构造/析构

Cexp75View::Cexp75View()
{
	// TODO: 在此处添加构造代码

}

Cexp75View::~Cexp75View()
{
}

BOOL Cexp75View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp75View 绘制

void Cexp75View::OnDraw(CDC* /*pDC*/)
{
	Cexp75Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp75View 诊断

#ifdef _DEBUG
void Cexp75View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp75View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp75Doc* Cexp75View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp75Doc)));
	return (Cexp75Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp75View 消息处理程序
