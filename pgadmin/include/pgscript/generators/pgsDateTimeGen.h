//////////////////////////////////////////////////////////////////////////
//
// pgScript - PostgreSQL Tools
// RCS-ID:      $Id: pgsDateTimeGen.h,v 1.2 2008/08/10 17:45:37 pgunittest Exp $
// Copyright (C) 2002 - 2008, The pgAdmin Development Team
// This software is released under the Artistic Licence
//
//////////////////////////////////////////////////////////////////////////


#ifndef PGSDATETIMEGEN_H_
#define PGSDATETIMEGEN_H_

#include "pgscript/pgScript.h"
#include <wx/datetime.h>
#include "pgscript/generators/pgsIntegerGen.h"

class pgsDateTimeGen : public pgsObjectGen
{
private:

	typedef pgsCopiedPtr<pgsIntegerGen> pgsRandomizer; // Needs a clone() method

	wxDateTime m_min;
	wxDateTime m_max;
	wxLongLong m_range;

	bool m_sequence;

	pgsRandomizer m_randomizer;

public:

	pgsDateTimeGen(wxDateTime min, wxDateTime max, const bool & sequence,
			const long & seed = wxDateTime::GetTimeNow());
	
	bool is_sequence() const;

	virtual wxString random();

	virtual ~pgsDateTimeGen();

	virtual pgsDateTimeGen * clone();

	/* pgsDateTimeGen & operator =(const pgsDateTimeGen & that); */

	/* pgsDateTimeGen(const pgsDateTimeGen & that); */

};

#endif /*PGSDATETIMEGEN_H_*/
