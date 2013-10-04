
#include "Import.hpp"
#include <myDsl/MyDslPackage.hpp>

using namespace myDsl;

/*PROTECTED REGION ID(myDsl::Import include) START*/
/*PROTECTED REGION END*/

Import::Import() : 
	m_importURI()
{
	/*PROTECTED REGION ID(Import constructor) START*/
	/*PROTECTED REGION END*/
}

Import::~Import()
{
	/*PROTECTED REGION ID(Import destructor) START*/
	/*PROTECTED REGION END*/
}

void Import::setImportURI(importURI_t _importURI)
{
	m_importURI = _importURI;;
}

Import::importURI_t Import::getImportURI() const
{
	return m_importURI;
}



/*PROTECTED REGION ID(myDsl::Import implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Import::eClassImpl() const
{
	return MyDslPackage::_instance()->getImport();
}
 
