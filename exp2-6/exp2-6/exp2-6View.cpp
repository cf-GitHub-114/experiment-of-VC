
// exp2-6View.cpp : Cexp26View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp2-6.h"
#endif

#include "exp2-6Doc.h"
#include "exp2-6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp26View

IMPLEMENT_DYNCREATE(Cexp26View, CView)

BEGIN_MESSAGE_MAP(Cexp26View, CView)
END_MESSAGE_MAP()

// Cexp26View ����/����

Cexp26View::Cexp26View()
{
	// TODO: �ڴ˴���ӹ������
	rect.left = 100;//�������
	rect.top = 100;
	rect.right = 300;
	rect.bottom = 400;
	height = 0;//��ʼ��
}

Cexp26View::~Cexp26View()
{
}

BOOL Cexp26View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp26View ����

void Cexp26View::OnDraw(CDC* pDC)
{
	Cexp26Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	/*int red = rand();
	int green = rand();
	int blue = rand();
	int width = 2;
	int row = 10;
	int color = RGB(red,green,blue);*/
	int color = RGB(51,5,100);//������ɫ
	CBrush newBrush(color);
//�����»�ˢ�����Ѿɻ�ˢ����ָ��
	CBrush *oldBrush = pDC->SelectObject(&newBrush);
//��ͼ����
	pDC->Ellipse(rect);//�ھ����ڻ�Բ
	pDC->SelectObject(oldBrush);//��ʹ���»�ˢ�󣬻ָ�ԭ��ˢ
}


// Cexp26View ���

#ifdef _DEBUG
void Cexp26View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp26View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp26Doc* Cexp26View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp26Doc)));
	return (Cexp26Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp26View ��Ϣ�������
