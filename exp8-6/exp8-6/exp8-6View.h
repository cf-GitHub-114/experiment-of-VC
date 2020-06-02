
// exp8-6View.h : Cexp86View 类的接口
//

#pragma once


class Cexp86View : public CView
{
protected: // 仅从序列化创建
	Cexp86View();
	DECLARE_DYNCREATE(Cexp86View)

// 特性
public:
	Cexp86Doc* GetDocument() const;

// 操作
public:
	CRect rect;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp86View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnColorfulellipse();
};

#ifndef _DEBUG  // exp8-6View.cpp 中的调试版本
inline Cexp86Doc* Cexp86View::GetDocument() const
   { return reinterpret_cast<Cexp86Doc*>(m_pDocument); }
#endif

