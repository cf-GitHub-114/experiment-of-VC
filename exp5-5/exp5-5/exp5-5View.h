
// exp5-5View.h : Cexp55View 类的接口
//

#pragma once


class Cexp55View : public CView
{
protected: // 仅从序列化创建
	Cexp55View();
	DECLARE_DYNCREATE(Cexp55View)

// 特性
public:
	Cexp55Doc* GetDocument() const;
	int downPointX, downPointY, upPointX, upPointY;//定义点击鼠标和释放鼠标时坐标的整型变量

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp55View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewDrawline();
	afx_msg void OnViewDrawrectangle();
	afx_msg void OnViewDrawellipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp5-5View.cpp 中的调试版本
inline Cexp55Doc* Cexp55View::GetDocument() const
   { return reinterpret_cast<Cexp55Doc*>(m_pDocument); }
#endif

