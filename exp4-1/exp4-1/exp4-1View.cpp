
// exp4-1View.cpp : Cexp41View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp4-1.h"
#endif

#include "exp4-1Doc.h"
#include "exp4-1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp41View

IMPLEMENT_DYNCREATE(Cexp41View, CView)

BEGIN_MESSAGE_MAP(Cexp41View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// Cexp41View ����/����

Cexp41View::Cexp41View()
{
	// TODO: �ڴ˴���ӹ������
	count1 = 0;//��ʼ������
	count2 = 0;//��ʼ������
	flag = 0;//��ʼ������
}

Cexp41View::~Cexp41View()
{
}

BOOL Cexp41View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp41View ����

void Cexp41View::OnDraw(CDC* pDC)
{
	Cexp41Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���	
}


// Cexp41View ���

#ifdef _DEBUG
void Cexp41View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp41View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp41Doc* Cexp41View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp41Doc)));
	return (Cexp41Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp41View ��Ϣ�������


void Cexp41View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	flag = 1;//��־����������
	downPoint = point;//��ȡ���������ʱ������

	CView::OnLButtonDown(nFlags, point);
}


void Cexp41View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	upPoint = point;
	CClientDC dc(this);
	CString s1,s2;
	
/*�������������Ƿ���ȷ
	CString upPiontX, upPiontY, downPiontX, downPiontY;
	downPiontX.Format(_T("%d"), downPoint.x);
	downPiontY.Format(_T("%d"), downPoint.y);
    upPiontX.Format(_T("%d"), upPoint.x);
	upPiontY.Format(_T("%d"), upPoint.y);
//�������������ʱ������
	dc.TextOutW(0, 0, downPiontX);
	dc.TextOutW(100, 0, downPiontY);
//����������ͷ�ʱ������
	dc.TextOutW(0, 20, upPiontX);
	dc.TextOutW(100, 20, upPiontY);
//����������ƶ�������
	CString s,ss;
	s = "�������ƶ������أ�";
	double count = fabs(upPoint.x - downPoint.x);
	ss.Format(_T("%lf"), count);
	dc.TextOutW(0, 50, s+ss);
*/
	double count = fabs(upPoint.x - downPoint.x);
    count2 = count/count1;//ǿ��ת����������
	s1.Format(_T("%d"), count1);
	s2.Format(_T("%lf"),count2);
	dc.TextOutW(200, 300, s1);
	dc.TextOutW(200, 300, s1);
	CString ss1, ss2;
	ss1 = "����ƶ�������";
	ss2 = "�������ƶ����ٸ����ط���һ�Σ�";
    dc.TextOutW(200,300,ss1+s1);//��ʾ����ƶ�����
	dc.TextOutW(200,400,ss2+s2);//��ʾ�������ƶ����ٸ����ط���һ��

	CView::OnLButtonUp(nFlags, point);
}


void Cexp41View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	if (flag) {//������������ʱ
		count1++;//�����ۻ�����ƶ��Ĵ���         
	}
	
	

	CView::OnMouseMove(nFlags, point);
}
