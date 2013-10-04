
#include "ImportStatement.hpp"
#include <xpand3/Xpand3Package.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3;

/*PROTECTED REGION ID(xpand3::ImportStatement include) START*/
/*PROTECTED REGION END*/

ImportStatement::ImportStatement() : 
	m_importedId(),
    m_exported()
{
	/*PROTECTED REGION ID(ImportStatement constructor) START*/
	/*PROTECTED REGION END*/
}

ImportStatement::~ImportStatement()
{
	/*PROTECTED REGION ID(ImportStatement destructor) START*/
	/*PROTECTED REGION END*/
}

ImportStatement::importedId_t ImportStatement::getImportedId() const
{
	return e4c::returned(m_importedId);
}


void ImportStatement::setImportedId(importedId_t importedId_)
{
	m_importedId.reset(importedId_);
}

ImportStatement::importedId_t ImportStatement::releaseImportedId()
{
	return m_importedId.release();
}

void ImportStatement::setExported(exported_t _exported)
{
	m_exported = _exported;;
}

ImportStatement::exported_t ImportStatement::getExported() const
{
	return m_exported;
}



/*PROTECTED REGION ID(xpand3::ImportStatement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ImportStatement::eClassImpl() const
{
	return Xpand3Package::_instance()->getImportStatement();
}
 
