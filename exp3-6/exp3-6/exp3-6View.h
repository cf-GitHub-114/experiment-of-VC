
// exp3-6View.h : Cexp36View 类的接口
//

#pragma once


class Cexp36View : public CView
{
protected: // 仅从序列化创建
	Cexp36View();
	DECLARE_DYNCREATE(Cexp36View)

// 特性
public:
	Cexp36Doc* GetDocument() const;
	CArray<CRect,CRect>ca;//定义元素为矩形的数组
	int downX;//鼠标左键的横坐标
	int downY;//鼠标左键的纵坐标
	int width;//矩形的宽度
	int height;//矩形的高度
// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp36View();
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
};

#ifndef _DEBUG  // exp3-6View.cpp 中的调试版本
inline Cexp36Doc* Cexp36View::GetDocument() const
   { return reinterpret_cast<Cexp36Doc*>(m_pDocument); }
#endif

