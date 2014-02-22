
#include "Redefines.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/PreprocessorDirective.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::Redefines include) START*/
/*PROTECTED REGION END*/

Redefines::Redefines() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(Redefines constructor) START*/
    /*PROTECTED REGION END*/
}

Redefines::~Redefines()
{
    /*PROTECTED REGION ID(Redefines destructor) START*/
    /*PROTECTED REGION END*/
}

Redefines::to_t Redefines::getTo() const
{
    return e4c::returned(m_to);
}

void Redefines::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

Redefines::from_t Redefines::getFrom() const
{
    return e4c::returned(m_from);
}

void Redefines::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::Redefines implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr Redefines::eClassImpl() const
{
    return CodePackage::_instance()->getRedefines();
}

