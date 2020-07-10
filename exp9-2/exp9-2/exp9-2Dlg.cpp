
// exp9-2Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "exp9-2.h"
#include "exp9-2Dlg.h"
#include "afxdialogex.h"
#include<fstream>
#include<string>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Cexp92Dlg �Ի���



Cexp92Dlg::Cexp92Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_EXP92_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cexp92Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(Cexp92Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &Cexp92Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// Cexp92Dlg ��Ϣ�������

BOOL Cexp92Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void Cexp92Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void Cexp92Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR Cexp92Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Cexp92Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	fstream ifs(_T("C:\\Users\\�Է�\\Desktop\\abc.txt"));
	string s;
	ifs >> s;                          //��ȡ�ļ�abc.txt,�����ļ����ݣ�����������jpg�ļ�·����д�뵽s
	CImage img;
	CString filename;
	filename = s.c_str();
	CClientDC dc(this);
	dc.TextOutW(0,0,filename);
	img.Load(filename);
	if (!img.IsNull())
	{
		int x, y, w, h;
		foo(img, x, y, w, h);
		CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
		pDC->SetStretchBltMode(HALFTONE);      //ͼ��ʧ��
		img.Draw(pDC->m_hDC, x, y, w, h);
		ReleaseDC(pDC);
	}
	else
	{
		MessageBox(_T("Load Error"));
	}
}


void Cexp92Dlg::foo(CImage &img, int &x, int &y, int &w, int &h)
{
	CRect rect;
	GetDlgItem(IDC_STATIC)->GetClientRect(&rect);            //��ȡ�ͻ���
	float rect_ratio = 1.0*rect.Width() / rect.Height();     //����ͻ����Ŀ�߱�
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();   //����ͼƬ�Ŀ�߱�
	if (rect_ratio > img_ratio)                             //����ͻ�����߱ȸ���ͬ���߶�ʱͼƬ�ؼ�����
	{
		h = rect.Height();                                 //�Կͻ����߶�Ϊ�߶�
		w = img_ratio*h;                                   //����������ͼƬ�Ŀ��
		x = (rect.Width() - w) / 2;                      //���Ͻ��������
		y = 0;                                          //����ڿͻ�������   y=0
	}
	else
	{
		w = rect.Width();                             //�Կͻ������Ϊ���
		h = w / img_ratio;                             //����������ͼƬ�ĸ߶�
		x = 0;                                     //����ڿͻ�������   x=0
		y = (rect.Height() - h) / 2;                //���Ͻ��������
	}
}
