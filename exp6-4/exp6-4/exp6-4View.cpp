
// exp6-4View.cpp : Cexp64View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp6-4.h"
#endif

#include "exp6-4Doc.h"
#include "exp6-4View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp64View

IMPLEMENT_DYNCREATE(Cexp64View, CView)

BEGIN_MESSAGE_MAP(Cexp64View, CView)
END_MESSAGE_MAP()

// Cexp64View ����/����

Cexp64View::Cexp64View()
{
	// TODO: �ڴ˴���ӹ������

}

Cexp64View::~Cexp64View()
{
}

BOOL Cexp64View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp64View ����

void Cexp64View::OnDraw(CDC* pDC)
{
	Cexp64Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���	
	CClientDC dc(this);
	CRect rect;
	GetClientRect(rect);
	if (!img) {//���û����ʾ��ͼ�񣬾͵���ѡ��ͼƬ�ĶԻ���
		CFileDialog cfd(true);  //����Ի������
	    int r = cfd.DoModal();  //�����Ի���
        if (r == IDOK ) {  //����˳��Ի���ʱѡ��ΪOK�Ļ�
		CString filename = cfd.GetPathName();		
		img.Load(filename);	
		}	
	}			
	int x = (rect.Width() - img.GetWidth()) / 2;
	int y = (rect.Height() - img.GetHeight()) / 2;
	img.Draw(pDC->m_hDC, x, y, img.GetWidth(), img.GetHeight());
}


// Cexp64View ���

#ifdef _DEBUG
void Cexp64View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp64View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp64Doc* Cexp64View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp64Doc)));
	return (Cexp64Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp64View ��Ϣ�������
