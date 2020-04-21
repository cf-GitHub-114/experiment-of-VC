
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
};

#ifndef _DEBUG  // exp3-6View.cpp 中的调试版本
inline Cexp36Doc* Cexp36View::GetDocument() const
   { return reinterpret_cast<Cexp36Doc*>(m_pDocument); }
#endif

