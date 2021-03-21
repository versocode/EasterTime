// EasterTime.h : main header file for the EASTERTIME application
//

#if !defined(AFX_EASTERTIME_H__E7ECEBC0_D02F_4C0E_8A9E_CECD3EAB575C__INCLUDED_)
#define AFX_EASTERTIME_H__E7ECEBC0_D02F_4C0E_8A9E_CECD3EAB575C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CEasterTimeApp:
// See EasterTime.cpp for the implementation of this class
//

class CEasterTimeApp : public CWinApp
{
public:
	CEasterTimeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEasterTimeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CEasterTimeApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EASTERTIME_H__E7ECEBC0_D02F_4C0E_8A9E_CECD3EAB575C__INCLUDED_)
