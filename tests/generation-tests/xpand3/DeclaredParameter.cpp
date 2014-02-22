
#include "DeclaredParameter.hpp"
#include <xpand3/Xpand3Package.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3;

/*PROTECTED REGION ID(xpand3::DeclaredParameter include) START*/
/*PROTECTED REGION END*/

DeclaredParameter::DeclaredParameter() :
    m_name(),
    m_type()
{
    /*PROTECTED REGION ID(DeclaredParameter constructor) START*/
    /*PROTECTED REGION END*/
}

DeclaredParameter::~DeclaredParameter()
{
    /*PROTECTED REGION ID(DeclaredParameter destructor) START*/
    /*PROTECTED REGION END*/
}

DeclaredParameter::name_t DeclaredParameter::getName() const
{
    return e4c::returned(m_name);
}


void DeclaredParameter::setName(name_t name_)
{
    m_name.reset(name_);
}

DeclaredParameter::name_t DeclaredParameter::releaseName()
{
    return m_name.release();
}

DeclaredParameter::type_t DeclaredParameter::getType() const
{
    return e4c::returned(m_type);
}


void DeclaredParameter::setType(type_t type_)
{
    m_type.reset(type_);
}

DeclaredParameter::type_t DeclaredParameter::releaseType()
{
    return m_type.release();
}



/*PROTECTED REGION ID(xpand3::DeclaredParameter implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr DeclaredParameter::eClassImpl() const
{
    return Xpand3Package::_instance()->getDeclaredParameter();
}

