
// exp1-2View.cpp : Cexp12View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp1-2.h"
#endif

#include "exp1-2Doc.h"
#include "exp1-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp12View

IMPLEMENT_DYNCREATE(Cexp12View, CView)

BEGIN_MESSAGE_MAP(Cexp12View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp12View 构造/析构

Cexp12View::Cexp12View()
{
	// TODO: 在此处添加构造代码

}

Cexp12View::~Cexp12View()
{
}

BOOL Cexp12View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp12View 绘制

void Cexp12View::OnDraw(CDC* /*pDC*/)
{
	Cexp12Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp12View 诊断

#ifdef _DEBUG
void Cexp12View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp12View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp12Doc* Cexp12View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp12Doc)));
	return (Cexp12Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp12View 消息处理程序


void Cexp12View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexp12Doc* pDoc = GetDocument();//因要调用另一个类Doc类中的数据成员，在Ondraw中copy过来
	//ASSERT_VALID(pDoc);//经编译运行，可无
	pDoc->count++;  //使每点击一下鼠标，count值加一
	CView::OnLButtonDown(nFlags, point);
}


void Cexp12View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexp12Doc* pDoc = GetDocument();//因要调用另一个类Doc类中的数据成员，在Ondraw中copy过来
	//ASSERT_VALID(pDoc);
	int a = pDoc->count;//定义一个整型变量获取Doc中的count值
	CString s; //定义一个字符串s
	s.Format(_T("%d"), a);//将整型数据a转化为字符串并赋给s
	CClientDC dc(this);//定义一个CClientDC的对象dc
	dc.TextOutW(600, 300, s);//输出字符串s
	CView::OnRButtonDown(nFlags, point);
}
