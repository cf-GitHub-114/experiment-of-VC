
// exp7-5View.cpp : Cexp75View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp7-5.h"
#endif

#include "exp7-5Doc.h"
#include "exp7-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp75View

IMPLEMENT_DYNCREATE(Cexp75View, CView)

BEGIN_MESSAGE_MAP(Cexp75View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cexp75View 构造/析构

Cexp75View::Cexp75View()
{
	// TODO: 在此处添加构造代码
	set = 1;
	r = 50;//初始化圆心的半径
	flag = 0;//初始化圆形运动状态为右移
	flagD = 0;
	flagDB = 0;
}

Cexp75View::~Cexp75View()
{
}

BOOL Cexp75View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp75View 绘制

void Cexp75View::OnDraw(CDC* pDC)
{
	Cexp75Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (set) {
		SetTimer(1, 10, NULL);//设置定时器
		set = false;
	}

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(rect);//画圆
}


// Cexp75View 诊断

#ifdef _DEBUG
void Cexp75View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp75View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp75Doc* Cexp75View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp75Doc)));
	return (Cexp75Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp75View 消息处理程序


void Cexp75View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flagD = 1;
	flagDB = 0;
	CView::OnLButtonDown(nFlags, point);
}


void Cexp75View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flagDB = 1;
	flagD = 0;
	CView::OnLButtonDblClk(nFlags, point);
}


void Cexp75View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	GetClientRect(&cr);//获取客户区信息	
	CClientDC dc(this);
	if (flag == 0) {//圆形处于右移状态的条件下
		if (flagD == 1) {//鼠标左键点击
			if (rect.right < (cr.right - cr.left)) {//圆形未到达客户区右端
				rect.left++;
				rect.right++;
				Invalidate();//强制重绘
			}
			else {//圆形到达客户区右端
				flag = 1;//将运动状态置为向左
			}
		}
		else if (flagDB == 1) {//鼠标左键双击，圆形不运动
			//dc.Ellipse(rect);
		}
		else {//若左键未单击或双击，则圆形不动，保持在初始位置
			rect.left = 0;
		    rect.right = 2 * r;//用2r报错
		    rect.top = (cr.top + cr.bottom) / 2 - r;
		    rect.bottom = (cr.top + cr.bottom) / 2 + r;
		    //若直接用Invalidate（），一直在重绘该圆形	   
		   dc.Ellipse(rect);
		}
	}
	else{//圆形处于左移状态
		if (flagD == 1) {//鼠标左键点击
			if (rect.left > 0) {//未到达客户区左端
				rect.left--;
				rect.right--;
				Invalidate();
			}
			else {//到达客户区左端
				flag = 0;//将运动状态置为向右
			}
		}
		else if (flagDB == 1) {//鼠标左键双击，圆形不运动
			//dc.Ellipse(rect);
		}
	}
	CView::OnTimer(nIDEvent);
}
