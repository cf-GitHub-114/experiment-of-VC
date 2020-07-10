
// 啦啦啦啦View.h : C啦啦啦啦View 类的接口
//

#pragma once


class C啦啦啦啦View : public CView
{
protected: // 仅从序列化创建
	C啦啦啦啦View();
	DECLARE_DYNCREATE(C啦啦啦啦View)

// 特性
public:
	C啦啦啦啦Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~C啦啦啦啦View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 啦啦啦啦View.cpp 中的调试版本
inline C啦啦啦啦Doc* C啦啦啦啦View::GetDocument() const
   { return reinterpret_cast<C啦啦啦啦Doc*>(m_pDocument); }
#endif

