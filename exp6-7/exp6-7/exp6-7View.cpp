
// exp6-7View.cpp : Cexp67View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp6-7.h"
#endif

#include "exp6-7Doc.h"
#include "exp6-7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp67View

IMPLEMENT_DYNCREATE(Cexp67View, CView)

BEGIN_MESSAGE_MAP(Cexp67View, CView)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// Cexp67View ����/����

Cexp67View::Cexp67View()
{
	// TODO: �ڴ˴���ӹ������
	rect.left = 200;//��ʼ������
	rect.top = 100;
	rect.right = 800;
	rect.bottom = 200;
	s = "";//��ʼ���ַ���
	x = 201;//��ʼ������ַ����ĺ�����
	y = 101;//��ʼ������ַ�����������
}

Cexp67View::~Cexp67View()
{
}

BOOL Cexp67View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp67View ����

void Cexp67View::OnDraw(CDC* pDC)
{
	Cexp67Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	pDC->Rectangle(rect);//������
}


// Cexp67View ���

#ifdef _DEBUG
void Cexp67View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp67View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp67Doc* Cexp67View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp67Doc)));
	return (Cexp67Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp67View ��Ϣ�������


void Cexp67View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	s = s + (char)nChar;
	size = dc.GetTextExtent(s);//��ȡ�ַ��������س���
	if (size.cx < 599 ) {//δ��Ҫ����
		dc.TextOutW(x, y, s);
		}
	else if (size.cx >= 599 && y < 150){//��Ҫ���У��һ��ڱ༭���������ڣ�	
		size.cx = 0;//���ַ�������ÿ�
		s = (char)nChar;//���ո�������ַ������ַ���
		y += 20;//����ַ���������������
		dc.TextOutW(x, y, s);//����ַ���
	}
	
	CView::OnChar(nChar, nRepCnt, nFlags);
}
