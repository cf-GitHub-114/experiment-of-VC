
// exp9-2View.h : Cexp92View 类的接口
//

#pragma once


class Cexp92View : public CView
{
protected: // 仅从序列化创建
	Cexp92View();
	DECLARE_DYNCREATE(Cexp92View)

// 特性
public:
	Cexp92Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp92View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp9-2View.cpp 中的调试版本
inline Cexp92Doc* Cexp92View::GetDocument() const
   { return reinterpret_cast<Cexp92Doc*>(m_pDocument); }
#endif

