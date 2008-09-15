//////////////////////////////////////////////////////////////////////////
//
// pgScript - PostgreSQL Tools
// RCS-ID:      $Id: pgsDifferent.h,v 1.2 2008/08/10 17:45:37 pgunittest Exp $
// Copyright (C) 2002 - 2008, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
//////////////////////////////////////////////////////////////////////////


#ifndef PGSDIFFERENT_H_
#define PGSDIFFERENT_H_

#include "pgscript/pgScript.h"
#include "pgscript/expressions/pgsOperation.h"

class pgsDifferent : public pgsOperation
{

public:

	pgsDifferent(const pgsExpression * left, const pgsExpression * right);

	virtual ~pgsDifferent();

	virtual pgsExpression * clone() const;

	pgsDifferent(const pgsDifferent & that);

	pgsDifferent & operator =(const pgsDifferent & that);

	virtual wxString value() const;
	
	virtual pgsOperand eval(pgsVarMap & vars) const;
	
};

#endif /*PGSDIFFERENT_H_*/
