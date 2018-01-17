/*
For general Scribus (>=1.3.2) copyright and licensing information please refer
to the COPYING file provided with the program. Following this notice may exist
a copyright and/or license notice that predates the release of Scribus 1.3.2
for which a new license (GPL+exception) is in place.
*/

#include "scciedata.h"

// Init the singleton's "self" address to NULL
ScCIEData* ScCIEData::m_instance = NULL;

// Singleton's public constructor
const ScCIEData& ScCIEData::instance()
{
	if (!ScCIEData::m_instance)
		ScCIEData::m_instance = new ScCIEData();
	return *ScCIEData::m_instance;
}

// Singleton's public destructor
void ScCIEData::destroy()
{
	if (ScCIEData::m_instance)
	{
		delete ScCIEData::m_instance;
		ScCIEData::m_instance = 0;
	}
}