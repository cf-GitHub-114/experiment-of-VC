
// exp4-3View.cpp : Cexp43View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp4-3.h"
#endif

#include "exp4-3Doc.h"
#include "exp4-3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp43View

IMPLEMENT_DYNCREATE(Cexp43View, CView)

BEGIN_MESSAGE_MAP(Cexp43View, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cexp43View ����/����

Cexp43View::Cexp43View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;//��ʼ��flag��־
	A.left = 200;//�������A����ʵ�������Σ����������ɾ��Σ�������Ӧ������Բ
	A.top = 0;
	A.right = 300;
	A.bottom = 100;
}

Cexp43View::~Cexp43View()
{
}

BOOL Cexp43View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp43View ����

void Cexp43View::OnDraw(CDC* pDC)
{
	Cexp43Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

		SetTimer(1,10,NULL);//���ö�ʱ��

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(A);//����Բ��
}


// Cexp43View ���

#ifdef _DEBUG
void Cexp43View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp43View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp43Doc* Cexp43View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp43Doc)));
	return (Cexp43Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp43View ��Ϣ�������


void Cexp43View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CRect clientRect;
	GetClientRect(&clientRect);//��ȡ�ͻ�����С
	if(flag == 0 && A.bottom < (clientRect.bottom - clientRect.top)) {//δ���ͻ����ײ�,��Բ�δ�������״̬
			A.top += 5;
			A.bottom += 5;
			if (A.bottom >= (clientRect.bottom - clientRect.top)) {//��ִ��A.bottom += 5;��Բ�ε���ͻ����ײ�
				flag = 1;//��Բ���˶�״̬��Ϊ����
			}
	}
	else if (flag == 1 && A.top > 0) {//δ���ͻ�������������Ҫ���ƣ���������
			A.top -= 5;
			A.bottom -= 5;
			if (A.top <= 0) {//��ִ��A.top -= 5;��Բ�ε���ͻ�������
				flag = 0;//��Բ�ε��˶�״̬��Ϊ����
			}
		}
	Invalidate();
	
	CView::OnTimer(nIDEvent);
}
