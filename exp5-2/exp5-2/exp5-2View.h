
// exp5-2View.h : Cexp52View 类的接口
//

#pragma once


class Cexp52View : public CView
{
protected: // 仅从序列化创建
	Cexp52View();
	DECLARE_DYNCREATE(Cexp52View)

// 特性
public:
	Cexp52Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp52View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp5-2View.cpp 中的调试版本
inline Cexp52Doc* Cexp52View::GetDocument() const
   { return reinterpret_cast<Cexp52Doc*>(m_pDocument); }
#endif

