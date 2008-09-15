#######################################################################
#
# pgAdmin III - PostgreSQL Tools
# $Id: pgadmin.sh,v 1.6 2008/07/27 16:25:05 pgunittest Exp $
# Copyright (C) 2002 - 2008, The pgAdmin Development Team
# This software is released under the Artistic Licence
#
# module.mk - pgadmin/include/pgscript/utilities/mapm-lib/ Makefile fragment
#
#######################################################################

pgadmin3_SOURCES += \
	$(srcdir)/include/pgscript/utilities/mapm-lib/m_apm.h \
	$(srcdir)/include/pgscript/utilities/mapm-lib/m_apm_lc.h

EXTRA_DIST += \
	$(srcdir)/include/pgscript/utilities/mapm-lib/module.mk \
	$(srcdir)/include/pgscript/utilities/mapm-lib/license.txt
