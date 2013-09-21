
#include "AbstractDeclaration.hpp"
#include <xpand3/File.hpp>
#include <xpand3/DeclaredParameter.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::declaration;

AbstractDeclaration::AbstractDeclaration() : 
	m_owner(),
    m_params(),
    m_isPrivate(),
    m_guard()
{
}

AbstractDeclaration::~AbstractDeclaration()
{
}

AbstractDeclaration::owner_t AbstractDeclaration::getOwner() const
{
	return e4c::returned(m_owner);
}

AbstractDeclaration::params_t AbstractDeclaration::getParams() const
{
	return e4c::returned(m_params);
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



