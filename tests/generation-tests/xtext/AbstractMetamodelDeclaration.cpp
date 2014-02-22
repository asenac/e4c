
#include "AbstractMetamodelDeclaration.hpp"
#include <xtext/XtextPackage.hpp>
#include <ecore/EPackage.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::AbstractMetamodelDeclaration include) START*/
/*PROTECTED REGION END*/

AbstractMetamodelDeclaration::AbstractMetamodelDeclaration() :
    m_ePackage(),
    m_alias()
{
    /*PROTECTED REGION ID(AbstractMetamodelDeclaration constructor) START*/
    /*PROTECTED REGION END*/
}

AbstractMetamodelDeclaration::~AbstractMetamodelDeclaration()
{
    /*PROTECTED REGION ID(AbstractMetamodelDeclaration destructor) START*/
    /*PROTECTED REGION END*/
}

AbstractMetamodelDeclaration::ePackage_t AbstractMetamodelDeclaration::getEPackage() const
{
    return e4c::returned(m_ePackage);
}

void AbstractMetamodelDeclaration::setEPackage(ePackage_t ePackage_)
{
    if (m_ePackage == ePackage_)
        return;
    m_ePackage = ePackage_;
}

void AbstractMetamodelDeclaration::setAlias(alias_t _alias)
{
    m_alias = _alias;;
}

AbstractMetamodelDeclaration::alias_t AbstractMetamodelDeclaration::getAlias() const
{
    return m_alias;
}



/*PROTECTED REGION ID(xtext::AbstractMetamodelDeclaration implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractMetamodelDeclaration::eClassImpl() const
{
    return XtextPackage::_instance()->getAbstractMetamodelDeclaration();
}

