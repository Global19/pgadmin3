//////////////////////////////////////////////////////////////////////////
//
// pgScript - PostgreSQL Tools
// RCS-ID:      $Id: pgsAnd.h,v 1.2 2008/08/10 17:45:37 pgunittest Exp $
// Copyright (C) 2002 - 2008, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
//////////////////////////////////////////////////////////////////////////


#ifndef PGSAND_H_
#define PGSAND_H_

#include "pgscript/pgScript.h"
#include "pgscript/expressions/pgsOperation.h"

class pgsAnd : public pgsOperation
{
	
public:

	pgsAnd(const pgsExpression * left, const pgsExpression * right);

	virtual ~pgsAnd();

	virtual pgsExpression * clone() const;

	pgsAnd(const pgsAnd & that);

	pgsAnd & operator =(const pgsAnd & that);

	virtual wxString value() const;
	
	virtual pgsOperand eval(pgsVarMap & vars) const;
	
};

#endif /*PGSAND_H_*/
