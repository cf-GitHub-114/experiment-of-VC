
// exp2-4View.cpp : Cexp24View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp2-4.h"
#endif

#include "exp2-4Doc.h"
#include "exp2-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp24View

IMPLEMENT_DYNCREATE(Cexp24View, CView)

BEGIN_MESSAGE_MAP(Cexp24View, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Cexp24View ����/����

Cexp24View::Cexp24View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp24View::~Cexp24View()
{
}

BOOL Cexp24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp24View ����

void Cexp24View::OnDraw(CDC* /*pDC*/)
{
	Cexp24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp24View ��ӡ

BOOL Cexp24View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void Cexp24View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void Cexp24View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// Cexp24View ���

#ifdef _DEBUG
void Cexp24View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp24Doc* Cexp24View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp24Doc)));
	return (Cexp24Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp24View ��Ϣ�������
