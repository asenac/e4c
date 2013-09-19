
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

void AbstractDeclaration::setIsPrivate(isPrivate_t _isPrivate)
{
	m_isPrivate = _isPrivate;;
}

isPrivate_t AbstractDeclaration::getIsPrivate() const
{
	return m_isPrivate;
}



