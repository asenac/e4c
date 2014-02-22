
#include "AbstractRule.hpp"
#include <xtext/XtextPackage.hpp>
#include <xtext/TypeRef.hpp>
#include <xtext/AbstractElement.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::AbstractRule include) START*/
/*PROTECTED REGION END*/

AbstractRule::AbstractRule() :
    m_name(),
    m_type(),
    m_alternatives()
{
    /*PROTECTED REGION ID(AbstractRule constructor) START*/
    /*PROTECTED REGION END*/
}

AbstractRule::~AbstractRule()
{
    /*PROTECTED REGION ID(AbstractRule destructor) START*/
    /*PROTECTED REGION END*/
}

void AbstractRule::setName(name_t _name)
{
    m_name = _name;;
}

AbstractRule::name_t AbstractRule::getName() const
{
    return m_name;
}

AbstractRule::type_t AbstractRule::getType() const
{
    return e4c::returned(m_type);
}


void AbstractRule::setType(type_t type_)
{
    m_type.reset(type_);
}

AbstractRule::type_t AbstractRule::releaseType()
{
    return m_type.release();
}

AbstractRule::alternatives_t AbstractRule::getAlternatives() const
{
    return e4c::returned(m_alternatives);
}


void AbstractRule::setAlternatives(alternatives_t alternatives_)
{
    m_alternatives.reset(alternatives_);
}

AbstractRule::alternatives_t AbstractRule::releaseAlternatives()
{
    return m_alternatives.release();
}



/*PROTECTED REGION ID(xtext::AbstractRule implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr AbstractRule::eClassImpl() const
{
    return XtextPackage::_instance()->getAbstractRule();
}

