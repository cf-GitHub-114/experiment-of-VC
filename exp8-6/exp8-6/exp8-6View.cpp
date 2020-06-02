
// exp8-6View.cpp : Cexp86View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp8-6.h"
#endif

#include "exp8-6Doc.h"
#include "exp8-6View.h"
#include "MyDlg07.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp86View

IMPLEMENT_DYNCREATE(Cexp86View, CView)

BEGIN_MESSAGE_MAP(Cexp86View, CView)
	ON_COMMAND(ID_COLORFULELLIPSE, &Cexp86View::OnColorfulellipse)
END_MESSAGE_MAP()

// Cexp86View 构造/析构

Cexp86View::Cexp86View()
{
	// TODO: 在此处添加构造代码
	rect.left = 100;
	rect.top = 100;
	rect.right = 300;
	rect.bottom = 400;
}

Cexp86View::~Cexp86View()
{
}

BOOL Cexp86View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp86View 绘制

void Cexp86View::OnDraw(CDC* pDC)
{
	Cexp86Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(rect);
}


// Cexp86View 诊断

#ifdef _DEBUG
void Cexp86View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp86View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp86Doc* Cexp86View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp86Doc)));
	return (Cexp86Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp86View 消息处理程序


void Cexp86View::OnColorfulellipse()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg07 dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		CClientDC dc(this);//声明一复个制CDC对象
		CBrush m_brush;//申明一个格度式刷对知象
		this->UpdateData(true);//将前台数据传到后台
		//m_brush.CreateSolidBrush(RGB(dlg.red, dlg.green,dlg.blue));//设置颜色道
		CBrush brush(RGB(dlg.red, dlg.green, dlg.blue));//根据自己需要填充颜色
		CBrush *oldbrush;
		oldbrush = dc.SelectObject(&brush);//选新的画刷
		dc.Ellipse(rect);
		dc.SelectObject(oldbrush);//将原来的画刷选回去 
	}
}
