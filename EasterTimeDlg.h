// EasterTimeDlg.h : header file
//

#if !defined(AFX_EASTERTIMEDLG_H__BC3F00C3_3F48_47BC_8746_0628784EF95D__INCLUDED_)
#define AFX_EASTERTIMEDLG_H__BC3F00C3_3F48_47BC_8746_0628784EF95D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "staticex.h"

/////////////////////////////////////////////////////////////////////////////
// CEasterTimeDlg dialog

class CEasterTimeDlg : public CDialog
{
// Construction
public:
	CEasterTimeDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CEasterTimeDlg)
	enum { IDD = IDD_EASTERTIME_DIALOG };
	CStaticEx	m_URL;
	CEdit	m_ResultsEdit;
	CString	m_Year;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEasterTimeDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
    void calcEaster(int year,int& day,int& month);


	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CEasterTimeDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnEastercalcbtn();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EASTERTIMEDLG_H__BC3F00C3_3F48_47BC_8746_0628784EF95D__INCLUDED_)
