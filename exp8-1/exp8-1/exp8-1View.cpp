
// exp8-1View.cpp : Cexp81View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "exp8-1.h"
#endif

#include "exp8-1Doc.h"
#include "exp8-1View.h"
#include "MyDlg04.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cexp81View

IMPLEMENT_DYNCREATE(Cexp81View, CView)

BEGIN_MESSAGE_MAP(Cexp81View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_SHOWFILENAME, &Cexp81View::OnShowfilename)
END_MESSAGE_MAP()

// Cexp81View ����/����

Cexp81View::Cexp81View()
{
	// TODO: �ڴ˴���ӹ������
	flag = 0;//��ʼ����־
}

Cexp81View::~Cexp81View()
{
}

BOOL Cexp81View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Cexp81View ����

void Cexp81View::OnDraw(CDC* /*pDC*/)
{
	Cexp81Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Cexp81View ���

#ifdef _DEBUG
void Cexp81View::AssertValid() const
{
	CView::AssertValid();
}

void Cexp81View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cexp81Doc* Cexp81View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cexp81Doc)));
	return (Cexp81Doc*)m_pDocument;
}
#endif //_DEBUG


// Cexp81View ��Ϣ�������


void Cexp81View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CFileDialog cfd(true);//����Ի���
	int r = cfd.DoModal();//����ģʽ�Ի���
	CClientDC dc(this);
	if (r == IDOK) {//ȷ���˳��Ի���
		filename = cfd.GetPathName();
		flag = 1;
		dc.TextOutW(200, 300, filename);
	}

	CView::OnLButtonDblClk(nFlags, point);
}


void Cexp81View::OnShowfilename()
{
	// TODO: �ڴ���������������
	if (flag == 1) {
		MyDlg04 dlg;
	    dlg.showname = filename;//�ȴ������ٵ����Ի���
	    int t = dlg.DoModal();
	    UpdateData(false);//����̨���ݴ���ǰ̨
	}
}
