
#include "AbstractDeclaration.hpp"
#include <xpand3/declaration/DeclarationPackage.hpp>
#include <xpand3/File.hpp>
#include <xpand3/DeclaredParameter.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::declaration;

/*PROTECTED REGION ID(xpand3::declaration::AbstractDeclaration include) START*/
/*PROTECTED REGION END*/

AbstractDeclaration::AbstractDeclaration() :
    m_owner(),
    m_params(),
    m_isPrivate(),
    m_guard()
{
    /*PROTECTED REGION ID(AbstractDeclaration constructor) START*/
    /*PROTECTED REGION END*/
}

AbstractDeclaration::~AbstractDeclaration()
{
    /*PROTECTED REGION ID(AbstractDeclaration destructor) START*/
    /*PROTECTED REGION END*/
}

AbstractDeclaration::owner_t AbstractDeclaration::getOwner() const
{
    return e4c::returned(m_owner);
}


void AbstractDeclaration::setOwner(owner_t owner_)
{
    m_owner.reset(owner_);
}

AbstractDeclaration::owner_t AbstractDeclaration::releaseOwner()
{
    return m_owner.release();
}

AbstractDeclaration::params_t AbstractDeclaration::getParams() const
{
    return e4c::returned(m_params);
}


void AbstractDeclaration::addParams(xpand3::DeclaredParameter_ptr params_)
{
    m_params.push_back(std::unique_ptr < xpand3::DeclaredParameter >(params_));
}

void AbstractDeclaration::addAllParams(const params_t& params_)
{
    for (auto i = params_.begin(); i != params_.end(); i++)
        addParams(*i);
}

void AbstractDeclaration::setIsPrivate(isPrivate_t _isPrivate)
{
    m_isPrivate = _isPrivate;;
}

AbstractDeclaration::isPrivate_t AbstractDeclaration::getIsPrivate() const
{
    return m_isPrivate;
}

AbstractDeclaration::guard_t AbstractDeclaration::getGuard() const
{
    return e4c::returned(m_guard);
}


void AbstractDeclaration::setGuard(guard_t guard_)
{
    m_guard.reset(guard_);
}

AbstractDeclaration::guard_t AbstractDeclaration::releaseGuard()
{
    return m_guard.release();
}



/*PROTECTED REGION ID(xpand3::declaration::AbstractDeclaration implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractDeclaration::eClassImpl() const
{
    return DeclarationPackage::_instance()->getAbstractDeclaration();
}

