
// exp7-2View.h : Cexp72View 类的接口
//

#pragma once


class Cexp72View : public CView
{
protected: // 仅从序列化创建
	Cexp72View();
	DECLARE_DYNCREATE(Cexp72View)

// 特性
public:
	Cexp72Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp72View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp7-2View.cpp 中的调试版本
inline Cexp72Doc* Cexp72View::GetDocument() const
   { return reinterpret_cast<Cexp72Doc*>(m_pDocument); }
#endif

