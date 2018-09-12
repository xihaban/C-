// 111Dlg.h : header file
//

#if !defined(AFX_111DLG_H__1D53A6B0_BAEA_429B_BCB3_917E39BB053C__INCLUDED_)
#define AFX_111DLG_H__1D53A6B0_BAEA_429B_BCB3_917E39BB053C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMy111Dlg dialog

class CMy111Dlg : public CDialog
{
// Construction
public:
	CMy111Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMy111Dlg)
	enum { IDD = IDD_MY111_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy111Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMy111Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_111DLG_H__1D53A6B0_BAEA_429B_BCB3_917E39BB053C__INCLUDED_)
