/****************************************************************************/
/*                                                                          */
/*                                                                          */
/*  This code and any software associated is covered by                     */
/*  GNU Lesser Public License (LGPL)                                        */
/*                                                                          */
/*  Author: Gopal Ananthraman                                               */
/*                                                                          */
/*  Desc  :                                                                 */
/*                                                                          */
/****************************************************************************/
#if !defined(AFX_CREDITWND_H__9B758A21_AFFB_11D3_9D83_8C9A2E33BF36__INCLUDED_)
#define AFX_CREDITWND_H__9B758A21_AFFB_11D3_9D83_8C9A2E33BF36__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// CreditWnd.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCreditWnd window

class CCreditWnd : public CWnd
{
	CString m_lpszTitle;
// Construction
public:
	CCreditWnd();
	BOOL Display();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCreditWnd)
	protected:
	virtual void PostNcDestroy();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCreditWnd();

	// Generated message map functions
protected:
	//{{AFX_MSG(CCreditWnd)
	afx_msg void OnPaint();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CREDITWND_H__9B758A21_AFFB_11D3_9D83_8C9A2E33BF36__INCLUDED_)
