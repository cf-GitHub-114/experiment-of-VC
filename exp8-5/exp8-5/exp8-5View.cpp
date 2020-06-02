
// exp8-5View.cpp : Cexp85View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp8-5.h"
#endif

#include "exp8-5Doc.h"
#include "exp8-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp85View

IMPLEMENT_DYNCREATE(Cexp85View, CView)

BEGIN_MESSAGE_MAP(Cexp85View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp85View 构造/析构

Cexp85View::Cexp85View()
{
	// TODO: 在此处添加构造代码
	rect.left = 100;
	rect.top = 100;
	rect.right = 300;
	rect.bottom = 400;
}

Cexp85View::~Cexp85View()
{
}

BOOL Cexp85View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp85View 绘制

void Cexp85View::OnDraw(CDC* pDC)
{
	Cexp85Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(rect);//画椭圆
}


// Cexp85View 诊断

#ifdef _DEBUG
void Cexp85View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp85View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp85Doc* Cexp85View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp85Doc)));
	return (Cexp85Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp85View 消息处理程序


void Cexp85View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	CRgn rgnB;
	rgnB.CreateEllipticRgn(100, 100, 300, 400);
	BOOL flag = rgnB.PtInRegion(point);
	if (flag) {//点在椭圆内
		CPen newPen(PS_DASH, 1, RGB(255,0,0));//构造新笔newPen(PS_DASH虚线, 1线宽, RGB(255,0,0)颜色)
		CPen *pOldPen = dc.SelectObject(&newPen);//将新构造的笔和设备环境类联系起来
		dc.MoveTo(100,100);
		dc.LineTo(300,100);
		dc.LineTo(300, 400);
		dc.LineTo(100, 400);
		dc.LineTo(100, 100);
		dc.SelectObject(pOldPen);//将旧笔选入设备环境
	}
	else//点不在椭圆内
		;

	CView::OnLButtonDown(nFlags, point);
}
