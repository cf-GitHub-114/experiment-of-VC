
// exp3-7.h : exp3-7 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cexp37App:
// �йش����ʵ�֣������ exp3-7.cpp
//

class Cexp37App : public CWinApp
{
public:
	Cexp37App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cexp37App theApp;
