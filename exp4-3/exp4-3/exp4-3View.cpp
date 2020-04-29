
// exp4-3View.cpp : Cexp43View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp4-3.h"
#endif

#include "exp4-3Doc.h"
#include "exp4-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp43View

IMPLEMENT_DYNCREATE(Cexp43View, CView)

BEGIN_MESSAGE_MAP(Cexp43View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cexp43View 构造/析构

Cexp43View::Cexp43View()
{
	// TODO: 在此处添加构造代码
	flag = 0;//初始化flag标志
	A.left = 200;//构造矩形A（其实是正方形），如果构造成矩形，画出来应该是椭圆
	A.top = 0;
	A.right = 300;
	A.bottom = 100;
}

Cexp43View::~Cexp43View()
{
}

BOOL Cexp43View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp43View 绘制

void Cexp43View::OnDraw(CDC* pDC)
{
	Cexp43Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

		SetTimer(1,10,NULL);//设置定时器

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(A);//绘制圆形
}


// Cexp43View 诊断

#ifdef _DEBUG
void Cexp43View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp43View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp43Doc* Cexp43View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp43Doc)));
	return (Cexp43Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp43View 消息处理程序


void Cexp43View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect clientRect;
	GetClientRect(&clientRect);//获取客户区大小
	if(flag == 0 && A.bottom < (clientRect.bottom - clientRect.top)) {//未到客户区底部,且圆形处于下移状态
			A.top += 5;
			A.bottom += 5;
			if (A.bottom >= (clientRect.bottom - clientRect.top)) {//若执行A.bottom += 5;后圆形到达客户区底部
				flag = 1;//将圆形运动状态改为上移
			}
	}
	else if (flag == 1 && A.top > 0) {//未到客户区顶部，不需要上移，继续下移
			A.top -= 5;
			A.bottom -= 5;
			if (A.top <= 0) {//若执行A.top -= 5;后圆形到达客户区顶部
				flag = 0;//将圆形的运动状态置为下移
			}
		}
	Invalidate();
	
	CView::OnTimer(nIDEvent);
}
