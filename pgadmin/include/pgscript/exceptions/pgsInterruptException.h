//////////////////////////////////////////////////////////////////////////
//
// pgScript - PostgreSQL Tools
// RCS-ID:      $Id: pgsInterruptException.h,v 1.2 2008/08/10 17:45:36 pgunittest Exp $
// Copyright (C) 2002 - 2008, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
//////////////////////////////////////////////////////////////////////////


#ifndef PGSINTERRUPTEXCEPTION_H_
#define PGSINTERRUPTEXCEPTION_H_

#include "pgscript/pgScript.h"
#include "pgscript/exceptions/pgsException.h"

class pgsInterruptException : public pgsException
{
	
public:
	
	pgsInterruptException();
	
	virtual ~pgsInterruptException();
	
	virtual const wxString message() const;
	
};

#endif /*PGSINTERRUPTEXCEPTION_H_*/
