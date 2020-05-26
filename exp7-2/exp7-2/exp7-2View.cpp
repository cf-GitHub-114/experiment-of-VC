
// exp7-2View.cpp : Cexp72View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp7-2.h"
#endif

#include "exp7-2Doc.h"
#include "exp7-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp72View

IMPLEMENT_DYNCREATE(Cexp72View, CView)

BEGIN_MESSAGE_MAP(Cexp72View, CView)
END_MESSAGE_MAP()

// Cexp72View 构造/析构

Cexp72View::Cexp72View()
{
	// TODO: 在此处添加构造代码

}

Cexp72View::~Cexp72View()
{
}

BOOL Cexp72View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp72View 绘制

void Cexp72View::OnDraw(CDC* /*pDC*/)
{
	Cexp72Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp72View 诊断

#ifdef _DEBUG
void Cexp72View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp72View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp72Doc* Cexp72View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp72Doc)));
	return (Cexp72Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp72View 消息处理程序
