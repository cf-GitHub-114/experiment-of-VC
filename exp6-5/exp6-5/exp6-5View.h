
// exp6-5View.h : Cexp65View 类的接口
//

#pragma once


class Cexp65View : public CView
{
protected: // 仅从序列化创建
	Cexp65View();
	DECLARE_DYNCREATE(Cexp65View)

// 特性
public:
	Cexp65Doc* GetDocument() const;
	CRect rect;//定义一个矩形
	CString s;
	
// 操作
public:
	
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp65View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // exp6-5View.cpp 中的调试版本
inline Cexp65Doc* Cexp65View::GetDocument() const
   { return reinterpret_cast<Cexp65Doc*>(m_pDocument); }
#endif

