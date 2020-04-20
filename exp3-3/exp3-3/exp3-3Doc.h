
// exp3-3Doc.h : Cexp33Doc 类的接口
//


#pragma once


class Cexp33Doc : public CDocument
{
protected: // 仅从序列化创建
	Cexp33Doc();
	DECLARE_DYNCREATE(Cexp33Doc)

// 特性
public:
	CRect A, B, C;//定义三个矩形
	int a, b;//定义两个整型变量

// 操作
public:

// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~Cexp33Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
