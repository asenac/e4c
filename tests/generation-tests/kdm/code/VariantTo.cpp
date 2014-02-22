
#include "VariantTo.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/PreprocessorDirective.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::VariantTo include) START*/
/*PROTECTED REGION END*/

VariantTo::VariantTo() :
    m_to(),
    m_from()
{
    /*PROTECTED REGION ID(VariantTo constructor) START*/
    /*PROTECTED REGION END*/
}

VariantTo::~VariantTo()
{
    /*PROTECTED REGION ID(VariantTo destructor) START*/
    /*PROTECTED REGION END*/
}

VariantTo::to_t VariantTo::getTo() const
{
    return e4c::returned(m_to);
}

void VariantTo::setTo(to_t to_)
{
    if (m_to == to_)
        return;
    m_to = to_;
}

VariantTo::from_t VariantTo::getFrom() const
{
    return e4c::returned(m_from);
}

void VariantTo::setFrom(from_t from_)
{
    if (m_from == from_)
        return;
    m_from = from_;
}



/*PROTECTED REGION ID(kdm::code::VariantTo implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr VariantTo::eClassImpl() const
{
    return CodePackage::_instance()->getVariantTo();
}

