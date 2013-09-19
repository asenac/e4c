
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

void AbstractMetamodelDeclaration::setAlias(alias_t _alias)
{
	m_alias = _alias;;
}

alias_t AbstractMetamodelDeclaration::getAlias() const
{
	return m_alias;
}



