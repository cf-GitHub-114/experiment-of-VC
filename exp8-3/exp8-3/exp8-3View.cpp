
// exp8-3View.cpp : Cexp83View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp8-3.h"
#endif

#include "exp8-3Doc.h"
#include "exp8-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp83View

IMPLEMENT_DYNCREATE(Cexp83View, CView)

BEGIN_MESSAGE_MAP(Cexp83View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Cexp83View 构造/析构

Cexp83View::Cexp83View()
{
	// TODO: 在此处添加构造代码
	ca.SetSize(256);//分配256个空间
	flag = 0;//初始化鼠标左键点击的标志
}

Cexp83View::~Cexp83View()
{
}

BOOL Cexp83View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp83View 绘制

void Cexp83View::OnDraw(CDC* pDC)
{
	Cexp83Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0;i < ca.GetSize();i++) {
		pDC->Ellipse(ca.GetAt(i));//画数组中的椭圆	
	}
	if (flag) {//鼠标左键点击，未释放
		pDC->Ellipse(rect);
	}
}


// Cexp83View 诊断

#ifdef _DEBUG
void Cexp83View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp83View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp83Doc* Cexp83View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp83Doc)));
	return (Cexp83Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp83View 消息处理程序


void Cexp83View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 1;	//鼠标左键点击
    downX = point.x;
	downY = point.y;
	CView::OnLButtonDown(nFlags, point);
}


void Cexp83View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	if (flag) {//鼠标左键点击
		rect.left = downX;
	    rect.top = downY;
	    rect.right = point.x;
	    rect.bottom = point.y;	
        Invalidate();//强制重绘
	}
	CView::OnMouseMove(nFlags, point);
}


void Cexp83View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 0;
	CRect cr(downX, downY, point.x, point.y);
	ca.Add(cr);//将矩形添加到数组中	

	CView::OnLButtonUp(nFlags, point);
}
