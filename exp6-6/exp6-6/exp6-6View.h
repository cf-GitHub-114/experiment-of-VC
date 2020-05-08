
// exp6-6View.h : Cexp66View 类的接口
//

#pragma once


class Cexp66View : public CView
{
protected: // 仅从序列化创建
	Cexp66View();
	DECLARE_DYNCREATE(Cexp66View)

// 特性
public:
	Cexp66Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp66View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // exp6-6View.cpp 中的调试版本
inline Cexp66Doc* Cexp66View::GetDocument() const
   { return reinterpret_cast<Cexp66Doc*>(m_pDocument); }
#endif

