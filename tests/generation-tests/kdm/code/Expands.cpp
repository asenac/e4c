
#include "Expands.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/PreprocessorDirective.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::Expands include) START*/
/*PROTECTED REGION END*/

Expands::Expands() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(Expands constructor) START*/
    /*PROTECTED REGION END*/
}

Expands::~Expands()
{
    /*PROTECTED REGION ID(Expands destructor) START*/
    /*PROTECTED REGION END*/
}

Expands::to_t Expands::getTo() const
{
    return e4c::returned(m_to);
}

void Expands::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

Expands::from_t Expands::getFrom() const
{
    return e4c::returned(m_from);
}

void Expands::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::Expands implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Expands::eClassImpl() const
{
    return CodePackage::_instance()->getExpands();
}

