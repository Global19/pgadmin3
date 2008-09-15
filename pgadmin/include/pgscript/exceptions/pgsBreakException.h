//////////////////////////////////////////////////////////////////////////
//
// pgScript - PostgreSQL Tools
// RCS-ID:      $Id: pgsBreakException.h,v 1.2 2008/08/10 17:45:36 pgunittest Exp $
// Copyright (C) 2002 - 2008, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
//////////////////////////////////////////////////////////////////////////


#ifndef PGSBREAKEXCEPTION_H_
#define PGSBREAKEXCEPTION_H_

#include "pgscript/pgScript.h"
#include "pgscript/exceptions/pgsException.h"

class pgsBreakException : public pgsException
{
	
public:
	
	pgsBreakException();
	
	virtual ~pgsBreakException();
	
	virtual const wxString message() const;
	
};

#endif /*PGSBREAKEXCEPTION_H_*/
