
// exp8-1View.cpp : Cexp81View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp8-1.h"
#endif

#include "exp8-1Doc.h"
#include "exp8-1View.h"
#include "MyDlg04.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp81View

IMPLEMENT_DYNCREATE(Cexp81View, CView)

BEGIN_MESSAGE_MAP(Cexp81View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_SHOWFILENAME, &Cexp81View::OnShowfilename)
END_MESSAGE_MAP()

// Cexp81View 构造/析构

Cexp81View::Cexp81View()
{
	// TODO: 在此处添加构造代码
	flag = 0;//初始化标志
}

Cexp81View::~Cexp81View()
{
}

BOOL Cexp81View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp81View 绘制

void Cexp81View::OnDraw(CDC* /*pDC*/)
{
	Cexp81Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp81View 诊断

#ifdef _DEBUG
void Cexp81View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp81View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp81Doc* Cexp81View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp81Doc)));
	return (Cexp81Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp81View 消息处理程序


void Cexp81View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true);//构造对话框
	int r = cfd.DoModal();//弹出模式对话框
	CClientDC dc(this);
	if (r == IDOK) {//确定退出对话框
		filename = cfd.GetPathName();
		flag = 1;
		dc.TextOutW(200, 300, filename);
	}

	CView::OnLButtonDblClk(nFlags, point);
}


void Cexp81View::OnShowfilename()
{
	// TODO: 在此添加命令处理程序代码
	if (flag == 1) {
		MyDlg04 dlg;
	    dlg.showname = filename;//先传数据再弹出对话框
	    int t = dlg.DoModal();
	    UpdateData(false);//将后台数据传到前台
	}
}
