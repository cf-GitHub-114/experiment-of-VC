
// exp1-1View.cpp : Cexp11View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp1-1.h"
#endif

#include "exp1-1Doc.h"
#include "exp1-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp11View

IMPLEMENT_DYNCREATE(Cexp11View, CView)

BEGIN_MESSAGE_MAP(Cexp11View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp11View 构造/析构

Cexp11View::Cexp11View()
{
	// TODO: 在此处添加构造代码

}

Cexp11View::~Cexp11View()
{
}

BOOL Cexp11View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp11View 绘制

void Cexp11View::OnDraw(CDC* pDC)
{
	Cexp11Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp11View 诊断

#ifdef _DEBUG
void Cexp11View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp11View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp11Doc* Cexp11View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp11Doc)));
	return (Cexp11Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp11View 消息处理程序


void Cexp11View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexp11Doc* pDoc = GetDocument();//要调用Doc类中的成员，所以从Ondraw函数中copy过来
	CClientDC dc(this);	//定义一个CClientDC的对象dc，画图必用到CDC类对象（因在设备环境中）
	dc.TextOutW(200, 200, pDoc->s);//输出Doc类中定义的字符串

	CView::OnLButtonDown(nFlags, point);
}
