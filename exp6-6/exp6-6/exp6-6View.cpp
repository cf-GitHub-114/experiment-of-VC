
// exp6-6View.cpp : Cexp66View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp6-6.h"
#endif

#include "exp6-6Doc.h"
#include "exp6-6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp66View

IMPLEMENT_DYNCREATE(Cexp66View, CView)

BEGIN_MESSAGE_MAP(Cexp66View, CView)
END_MESSAGE_MAP()

// Cexp66View 构造/析构

Cexp66View::Cexp66View()
{
	// TODO: 在此处添加构造代码

}

Cexp66View::~Cexp66View()
{
}

BOOL Cexp66View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp66View 绘制

void Cexp66View::OnDraw(CDC* /*pDC*/)
{
	Cexp66Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp66View 诊断

#ifdef _DEBUG
void Cexp66View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp66View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp66Doc* Cexp66View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp66Doc)));
	return (Cexp66Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp66View 消息处理程序
