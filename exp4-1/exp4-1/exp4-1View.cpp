
// exp4-1View.cpp : Cexp41View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp4-1.h"
#endif

#include "exp4-1Doc.h"
#include "exp4-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp41View

IMPLEMENT_DYNCREATE(Cexp41View, CView)

BEGIN_MESSAGE_MAP(Cexp41View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cexp41View 构造/析构

Cexp41View::Cexp41View()
{
	// TODO: 在此处添加构造代码
	count1 = 0;//初始化变量
	count2 = 0;//初始化变量
	flag = 0;//初始化变量
}

Cexp41View::~Cexp41View()
{
}

BOOL Cexp41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp41View 绘制

void Cexp41View::OnDraw(CDC* pDC)
{
	Cexp41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码	
}


// Cexp41View 诊断

#ifdef _DEBUG
void Cexp41View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp41Doc* Cexp41View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp41Doc)));
	return (Cexp41Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp41View 消息处理程序


void Cexp41View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	flag = 1;//标志鼠标左键按下
	downPoint = point;//获取鼠标左键点击时的坐标

	CView::OnLButtonDown(nFlags, point);
}


void Cexp41View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	upPoint = point;
	CClientDC dc(this);
	CString s1,s2;
	
/*检验所的数据是否正确
	CString upPiontX, upPiontY, downPiontX, downPiontY;
	downPiontX.Format(_T("%d"), downPoint.x);
	downPiontY.Format(_T("%d"), downPoint.y);
    upPiontX.Format(_T("%d"), upPoint.x);
	upPiontY.Format(_T("%d"), upPoint.y);
//输出鼠标左键按下时的坐标
	dc.TextOutW(0, 0, downPiontX);
	dc.TextOutW(100, 0, downPiontY);
//输出鼠标左键释放时的坐标
	dc.TextOutW(0, 20, upPiontX);
	dc.TextOutW(100, 20, upPiontY);
//输出鼠标横向移动的像素
	CString s,ss;
	s = "鼠标横向移动的像素：";
	double count = fabs(upPoint.x - downPoint.x);
	ss.Format(_T("%lf"), count);
	dc.TextOutW(0, 50, s+ss);
*/
	double count = fabs(upPoint.x - downPoint.x);
    count2 = count/count1;//强制转换数据类型
	s1.Format(_T("%d"), count1);
	s2.Format(_T("%lf"),count2);
	dc.TextOutW(200, 300, s1);
	dc.TextOutW(200, 300, s1);
	CString ss1, ss2;
	ss1 = "鼠标移动次数：";
	ss2 = "鼠标横向移动多少个像素发生一次：";
    dc.TextOutW(200,300,ss1+s1);//显示鼠标移动次数
	dc.TextOutW(200,400,ss2+s2);//显示鼠标横向移动多少个像素发生一次

	CView::OnLButtonUp(nFlags, point);
}


void Cexp41View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag) {//当鼠标左键按下时
		count1++;//不断累积鼠标移动的次数         
	}
	
	

	CView::OnMouseMove(nFlags, point);
}
