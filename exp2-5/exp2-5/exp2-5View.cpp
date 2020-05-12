
// exp2-5View.cpp : Cexp25View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp2-5.h"
#endif

#include "exp2-5Doc.h"
#include "exp2-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp25View

IMPLEMENT_DYNCREATE(Cexp25View, CView)

BEGIN_MESSAGE_MAP(Cexp25View, CView)
END_MESSAGE_MAP()

// Cexp25View 构造/析构

Cexp25View::Cexp25View()
{
	// TODO: 在此处添加构造代码

}

Cexp25View::~Cexp25View()
{
}

BOOL Cexp25View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp25View 绘制

void Cexp25View::OnDraw(CDC* /*pDC*/)
{
	Cexp25Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp25View 诊断

#ifdef _DEBUG
void Cexp25View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp25View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp25Doc* Cexp25View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp25Doc)));
	return (Cexp25Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp25View 消息处理程序
