
#include "AbstractNamedDeclaration.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::declaration;

/*PROTECTED REGION ID(xpand3::declaration::AbstractNamedDeclaration include) START*/
/*PROTECTED REGION END*/

AbstractNamedDeclaration::AbstractNamedDeclaration() :
    m_name()
{
    /*PROTECTED REGION ID(AbstractNamedDeclaration constructor) START*/
    /*PROTECTED REGION END*/
}

AbstractNamedDeclaration::~AbstractNamedDeclaration()
{
    /*PROTECTED REGION ID(AbstractNamedDeclaration destructor) START*/
    /*PROTECTED REGION END*/
}

AbstractNamedDeclaration::name_t AbstractNamedDeclaration::getName() const
{
    return e4c::returned(m_name);
}


void AbstractNamedDeclaration::setName(name_t name_)
{
    m_name.reset(name_);
}

AbstractNamedDeclaration::name_t AbstractNamedDeclaration::releaseName()
{
    return m_name.release();
}



/*PROTECTED REGION ID(xpand3::declaration::AbstractNamedDeclaration implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractNamedDeclaration::eClassImpl() const
{
    return DeclarationPackage::_instance()->getAbstractNamedDeclaration();
}

