
// exp5-4View.cpp : Cexp54View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp5-4.h"
#endif

#include "exp5-4Doc.h"
#include "exp5-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp54View

IMPLEMENT_DYNCREATE(Cexp54View, CView)

BEGIN_MESSAGE_MAP(Cexp54View, CView)
END_MESSAGE_MAP()

// Cexp54View 构造/析构

Cexp54View::Cexp54View()
{
	// TODO: 在此处添加构造代码

}

Cexp54View::~Cexp54View()
{
}

BOOL Cexp54View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp54View 绘制

void Cexp54View::OnDraw(CDC* /*pDC*/)
{
	Cexp54Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp54View 诊断

#ifdef _DEBUG
void Cexp54View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp54View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp54Doc* Cexp54View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp54Doc)));
	return (Cexp54Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp54View 消息处理程序
