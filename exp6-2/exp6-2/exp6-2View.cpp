
// exp6-2View.cpp : Cexp62View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp6-2.h"
#endif

#include "exp6-2Doc.h"
#include "exp6-2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp62View

IMPLEMENT_DYNCREATE(Cexp62View, CView)

BEGIN_MESSAGE_MAP(Cexp62View, CView)
END_MESSAGE_MAP()

// Cexp62View ����/����

Cexp62View::Cexp62View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp62View::~Cexp62View()
{
}

BOOL Cexp62View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp62View ����

void Cexp62View::OnDraw(CDC* pDC)
{
	Cexp62Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CFileDialog cfd(true);  //����Ի������
	int r = cfd.DoModal();  //�����Ի���
		CClientDC dc(this);
		if (r == IDOK) {
			{
				CImage img;
				CString filename = cfd.GetPathName();
				img.Load(filename);
				img.Draw(pDC->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());
			}
		}
}


// Cexp62View ���

#ifdef _DEBUG
void Cexp62View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp62View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp62Doc* Cexp62View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp62Doc)));
	return (Cexp62Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp62View ��Ϣ�������
