
// exp3-6View.cpp : Cexp36View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp3-6.h"
#endif

#include "exp3-6Doc.h"
#include "exp3-6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp36View

IMPLEMENT_DYNCREATE(Cexp36View, CView)

BEGIN_MESSAGE_MAP(Cexp36View, CView)
END_MESSAGE_MAP()

// Cexp36View 构造/析构

Cexp36View::Cexp36View()
{
	// TODO: 在此处添加构造代码

}

Cexp36View::~Cexp36View()
{
}

BOOL Cexp36View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp36View 绘制

void Cexp36View::OnDraw(CDC* /*pDC*/)
{
	Cexp36Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp36View 诊断

#ifdef _DEBUG
void Cexp36View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp36View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp36Doc* Cexp36View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp36Doc)));
	return (Cexp36Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp36View 消息处理程序
