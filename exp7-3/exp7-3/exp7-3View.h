
// exp7-3View.h : Cexp73View 类的接口
//

#pragma once


class Cexp73View : public CView
{
protected: // 仅从序列化创建
	Cexp73View();
	DECLARE_DYNCREATE(Cexp73View)

// 特性
public:
	Cexp73Doc* GetDocument() const;

// 操作
public:
	int downX, downY;//定义变量用于存放鼠标左键点击时的坐标
	int moveX, moveY;//记录鼠标左键点击到释放移动的距离
	CRect rect;//定义一个矩形
	int flag;//定义一个标志鼠标左键点击的标志
	int left, top, right, bottom;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp73View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp7-3View.cpp 中的调试版本
inline Cexp73Doc* Cexp73View::GetDocument() const
   { return reinterpret_cast<Cexp73Doc*>(m_pDocument); }
#endif

