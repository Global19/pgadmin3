//////////////////////////////////////////////////////////////////////////
//
// pgScript - PostgreSQL Tools
// RCS-ID:      $Id: pgsEqual.h,v 1.2 2008/08/10 17:45:37 pgunittest Exp $
// Copyright (C) 2002 - 2008, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
//////////////////////////////////////////////////////////////////////////


#ifndef PGSEQUAL_H_
#define PGSEQUAL_H_

#include "pgscript/pgScript.h"
#include "pgscript/expressions/pgsOperation.h"

class pgsEqual : public pgsOperation
{
	
private:
	
	bool m_case_sensitive;

public:

	pgsEqual(const pgsExpression * left, const pgsExpression * right,
			bool case_sensitive = true);

	virtual ~pgsEqual();

	virtual pgsExpression * clone() const;

	pgsEqual(const pgsEqual & that);

	pgsEqual & operator =(const pgsEqual & that);

	virtual wxString value() const;

	virtual pgsOperand eval(pgsVarMap & vars) const;

};

#endif /*PGSEQUAL_H_*/
