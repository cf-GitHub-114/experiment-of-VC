
// exp7-5View.h : Cexp75View 类的接口
//

#pragma once


class Cexp75View : public CView
{
protected: // 仅从序列化创建
	Cexp75View();
	DECLARE_DYNCREATE(Cexp75View)

// 特性
public:
	Cexp75Doc* GetDocument() const;

// 操作
public:
	CRect rect;//定义一个画圆的矩形
	CRect cr;//定义一个装客户区大小的矩形
	bool set;//开关
	int r;//定义圆心的半径
	int flag;//定义标志圆形运动状态的标志
	int flagD;//定义标志鼠标左键点击的标志
	int flagDB;//定义一个鼠标左键双击的标志
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp75View();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // exp7-5View.cpp 中的调试版本
inline Cexp75Doc* Cexp75View::GetDocument() const
   { return reinterpret_cast<Cexp75Doc*>(m_pDocument); }
#endif

