
// exp8-2Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "exp8-2.h"
#include "exp8-2Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// Cexp82Dlg 对话框



Cexp82Dlg::Cexp82Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_EXP82_DIALOG, pParent)
	, a(0)
	, b(0)
	, c(0)
	, errorMes(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Cexp82Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, comboBox);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
	DDX_Text(pDX, IDC_EDIT4, errorMes);
}

BEGIN_MESSAGE_MAP(Cexp82Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &Cexp82Dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// Cexp82Dlg 消息处理程序

BOOL Cexp82Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。
	comboBox.InsertString(-1, _T("+"));   //添加字符串  
	comboBox.InsertString(-1, _T("-"));
	comboBox.InsertString(-1, _T("*"));
	comboBox.InsertString(-1, _T("/"));
	comboBox.InsertString(-1, _T("sqrt"));
	comboBox.InsertString(-1, _T("1/n"));

	comboBox.SetCurSel(0);   //默认选择第一个

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void Cexp82Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void Cexp82Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR Cexp82Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Cexp82Dlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);//将前台数据传到后台 
	switch (comboBox.GetCurSel()) {// 取得当前所选记录号comboBox.GetCurSel();
	case 0:    //用'0'未得预计结果
		c = a + b;
		break;
	case 1:
		c = a - b;
		break;
	case 2:
		c = a * b;
		break;
	case 3:
		if (b != 0) {//求倒数，分母不能为0
			c = a / b;
		}
		else {
			errorMes = (_T("输入信息有误,请检查！！！"));
		}
		break;
	case 4:
		if(a >= 0)//被开方数要大于等于0
		{
			c = sqrt(a);
		}	
		else {
			errorMes = (_T("输入信息有误,请检查！！！"));
		}
		break;
	case 5:
		if (a != 0 && b != 0)//求倒数，分子分母都不能为0
		{
			c = b / a;		
		}
		else {
			errorMes = (_T("输入信息有误,请检查！！！"));
		}
		break;
	}	
	UpdateData(false);//将后台数据传到前台
}
