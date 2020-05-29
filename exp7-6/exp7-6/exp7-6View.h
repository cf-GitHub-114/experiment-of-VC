
// exp7-6View.h : Cexp76View 类的接口
//

#pragma once


class Cexp76View : public CView
{
protected: // 仅从序列化创建
	Cexp76View();
	DECLARE_DYNCREATE(Cexp76View)

// 特性
public:
	Cexp76Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp76View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // exp7-6View.cpp 中的调试版本
inline Cexp76Doc* Cexp76View::GetDocument() const
   { return reinterpret_cast<Cexp76Doc*>(m_pDocument); }
#endif

