
// exp5-2View.cpp : Cexp52View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp5-2.h"
#endif

#include "exp5-2Doc.h"
#include "exp5-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp52View

IMPLEMENT_DYNCREATE(Cexp52View, CView)

BEGIN_MESSAGE_MAP(Cexp52View, CView)
	ON_COMMAND(ID_VIEW_SHOWCOLORELLIPSE, &Cexp52View::OnViewShowcolorellipse)
END_MESSAGE_MAP()

// Cexp52View 构造/析构

Cexp52View::Cexp52View()
{
	// TODO: 在此处添加构造代码

}

Cexp52View::~Cexp52View()
{
}

BOOL Cexp52View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp52View 绘制

void Cexp52View::OnDraw(CDC* /*pDC*/)
{
	Cexp52Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp52View 诊断

#ifdef _DEBUG
void Cexp52View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp52View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp52Doc* Cexp52View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp52Doc)));
	return (Cexp52Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp52View 消息处理程序


void Cexp52View::OnViewShowcolorellipse()
{
	// TODO: 在此添加命令处理程序代码
	int red = 0, green = 255, blue = 0;
	int width = 2;
	CClientDC dc(this);//定义一个CClientDC的对象dc
	CRect rc;//定义一个矩形对象
	GetClientRect(&rc);//获取客户区大小
	int r = 100;//定义一个整型变量r,为圆形的半径
	int x = (rc.left + rc.right) / 2;//获取客户区中点
	int y = (rc.top + rc.bottom) / 2;
	for (int i = 0;i < 10;i++) {
		int color = RGB(red,green,blue);//构造颜色
		CPen newPen(PS_SOLID,width,color);//构造新笔
		CPen *oldPen = dc.SelectObject(&newPen);//将新构造的笔和设备环境类联系起来
		r -= 10;//先画大的圆，若先画小的圆，会被后面的大圆挡住
		CRect A(x - r, y - r, x + r, y + r);
		dc.Ellipse(A);
		dc.SelectObject(oldPen);//将旧笔选入设备环境
		red += 20;
		green  -= 20;
		blue += 20;
	}
}
