
// exp4-3View.cpp : Cexp43View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp4-3.h"
#endif

#include "exp4-3Doc.h"
#include "exp4-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp43View

IMPLEMENT_DYNCREATE(Cexp43View, CView)

BEGIN_MESSAGE_MAP(Cexp43View, CView)
END_MESSAGE_MAP()

// Cexp43View 构造/析构

Cexp43View::Cexp43View()
{
	// TODO: 在此处添加构造代码

}

Cexp43View::~Cexp43View()
{
}

BOOL Cexp43View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp43View 绘制

void Cexp43View::OnDraw(CDC* /*pDC*/)
{
	Cexp43Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp43View 诊断

#ifdef _DEBUG
void Cexp43View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp43View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp43Doc* Cexp43View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp43Doc)));
	return (Cexp43Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp43View 消息处理程序
