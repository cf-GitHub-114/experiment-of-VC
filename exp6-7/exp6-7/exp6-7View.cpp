
// exp6-7View.cpp : Cexp67View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp6-7.h"
#endif

#include "exp6-7Doc.h"
#include "exp6-7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp67View

IMPLEMENT_DYNCREATE(Cexp67View, CView)

BEGIN_MESSAGE_MAP(Cexp67View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// Cexp67View 构造/析构

Cexp67View::Cexp67View()
{
	// TODO: 在此处添加构造代码
	rect.left = 200;//初始化矩形
	rect.top = 100;
	rect.right = 800;
	rect.bottom = 200;
	s = "";//初始化字符串
	x = 201;//初始化输出字符串的横坐标
	y = 101;//初始化输出字符串的纵坐标
}

Cexp67View::~Cexp67View()
{
}

BOOL Cexp67View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp67View 绘制

void Cexp67View::OnDraw(CDC* pDC)
{
	Cexp67Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(rect);//画矩形
}


// Cexp67View 诊断

#ifdef _DEBUG
void Cexp67View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp67View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp67Doc* Cexp67View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp67Doc)));
	return (Cexp67Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp67View 消息处理程序


void Cexp67View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	s = s + (char)nChar;
	size = dc.GetTextExtent(s);//获取字符串的像素长度
	if (size.cx < 599 ) {//未需要换行
		dc.TextOutW(x, y, s);
		}
	else if (size.cx >= 599 && y < 150){//需要换行，且还在编辑器（矩形内）	
		size.cx = 0;//将字符串宽度置空
		s = (char)nChar;//将刚刚输入的字符加入字符串
		y += 20;//输出字符串的纵坐标增加
		dc.TextOutW(x, y, s);//输出字符串
	}
	
	CView::OnChar(nChar, nRepCnt, nFlags);
}
