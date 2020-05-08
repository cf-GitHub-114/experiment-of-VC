
// exp6-5View.cpp : Cexp65View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp6-5.h"
#endif

#include "exp6-5Doc.h"
#include "exp6-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp65View

IMPLEMENT_DYNCREATE(Cexp65View, CView)

BEGIN_MESSAGE_MAP(Cexp65View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// Cexp65View 构造/析构

Cexp65View::Cexp65View()
{
	// TODO: 在此处添加构造代码
	s = "";
	rect.left = 200,
	rect.top = 300;
	rect.right = 800;
	rect.bottom = 350;
}

Cexp65View::~Cexp65View()
{
}

BOOL Cexp65View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp65View 绘制

void Cexp65View::OnDraw(CDC* pDC)
{
	Cexp65Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(rect);
}


// Cexp65View 诊断

#ifdef _DEBUG
void Cexp65View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp65View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp65Doc* Cexp65View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp65Doc)));
	return (Cexp65Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp65View 消息处理程序


void Cexp65View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	s = s+(char)nChar;
	CSize txtpot;
	txtpot = dc.GetTextExtent(s);
	if(txtpot.cx <= 598){    //txtpot.cx为字符串s的像素长度
		dc.TextOutW( 201,310, s);
		
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}
