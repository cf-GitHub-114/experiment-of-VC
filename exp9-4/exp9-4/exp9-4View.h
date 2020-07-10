
// exp9-4View.h : Cexp94View 类的接口
//

#pragma once


class Cexp94View : public CView
{
protected: // 仅从序列化创建
	Cexp94View();
	DECLARE_DYNCREATE(Cexp94View)

// 特性
public:
	Cexp94Doc* GetDocument() const;
	CRect cr;
	CPoint mouse;//记录鼠标按下的时的坐标
	int flag;//标记鼠标状态，1为按下，0为弹起。

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp94View();
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

#ifndef _DEBUG  // exp9-4View.cpp 中的调试版本
inline Cexp94Doc* Cexp94View::GetDocument() const
   { return reinterpret_cast<Cexp94Doc*>(m_pDocument); }
#endif

