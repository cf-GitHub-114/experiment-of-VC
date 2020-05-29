
// exp7-5View.cpp : Cexp75View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp7-5.h"
#endif

#include "exp7-5Doc.h"
#include "exp7-5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp75View

IMPLEMENT_DYNCREATE(Cexp75View, CView)

BEGIN_MESSAGE_MAP(Cexp75View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// Cexp75View ����/����

Cexp75View::Cexp75View()
{
	// TODO: �ڴ˴���ӹ������
	set = 1;
	r = 50;//��ʼ��Բ�ĵİ뾶
	flag = 0;//��ʼ��Բ���˶�״̬Ϊ����
	flagD = 0;
	flagDB = 0;
}

Cexp75View::~Cexp75View()
{
}

BOOL Cexp75View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp75View ����

void Cexp75View::OnDraw(CDC* pDC)
{
	Cexp75Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	if (set) {
		SetTimer(1, 10, NULL);//���ö�ʱ��
		set = false;
	}

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Ellipse(rect);//��Բ
}


// Cexp75View ���

#ifdef _DEBUG
void Cexp75View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp75View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp75Doc* Cexp75View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp75Doc)));
	return (Cexp75Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp75View ��Ϣ�������


void Cexp75View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flagD = 1;
	flagDB = 0;
	CView::OnLButtonDown(nFlags, point);
}


void Cexp75View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flagDB = 1;
	flagD = 0;
	CView::OnLButtonDblClk(nFlags, point);
}


void Cexp75View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	GetClientRect(&cr);//��ȡ�ͻ�����Ϣ	
	CClientDC dc(this);
	if (flag == 0) {//Բ�δ�������״̬��������
		if (flagD == 1) {//���������
			if (rect.right < (cr.right - cr.left)) {//Բ��δ����ͻ����Ҷ�
				rect.left++;
				rect.right++;
				Invalidate();//ǿ���ػ�
			}
			else {//Բ�ε���ͻ����Ҷ�
				flag = 1;//���˶�״̬��Ϊ����
			}
		}
		else if (flagDB == 1) {//������˫����Բ�β��˶�
			//dc.Ellipse(rect);
		}
		else {//�����δ������˫������Բ�β����������ڳ�ʼλ��
			rect.left = 0;
		    rect.right = 2 * r;//��2r����
		    rect.top = (cr.top + cr.bottom) / 2 - r;
		    rect.bottom = (cr.top + cr.bottom) / 2 + r;
		    //��ֱ����Invalidate������һֱ���ػ��Բ��	   
		   dc.Ellipse(rect);
		}
	}
	else{//Բ�δ�������״̬
		if (flagD == 1) {//���������
			if (rect.left > 0) {//δ����ͻ������
				rect.left--;
				rect.right--;
				Invalidate();
			}
			else {//����ͻ������
				flag = 0;//���˶�״̬��Ϊ����
			}
		}
		else if (flagDB == 1) {//������˫����Բ�β��˶�
			//dc.Ellipse(rect);
		}
	}
	CView::OnTimer(nIDEvent);
}
