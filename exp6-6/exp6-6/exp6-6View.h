
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
	CRect rect;//定义一个矩形
	CString s;//定义一个字符串
	int downX;//定义鼠标按下的横坐标
	int flag;//定义一个标志鼠标左键按下的标志
	int count;//定义一个变量，装字符个数
	int frontCount;//定义一个装字符串前半段字符个数的变量
	//类CSize是对Windows结构SIZE的封装,结构SIZE表示一个矩形的长度和宽度
	CSize size;//定义一个装字符串长度和宽度的结构
	CString stringFront;//定义前半部分的字符串
	CString stringBack;//定义后半部分的字符串
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
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp6-6View.cpp 中的调试版本
inline Cexp66Doc* Cexp66View::GetDocument() const
   { return reinterpret_cast<Cexp66Doc*>(m_pDocument); }
#endif

