
// exp3-7Doc.h : Cexp37Doc ��Ľӿ�
//


#pragma once


class Cexp37Doc : public CDocument
{
protected: // �������л�����
	Cexp37Doc();
	DECLARE_DYNCREATE(Cexp37Doc)

// ����
public:
	CArray<CRect, CRect>ca;//����Ԫ��Ϊ���ε�����
	int width;//���εĿ��
	int height;//���εĸ߶�

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
	virtual ~Cexp37Doc();
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
