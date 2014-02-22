
#include "Extension.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>
#include <xpand3/Identifier.hpp>

using namespace xpand3::declaration;

/*PROTECTED REGION ID(xpand3::declaration::Extension include) START*/
/*PROTECTED REGION END*/

Extension::Extension() :
    m_cached(),
    m_body(),
    m_returnType()
{
    /*PROTECTED REGION ID(Extension constructor) START*/
    /*PROTECTED REGION END*/
}

Extension::~Extension()
{
    /*PROTECTED REGION ID(Extension destructor) START*/
    /*PROTECTED REGION END*/
}

void Extension::setCached(cached_t _cached)
{
    m_cached = _cached;;
}

Extension::cached_t Extension::getCached() const
{
    return m_cached;
}

Extension::body_t Extension::getBody() const
{
    return e4c::returned(m_body);
}


void Extension::setBody(body_t body_)
{
    m_body.reset(body_);
}

Extension::body_t Extension::releaseBody()
{
    return m_body.release();
}

Extension::returnType_t Extension::getReturnType() const
{
    return e4c::returned(m_returnType);
}


void Extension::setReturnType(returnType_t returnType_)
{
    m_returnType.reset(returnType_);
}

Extension::returnType_t Extension::releaseReturnType()
{
    return m_returnType.release();
}



/*PROTECTED REGION ID(xpand3::declaration::Extension implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Extension::eClassImpl() const
{
    return DeclarationPackage::_instance()->getExtension();
}

