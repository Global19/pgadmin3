//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
// RCS-ID:      $Id$
// Copyright (C) 2002 - 2007, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
// wsResultGrid.h - debugger 
//
//////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////
// class wsResultGrid
//
//	A wsResultGrid is a grid control that knows how to display that result set
//	generated by a PostgreSQL query. In the workstation application, a wsResultGrid
//	is a child of the notebook owned by a wsTabWindow.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef WSRESULTGRIDH
#define WSRESULTGRIDH

#include <wx/grid.h>
#include <libpq-fe.h>

class wsResultGrid : public wxGrid
{
    DECLARE_CLASS( wsResultGrid )

public:
	wsResultGrid( wxWindow * parent, wxWindowID id );

	void	fillGrid( PGresult * result );	// Copy a result set into the grid
};

#endif
