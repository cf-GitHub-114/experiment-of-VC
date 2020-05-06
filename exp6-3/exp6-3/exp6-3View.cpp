
// exp6-3View.cpp : Cexp63View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp6-3.h"
#endif

#include "exp6-3Doc.h"
#include "exp6-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp63View

IMPLEMENT_DYNCREATE(Cexp63View, CView)

BEGIN_MESSAGE_MAP(Cexp63View, CView)
END_MESSAGE_MAP()

// Cexp63View 构造/析构

Cexp63View::Cexp63View()
{
	// TODO: 在此处添加构造代码

}

Cexp63View::~Cexp63View()
{
}

BOOL Cexp63View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp63View 绘制

void Cexp63View::OnDraw(CDC* /*pDC*/)
{
	Cexp63Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp63View 诊断

#ifdef _DEBUG
void Cexp63View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp63View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp63Doc* Cexp63View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp63Doc)));
	return (Cexp63Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp63View 消息处理程序
