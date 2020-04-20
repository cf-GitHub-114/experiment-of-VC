
// exp3-3View.h : Cexp33View 类的接口
//

#pragma once


class Cexp33View : public CView
{
protected: // 仅从序列化创建
	Cexp33View();
	DECLARE_DYNCREATE(Cexp33View)

// 特性
public:
	Cexp33Doc* GetDocument() const;

// 操作
public:	

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp33View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp3-3View.cpp 中的调试版本
inline Cexp33Doc* Cexp33View::GetDocument() const
   { return reinterpret_cast<Cexp33Doc*>(m_pDocument); }
#endif

