
// exp5-4View.h : Cexp54View 类的接口
//

#pragma once


class Cexp54View : public CView
{
protected: // 仅从序列化创建
	Cexp54View();
	DECLARE_DYNCREATE(Cexp54View)

// 特性
public:
	Cexp54Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp54View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp5-4View.cpp 中的调试版本
inline Cexp54Doc* Cexp54View::GetDocument() const
   { return reinterpret_cast<Cexp54Doc*>(m_pDocument); }
#endif

