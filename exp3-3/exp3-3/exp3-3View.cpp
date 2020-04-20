
// exp3-3View.cpp : Cexp33View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp3-3.h"
#endif

#include "exp3-3Doc.h"
#include "exp3-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp33View

IMPLEMENT_DYNCREATE(Cexp33View, CView)

BEGIN_MESSAGE_MAP(Cexp33View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp33View 构造/析构

Cexp33View::Cexp33View()
{
	// TODO: 在此处添加构造代码
}

Cexp33View::~Cexp33View()
{
}

BOOL Cexp33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp33View 绘制

void Cexp33View::OnDraw(CDC* pDC)
{
	Cexp33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(&pDoc->A);//在客户区画矩形A
	pDC->Rectangle(pDoc->B);//在客户区画矩形B
	pDC->Rectangle(pDoc->C);//在客户区画矩形C
}


// Cexp33View 诊断

#ifdef _DEBUG
void Cexp33View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp33Doc* Cexp33View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp33Doc)));
	return (Cexp33Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp33View 消息处理程序


void Cexp33View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexp33Doc* pDoc = GetDocument();
	CClientDC dc(this);//定义一个CClientDC的对象dc
		if (pDoc->A.PtInRect(point)){//在矩形A中的情况
            CString s1;
            s1.Format(_T("%d"), pDoc->a);
			dc.TextOutW(point.x, point.y, s1);
		}
		 else if(pDoc->B.PtInRect(point)) {//在矩形B中的情况
			CString s2;
			s2.Format(_T("%d"), pDoc->b);
			dc.TextOutW(point.x, point.y, s2);
		}
		 else {//不在矩形A、B中的情况
			 CString s3;
			 s3 = "点击无效";
			 dc.TextOutW(point.x, point.y, s3);
	}
	CView::OnLButtonDown(nFlags, point);
}


void Cexp33View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	Cexp33Doc* pDoc = GetDocument();
	int c;
	c = pDoc->a + pDoc->b;
	CClientDC dc(this);
		if (point.x > 300 && point.x < 400 && point.y > 300 && point.y < 500) {//在矩形B中右键鼠标的情况
			CString s4;
			s4.Format(_T("%d"),c);
			dc.TextOutW(point.x, point.y, s4);
	}
	CView::OnRButtonDown(nFlags, point);
}
