
// exp7-4View.h : Cexp74View 类的接口
//

#pragma once


class Cexp74View : public CView
{
protected: // 仅从序列化创建
	Cexp74View();
	DECLARE_DYNCREATE(Cexp74View)

// 特性
public:
	Cexp74Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp74View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp7-4View.cpp 中的调试版本
inline Cexp74Doc* Cexp74View::GetDocument() const
   { return reinterpret_cast<Cexp74Doc*>(m_pDocument); }
#endif

