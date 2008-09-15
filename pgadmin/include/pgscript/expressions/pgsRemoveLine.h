//////////////////////////////////////////////////////////////////////////
//
// pgScript - PostgreSQL Tools
// RCS-ID:      $Id: pgsRemoveLine.h,v 1.2 2008/08/10 17:45:37 pgunittest Exp $
// Copyright (C) 2002 - 2008, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
//////////////////////////////////////////////////////////////////////////


#ifndef PGSREMOVELINE_H_
#define PGSREMOVELINE_H_

#include "pgscript/pgScript.h"
#include "pgscript/expressions/pgsExpression.h"

class pgsRemoveLine : public pgsExpression
{

private:

	wxString m_rec;
	const pgsExpression * m_line;

public:

	pgsRemoveLine(const wxString & rec, const pgsExpression * line);

	virtual ~pgsRemoveLine();

	pgsRemoveLine(const pgsRemoveLine & that);

	pgsRemoveLine & operator=(const pgsRemoveLine & that);
	
	virtual pgsExpression * clone() const;
	
	virtual wxString value() const;

	virtual pgsOperand eval(pgsVarMap & vars) const;

};

#endif /*PGSREMOVELINE_H_*/
