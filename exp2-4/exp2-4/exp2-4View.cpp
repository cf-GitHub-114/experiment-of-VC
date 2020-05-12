
// exp2-4View.cpp : Cexp24View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp2-4.h"
#endif

#include "exp2-4Doc.h"
#include "exp2-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp24View

IMPLEMENT_DYNCREATE(Cexp24View, CView)

BEGIN_MESSAGE_MAP(Cexp24View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Cexp24View 构造/析构

Cexp24View::Cexp24View()
{
	// TODO: 在此处添加构造代码

}

Cexp24View::~Cexp24View()
{
}

BOOL Cexp24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp24View 绘制

void Cexp24View::OnDraw(CDC* /*pDC*/)
{
	Cexp24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// Cexp24View 打印

BOOL Cexp24View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void Cexp24View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void Cexp24View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// Cexp24View 诊断

#ifdef _DEBUG
void Cexp24View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp24Doc* Cexp24View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp24Doc)));
	return (Cexp24Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp24View 消息处理程序
