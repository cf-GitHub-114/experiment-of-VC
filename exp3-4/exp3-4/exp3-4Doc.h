
// exp3-4Doc.h : Cexp34Doc ��Ľӿ�
//


#pragma once


class Cexp34Doc : public CDocument
{
protected: // �������л�����
	Cexp34Doc();
	DECLARE_DYNCREATE(Cexp34Doc)

// ����
public:
	CArray<CRect,CRect&>ju;//����һ��Ԫ��Ϊ���ε�����
	int a, b;//�����������ͱ���
	int count;//�������ͱ���count�����ڼ����ھ���D�е���Ĵ���
// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Cexp34Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
