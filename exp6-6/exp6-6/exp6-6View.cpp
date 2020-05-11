
// exp6-6View.cpp : Cexp66View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "exp6-6.h"
#endif

#include "exp6-6Doc.h"
#include "exp6-6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp66View

IMPLEMENT_DYNCREATE(Cexp66View, CView)

BEGIN_MESSAGE_MAP(Cexp66View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp66View 构造/析构

Cexp66View::Cexp66View()
{
	// TODO: 在此处添加构造代码
	rect.left = 200;//初始化矩形
	rect.top = 300;
	rect.right = 800;
	rect.bottom = 350;
	s = "";//初始化字符串
	flag = 0;//初始化左键点击的标志
	count = 0;//初始化字符个数的变量
	frontCount = 0;//初始化前半段字符个数的变量
}

Cexp66View::~Cexp66View()
{
}

BOOL Cexp66View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cexp66View 绘制

void Cexp66View::OnDraw(CDC* pDC)
{
	Cexp66Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(rect);//画矩形
}


// Cexp66View 诊断

#ifdef _DEBUG
void Cexp66View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp66View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp66Doc* Cexp66View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp66Doc)));
	return (Cexp66Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp66View 消息处理程序


void Cexp66View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	if(!flag){//鼠标未左键点击，显示输入字符形成字符串
		count += 1;//字符个数加一
		s = s + (char)nChar;
	   size = dc.GetTextExtent(s);//获取字符串的像素长度
	   if (size.cx < 599) {
		   dc.TextOutW(201, 301, s);
	   }
	}
	else {//鼠标左键点击，向字符串中插入一个字符
		frontCount = count*(downX - 201) / size.cx;//求字符串前半段的字符个数count*((downX-201)/size.cx)
		stringFront = s.Left(frontCount);//获取前半段字符串
		/*CString ss;
		ss.Format(_T("%d"), frontCount);
		dc.TextOutW(0, 0, ss);//输出字符串前半段字符个数
		dc.TextOutW(0, 20, stringFront);//输出字符串前半段字符
		*/
		//求字符串后半段的字符个数count-frontCount
		stringBack = s.Right(count - frontCount);//获取后半段字符串
		//dc.TextOutW(0, 40, stringBack);//输出字符串后半段字符
		s = stringFront + (char)nChar + stringBack;
		dc.TextOutW(201, 301, s);//将插入字符后的字符串输出
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void Cexp66View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	downX = point.x;//获取鼠标左键时的坐标
	flag = 1;//标志鼠标左键按下
	CView::OnLButtonDown(nFlags, point);
}
