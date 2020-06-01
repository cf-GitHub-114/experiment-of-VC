
// exp8-5View.h : Cexp85View 类的接口
//

#pragma once


class Cexp85View : public CView
{
protected: // 仅从序列化创建
	Cexp85View();
	DECLARE_DYNCREATE(Cexp85View)

// 特性
public:
	Cexp85Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp85View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp8-5View.cpp 中的调试版本
inline Cexp85Doc* Cexp85View::GetDocument() const
   { return reinterpret_cast<Cexp85Doc*>(m_pDocument); }
#endif

