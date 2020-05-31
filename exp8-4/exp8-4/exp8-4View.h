
// exp8-4View.h : Cexp84View 类的接口
//

#pragma once


class Cexp84View : public CView
{
protected: // 仅从序列化创建
	Cexp84View();
	DECLARE_DYNCREATE(Cexp84View)

// 特性
public:
	Cexp84Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp84View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp8-4View.cpp 中的调试版本
inline Cexp84Doc* Cexp84View::GetDocument() const
   { return reinterpret_cast<Cexp84Doc*>(m_pDocument); }
#endif

