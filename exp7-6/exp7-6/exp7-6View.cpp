
// exp7-6View.cpp : Cexp76View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp7-6.h"
#endif

#include "exp7-6Doc.h"
#include "exp7-6View.h"
#include "MyDlg03.h"//添加对话框的头文件

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp76View

IMPLEMENT_DYNCREATE(Cexp76View, CView)

BEGIN_MESSAGE_MAP(Cexp76View, CView)
	ON_BN_CLICKED(IDC_BUTTON1, &Cexp76View::OnBnClickedButton1)
END_MESSAGE_MAP()

// Cexp76View 构造/析构

Cexp76View::Cexp76View()
{
	// TODO: 在此处添加构造代码

}

Cexp76View::~Cexp76View()
{
}

BOOL Cexp76View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp76View 绘制

void Cexp76View::OnDraw(CDC* /*pDC*/)
{
	Cexp76Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	MyDlg03 dlg;//构造对话框对象
	int r = dlg.DoModal();//调用函数，弹出模式对话框
}


// Cexp76View 诊断

#ifdef _DEBUG
void Cexp76View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp76View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp76Doc* Cexp76View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp76Doc)));
	return (Cexp76Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp76View 消息处理程序


void Cexp76View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

}
