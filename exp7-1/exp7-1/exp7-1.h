
// exp7-1.h : exp7-1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cexp71App:
// �йش����ʵ�֣������ exp7-1.cpp
//

class Cexp71App : public CWinApp
{
public:
	Cexp71App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cexp71App theApp;
