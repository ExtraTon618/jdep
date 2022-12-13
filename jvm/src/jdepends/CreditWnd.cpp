// CreditWnd.cpp : implementation file
//

#include "stdafx.h"
#include "jdepends.h"
#include "CreditWnd.h"
#include <stdlib.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCreditWnd
static char *str[]={
	"*VisiBroker 4.0 Team",
		"*Development",
		"Prasad Mokapatti",
		"Jon Goldberg",
	    "Ke Jin",
		"Nick Trown",
		"Bhaskar vasudevan",
		"Ted Western",
		"Gopal Ananthraman",
		"Eugene Ivanov",
		"Andy Cutright",
		"Ioana pirvilescu",
		"James Njeru",
		"Callistus Chui",
		"@Our Thanks To..",
		"Dale Fuller (CEO)",
		"Jeff Barca Hall",
		"Deepak Singhal",
		"*MARKETING ",
		"Edwin Desouza",
		"*Quality Assurance",
		"Shobana",
		"Chun Ji",
		"cuie"
};

int size = 23, i = 0;

CCreditWnd::CCreditWnd()
:m_lpszTitle("VisiBroker for C++ Team")
{
}

CCreditWnd::~CCreditWnd()
{
}


BEGIN_MESSAGE_MAP(CCreditWnd, CWnd)
	//{{AFX_MSG_MAP(CCreditWnd)
	ON_WM_PAINT()
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

int m_x1,m_y1,m_x2,m_y2,m_x3,m_y3;
CRect m_rect;
/////////////////////////////////////////////////////////////////////////////
// CCreditWnd message handlers
BOOL CCreditWnd::Display()
{
  LPCSTR lpszClassName = AfxRegisterWndClass(CS_HREDRAW|CS_VREDRAW,0,(HBRUSH)::GetStockObject(BLACK_BRUSH));
  // Create the splash window
  if (!CWnd::CreateEx(NULL,lpszClassName,m_lpszTitle,WS_POPUP|WS_BORDER|WS_SYSMENU|WS_CAPTION,0,0,360,310,NULL,NULL))
   return 0L;
  
    // center window
  CenterWindow(); 
  // show it now
  ShowWindow(SW_SHOW);

  GetClientRect(&m_rect);

  		m_x1 = rand() % m_rect.Width();
		m_y1 = rand() % m_rect.Height();

		m_x2 = rand() % m_rect.Width();
		m_y2 = rand() % m_rect.Height();

		m_x3 = rand() % m_rect.Width();
		m_y3 = rand() % m_rect.Height();

  
  // Start timer 
  SetTimer(100,10,NULL);
  SetTimer(999, 2000, NULL);
  return 1L;
}

void CCreditWnd::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
    CRect rect;
	GetClientRect(&rect);

	dc.SetTextColor(RGB(0,0,255));
	dc.SetBkMode(TRANSPARENT);
    
	if (m_y1 <= 2) m_y1 = rect.Height();
	if (m_y1 > rect.Height()) m_y1 = 1;
	if (m_x1 >= rect.Width()) m_x1 = 2;
	if (m_x1 <= 0) m_x1 = rect.Width();

	if (m_y2 <= 2) m_y2 = rect.Height();
	if (m_y2 > rect.Height()) m_y2 = 1;
	if (m_x2 >= rect.Width()) m_x2 = 2;
	if (m_x2 <= 0) m_x2 = rect.Width();

	if (m_y3 <= 2) m_y3 = rect.Height();
	if (m_y3 > rect.Height()) m_y3 = 1;
	if (m_x3 >= rect.Width()) m_x3 = 2;
	if (m_x3 <= 0) m_x3 = rect.Width();

	dc.TextOut(m_x1, m_y1, CString(str[i % size]));
		dc.SetTextColor(RGB(255,0,0));
	if (*str[i % size] != '*'){
	if (*str[(i+1) % size] != '*')
	  dc.TextOut(m_x2, m_y2, CString(str[(i+1) % size]));
		dc.SetTextColor(RGB(0,255, 0));
    if (*str[(i+2) % size] != '*')
	  dc.TextOut(m_x3, m_y3, CString(str[(i+2) % size]));//, 5, m_Rect,DT_CENTER|DT_VCENTER);
	}
	
	// TODO: Add your message handler code here
	
	// Do not call CWnd::OnPaint() for painting messages
}

void CCreditWnd::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
    
	if ( nIDEvent == 100 ) {
		if (*str[i % size] != '*'){
			m_y1 -= 1;
	        m_x1 += 1;
			m_y3 += 1;
	        m_x3 -= 1;
			m_y2 -= 1;
	        
		}

	} else if ( nIDEvent == 999 ){
		i++;
		if (*str[i % size] == '*'){
			m_y2 = m_y3 = m_y1 = m_rect.Height()/2 - 3;
			m_x2 = m_x3 = m_x1 = m_rect.Width()/2  - 10;
		} else {
		m_x1 = rand() % m_rect.Width();
		m_y1 = rand() % m_rect.Height();
		if (m_x1 < 0 ) m_x1 = -m_x1;
		if (m_y1 < 0 ) m_y1 = -m_y1;

		m_x2 = rand() % m_rect.Width();
		m_y2 = rand() % m_rect.Height();
		if (m_x2 < 0 ) m_x2 = -m_x2;
		if (m_y2 < 0 ) m_y2 = -m_y2;

		m_x3 = rand() % m_rect.Width();
		m_y3 = rand() % m_rect.Height();
		if (m_x3 < 0 ) m_x3 = -m_x3;
		if (m_y3 < 0 ) m_y3 = -m_y3;
		}
	}
	Invalidate();
	UpdateWindow();

	CWnd::OnTimer(nIDEvent);
}

void CCreditWnd::PostNcDestroy() 
{
	// TODO: Add your specialized code here and/or call the base class
	delete this;
	// CWnd::PostNcDestroy();
}
