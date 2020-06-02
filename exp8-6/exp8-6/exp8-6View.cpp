
// exp8-6View.cpp : Cexp86View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp8-6.h"
#endif

#include "exp8-6Doc.h"
#include "exp8-6View.h"
#include "MyDlg07.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp86View

IMPLEMENT_DYNCREATE(Cexp86View, CView)

BEGIN_MESSAGE_MAP(Cexp86View, CView)
	ON_COMMAND(ID_COLORFULELLIPSE, &Cexp86View::OnColorfulellipse)
END_MESSAGE_MAP()

// Cexp86View ����/����

Cexp86View::Cexp86View()
{
	// TODO: �ڴ˴���ӹ������
	rect.left = 100;
	rect.top = 100;
	rect.right = 300;
	rect.bottom = 400;
}

Cexp86View::~Cexp86View()
{
}

BOOL Cexp86View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp86View ����

void Cexp86View::OnDraw(CDC* pDC)
{
	Cexp86Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(rect);
}


// Cexp86View ���

#ifdef _DEBUG
void Cexp86View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp86View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp86Doc* Cexp86View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp86Doc)));
	return (Cexp86Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp86View ��Ϣ�������


void Cexp86View::OnColorfulellipse()
{
	// TODO: �ڴ���������������
	MyDlg07 dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		CClientDC dc(this);//����һ������CDC����
		CBrush m_brush;//����һ�����ʽˢ��֪��
		this->UpdateData(true);//��ǰ̨���ݴ�����̨
		//m_brush.CreateSolidBrush(RGB(dlg.red, dlg.green,dlg.blue));//������ɫ��
		CBrush brush(RGB(dlg.red, dlg.green, dlg.blue));//�����Լ���Ҫ�����ɫ
		CBrush *oldbrush;
		oldbrush = dc.SelectObject(&brush);//ѡ�µĻ�ˢ
		dc.Ellipse(rect);
		dc.SelectObject(oldbrush);//��ԭ���Ļ�ˢѡ��ȥ 
	}
}
