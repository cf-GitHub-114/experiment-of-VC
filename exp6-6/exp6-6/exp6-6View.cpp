
// exp6-6View.cpp : Cexp66View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp6-6.h"
#endif

#include "exp6-6Doc.h"
#include "exp6-6View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp66View

IMPLEMENT_DYNCREATE(Cexp66View, CView)

BEGIN_MESSAGE_MAP(Cexp66View, CView)
	ON_WM_CHAR()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// Cexp66View ����/����

Cexp66View::Cexp66View()
{
	// TODO: �ڴ˴���ӹ������
	rect.left = 200;//��ʼ������
	rect.top = 300;
	rect.right = 800;
	rect.bottom = 350;
	s = "";//��ʼ���ַ���
	flag = 0;//��ʼ���������ı�־
	count = 0;//��ʼ���ַ������ı���
	frontCount = 0;//��ʼ��ǰ����ַ������ı���
}

Cexp66View::~Cexp66View()
{
}

BOOL Cexp66View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp66View ����

void Cexp66View::OnDraw(CDC* pDC)
{
	Cexp66Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(rect);//������
}


// Cexp66View ���

#ifdef _DEBUG
void Cexp66View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp66View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp66Doc* Cexp66View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp66Doc)));
	return (Cexp66Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp66View ��Ϣ�������


void Cexp66View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	if(!flag){//���δ����������ʾ�����ַ��γ��ַ���
		count += 1;//�ַ�������һ
		s = s + (char)nChar;
	   size = dc.GetTextExtent(s);//��ȡ�ַ��������س���
	   if (size.cx < 599) {
		   dc.TextOutW(201, 301, s);
	   }
	}
	else {//��������������ַ����в���һ���ַ�
		frontCount = count*(downX - 201) / size.cx;//���ַ���ǰ��ε��ַ�����count*((downX-201)/size.cx)
		stringFront = s.Left(frontCount);//��ȡǰ����ַ���
		/*CString ss;
		ss.Format(_T("%d"), frontCount);
		dc.TextOutW(0, 0, ss);//����ַ���ǰ����ַ�����
		dc.TextOutW(0, 20, stringFront);//����ַ���ǰ����ַ�
		*/
		//���ַ������ε��ַ�����count-frontCount
		stringBack = s.Right(count - frontCount);//��ȡ�����ַ���
		//dc.TextOutW(0, 40, stringBack);//����ַ��������ַ�
		s = stringFront + (char)nChar + stringBack;
		dc.TextOutW(201, 301, s);//�������ַ�����ַ������
	}
	CView::OnChar(nChar, nRepCnt, nFlags);
}


void Cexp66View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	downX = point.x;//��ȡ������ʱ������
	flag = 1;//��־����������
	CView::OnLButtonDown(nFlags, point);
}
