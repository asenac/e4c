
#include "AbstractMetamodelDeclaration.hpp"
#include <ecore/EPackage.hpp>

using namespace xtext;

AbstractMetamodelDeclaration::AbstractMetamodelDeclaration() : 
	m_ePackage(),
    m_alias()
{
}

AbstractMetamodelDeclaration::~AbstractMetamodelDeclaration()
{
}

AbstractMetamodelDeclaration::ePackage_t AbstractMetamodelDeclaration::getEPackage() const
{
	return e4c::returned(m_ePackage);
}

void AbstractMetamodelDeclaration::setAlias(alias_t _alias)
{
	m_alias = _alias;;
}

AbstractMetamodelDeclaration::alias_t AbstractMetamodelDeclaration::getAlias() const
{
	return m_alias;
}



