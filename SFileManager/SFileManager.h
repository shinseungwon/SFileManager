
// SFileManager.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CSFileManagerApp:
// �� Ŭ������ ������ ���ؼ��� SFileManager.cpp�� �����Ͻʽÿ�.
//

class CSFileManagerApp : public CWinApp
{
public:
	CSFileManagerApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CSFileManagerApp theApp;