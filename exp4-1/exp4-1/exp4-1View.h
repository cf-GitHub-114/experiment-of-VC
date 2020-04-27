
// exp4-1View.h : Cexp41View 类的接口
//

#pragma once


class Cexp41View : public CView
{
protected: // 仅从序列化创建
	Cexp41View();
	DECLARE_DYNCREATE(Cexp41View)

// 特性
public:
	Cexp41Doc* GetDocument() const;
	int count1;//定义一个整型变量count记录鼠标移动次数
	double count2;//定义一个整型变量count记录鼠标移动次数
	int flag; // 定义一个整型变量标志鼠标左键按下
	CPoint downPoint;//定义鼠标按下时的坐标
	CPoint upPoint;//定义鼠标按下时的坐标

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp41View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp4-1View.cpp 中的调试版本
inline Cexp41Doc* Cexp41View::GetDocument() const
   { return reinterpret_cast<Cexp41Doc*>(m_pDocument); }
#endif

