
// exp2-1View.cpp : Cexp21View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp2-1.h"
#endif

#include "exp2-1Doc.h"
#include "exp2-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp21View

IMPLEMENT_DYNCREATE(Cexp21View, CView)

BEGIN_MESSAGE_MAP(Cexp21View, CView)
END_MESSAGE_MAP()

// Cexp21View 构造/析构

Cexp21View::Cexp21View()
{
	// TODO: 在此处添加构造代码

}

Cexp21View::~Cexp21View()
{
}

BOOL Cexp21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp21View 绘制

void Cexp21View::OnDraw(CDC* pDC)
{
	Cexp21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;     //声明字符串s
	s = "我是学生";   //初始化字符串s
	int A;    //声明整型数据A
	A = 123;   //初始化整型数据A
	pDC->TextOut(200, 200, s);//输出字符串s
	CString s1;//定义一个字符串s1，用来输出整型数据A
	s1.Format(_T("%d"),A);//将整型数据转换为CString字符串
	pDC->TextOut(200, 300, s1);//将字符串输出
}


// Cexp21View 诊断

#ifdef _DEBUG
void Cexp21View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp21Doc* Cexp21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp21Doc)));
	return (Cexp21Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp21View 消息处理程序
