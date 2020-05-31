
// exp8-4View.cpp : Cexp84View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp8-4.h"
#endif

#include "exp8-4Doc.h"
#include "exp8-4View.h"
#include "MyDlg05.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp84View

IMPLEMENT_DYNCREATE(Cexp84View, CView)

BEGIN_MESSAGE_MAP(Cexp84View, CView)
	ON_COMMAND(ID_DRAWELLIPSE, &Cexp84View::OnDrawellipse)
END_MESSAGE_MAP()

// Cexp84View 构造/析构

Cexp84View::Cexp84View()
{
	// TODO: 在此处添加构造代码

}

Cexp84View::~Cexp84View()
{
}

BOOL Cexp84View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp84View 绘制

void Cexp84View::OnDraw(CDC* pDC)
{
	Cexp84Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(rect);
}


// Cexp84View 诊断

#ifdef _DEBUG
void Cexp84View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp84View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp84Doc* Cexp84View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp84Doc)));
	return (Cexp84Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp84View 消息处理程序


void Cexp84View::OnDrawellipse()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg05 dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		this->UpdateData(true);//将前台数据传到后台
		rect.left = dlg.left;
		rect.top = dlg.top;
		rect.right = dlg.right;
		rect.bottom = dlg.bottom;
		Invalidate();//强制重绘
	}
}
