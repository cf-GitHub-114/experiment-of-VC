
// exp8-3View.h : Cexp83View 类的接口
//

#pragma once


class Cexp83View : public CView
{
protected: // 仅从序列化创建
	Cexp83View();
	DECLARE_DYNCREATE(Cexp83View)

// 特性
public:
	Cexp83Doc* GetDocument() const;

// 操作
public:
	CArray<CRect,CRect>ca;//定义以矩形为元素的数组
	int downX, downY;//定义装鼠标左键点击时坐标的变量
	int flag;//定义标志鼠标左键点击的标志
	CRect rect;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp83View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp8-3View.cpp 中的调试版本
inline Cexp83Doc* Cexp83View::GetDocument() const
   { return reinterpret_cast<Cexp83Doc*>(m_pDocument); }
#endif

