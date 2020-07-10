
// 啦啦啦啦View.cpp : C啦啦啦啦View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "啦啦啦啦.h"
#endif

#include "啦啦啦啦Doc.h"
#include "啦啦啦啦View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C啦啦啦啦View

IMPLEMENT_DYNCREATE(C啦啦啦啦View, CView)

BEGIN_MESSAGE_MAP(C啦啦啦啦View, CView)
END_MESSAGE_MAP()

// C啦啦啦啦View 构造/析构

C啦啦啦啦View::C啦啦啦啦View()
{
	// TODO: 在此处添加构造代码

}

C啦啦啦啦View::~C啦啦啦啦View()
{
}

BOOL C啦啦啦啦View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C啦啦啦啦View 绘制

void C啦啦啦啦View::OnDraw(CDC* /*pDC*/)
{
	C啦啦啦啦Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// C啦啦啦啦View 诊断

#ifdef _DEBUG
void C啦啦啦啦View::AssertValid() const
{
	CView::AssertValid();
}

void C啦啦啦啦View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C啦啦啦啦Doc* C啦啦啦啦View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C啦啦啦啦Doc)));
	return (C啦啦啦啦Doc*)m_pDocument;
}
#endif //_DEBUG


// C啦啦啦啦View 消息处理程序
