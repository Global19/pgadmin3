//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
// RCS-ID:      $Id$
// Copyright (C) 2002 - 2007, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
// wsConsole.h - debugger 
//
//////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// class wsConsole
//
//  This class manages the user interface for a single connection to a server.  
//  Each wsConsole object keeps track of a connection (m_conn), a debugger window
//  (m_codeWindow), and a query window (m_queryWindow).
//
//  A wsConsole object is typically a child of the wsMainFrame object
//
////////////////////////////////////////////////////////////////////////////////

#ifndef WSCONSOLE
#define WSCONSOLE

#include <wx/textdlg.h>
#include <wx/docview.h>		
#include "wsPgconn.h"

class wsCodeWindow;
class wsQueryWindow;

class wsConsole : public wxTextCtrl
{
  DECLARE_CLASS( wsConsole )

  public:
	wsConsole( wxDocParentFrame * parent, const wxString & title, const wxPoint & pos, const wxSize & size, wsPgConn * conn );

	void	doExecute( void );
	void	doDebug( wsConnProp & connProps );
	void	OnDebugCommand( wxCommandEvent & event );

private:

	wsCodeWindow	*m_codeWindow;	// Source code (debugger) window
	wsQueryWindow	*m_queryWindow;	// Query window
	wsPgConn	*m_conn;	// Connection to server

	void OnActivate( wxActivateEvent & event );

  DECLARE_EVENT_TABLE()
};

#endif // WSCONSOLE
