
// exp6-1View.cpp : Cexp61View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp6-1.h"
#endif

#include "exp6-1Doc.h"
#include "exp6-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp61View

IMPLEMENT_DYNCREATE(Cexp61View, CView)

BEGIN_MESSAGE_MAP(Cexp61View, CView)
END_MESSAGE_MAP()

// Cexp61View 构造/析构

Cexp61View::Cexp61View()
{
	// TODO: 在此处添加构造代码

}

Cexp61View::~Cexp61View()
{
}

BOOL Cexp61View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp61View 绘制

void Cexp61View::OnDraw(CDC* /*pDC*/)
{
	Cexp61Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CFileDialog cfd(true);  //构造对话框对象
	int r = cfd.DoModal();  //弹出对话框
	CClientDC dc(this);
	if (r == IDOK) {//确定要退出对话框
		CString filename = cfd.GetPathName();
		dc.TextOutW(300, 200, filename);
	}
}


// Cexp61View 诊断

#ifdef _DEBUG
void Cexp61View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp61View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp61Doc* Cexp61View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp61Doc)));
	return (Cexp61Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp61View 消息处理程序
