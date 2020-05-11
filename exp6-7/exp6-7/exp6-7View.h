
// exp6-7View.h : Cexp67View 类的接口
//

#pragma once


class Cexp67View : public CView
{
protected: // 仅从序列化创建
	Cexp67View();
	DECLARE_DYNCREATE(Cexp67View)

// 特性
public:
	Cexp67Doc* GetDocument() const;
	CRect rect;//定义一个矩形
	CString s;//定义一个字符串
	CSize size;//定义一个装字符串长度和宽度的结构
	int x;//定义输出字符横坐标的变量
	int y;//定义输出字符纵坐标的变量
// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cexp67View();
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

#ifndef _DEBUG  // exp6-7View.cpp 中的调试版本
inline Cexp67Doc* Cexp67View::GetDocument() const
   { return reinterpret_cast<Cexp67Doc*>(m_pDocument); }
#endif

