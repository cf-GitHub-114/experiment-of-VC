
// exp3-4View.cpp : Cexp34View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp3-4.h"
#endif

#include "exp3-4Doc.h"
#include "exp3-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp34View

IMPLEMENT_DYNCREATE(Cexp34View, CView)

BEGIN_MESSAGE_MAP(Cexp34View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp34View 构造/析构

Cexp34View::Cexp34View()
{
	// TODO: 在此处添加构造代码

}

Cexp34View::~Cexp34View()
{
}

BOOL Cexp34View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp34View 绘制

void Cexp34View::OnDraw(CDC* pDC)
{
	Cexp34Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	for (int i = 0;i < pDoc->ju.GetSize();i++) {
		pDC->Rectangle(pDoc->ju.GetAt(i));
	}
}


// Cexp34View 诊断

#ifdef _DEBUG
void Cexp34View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp34View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp34Doc* Cexp34View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp34Doc)));
	return (Cexp34Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp34View 消息处理程序


void Cexp34View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexp34Doc* pDoc = GetDocument();
	CClientDC dc(this);//定义一个CClientDC的对象dc		
	CString s1;
	if (point.x > 0 && point.x < 60 && point.y > 0 && point.y < 100) {//在矩形A中的情况
		s1.Format(_T("%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, s1);
	}               //pDoc->ju[1].PtInRect(point)和Doc->ju.GetAt(1).PtInRect(point)均不可用
	else if (point.x > 100 && point.x < 200 && point.y > 100 && point.y < 200) {//在矩形B中的情况
		s1.Format(_T("%d"), pDoc->b);
		dc.TextOutW(point.x, point.y, s1);
	}
	else if (point.x > 400 && point.x < 500 && point.y > 400 && point.y < 600) {//在矩形D中的情况
	    int count = ++pDoc->count;
		CString ss1;
		switch (count) {
		case 1:    //用‘1’不行
			ss1 = "+";
			dc.TextOutW(450, 410, ss1);
			break;
		case 2:
			ss1 = "-";
			dc.TextOutW(450, 430, ss1);
			break;
		case 3:
			ss1 = "*";
			dc.TextOutW(450, 450, ss1);
			break;
		case 4:
			ss1 = "/";
			dc.TextOutW(450, 470, ss1);
			break;
		}	
	}
	else {//不在矩形A、B、D中的情况
		s1 = "点击无效";
		dc.TextOutW(point.x, point.y, s1);
	}

	CView::OnLButtonDown(nFlags, point);
}


void Cexp34View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexp34Doc* pDoc = GetDocument();
	int c;
	CString ss2;
	CClientDC dc(this);
	if (point.x > 200 && point.x < 300 && point.y > 250 && point.y < 400) {//在矩形C中右键鼠标的情况	
		int count = pDoc->count;
		CString ss2;
		if (count == 1) {
			c = pDoc->a + pDoc->b;
			ss2.Format(_T("%d"), c);
			dc.TextOutW(point.x, point.y, ss2);
		}
		else if (count == 2) {
			c = pDoc->a - pDoc->b;
			ss2.Format(_T("%d"), c);
			dc.TextOutW(point.x, point.y, ss2);
		}
		else if (count == 3) {
			c = pDoc->a * pDoc->b;
			ss2.Format(_T("%d"), c);
			dc.TextOutW(point.x, point.y, ss2);
		}
		else if (count == 4) {
			c = pDoc->a / pDoc->b;
			ss2.Format(_T("%d"), c);
			dc.TextOutW(point.x, point.y, ss2);
		}
		else {     //若没有这个，当在矩形D内点击超过四次，在矩形C中右键无显示
			c = pDoc->a / pDoc->b;
			ss2.Format(_T("%d"), c);
			dc.TextOutW(point.x, point.y, ss2);
		}
	}

	CView::OnRButtonDown(nFlags, point);
}
