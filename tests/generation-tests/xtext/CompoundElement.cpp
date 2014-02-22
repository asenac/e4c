
#include "CompoundElement.hpp"
#include <xtext/XtextPackage.hpp>
#include <xtext/AbstractElement.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::CompoundElement include) START*/
/*PROTECTED REGION END*/

CompoundElement::CompoundElement() :
    m_elements()
{
    /*PROTECTED REGION ID(CompoundElement constructor) START*/
    /*PROTECTED REGION END*/
}

CompoundElement::~CompoundElement()
{
    /*PROTECTED REGION ID(CompoundElement destructor) START*/
    /*PROTECTED REGION END*/
}

CompoundElement::elements_t CompoundElement::getElements() const
{
    return e4c::returned(m_elements);
}


void CompoundElement::addElements(xtext::AbstractElement_ptr elements_)
{
    m_elements.push_back(std::unique_ptr < xtext::AbstractElement >(elements_));
}

void CompoundElement::addAllElements(const elements_t& elements_)
{
    for (auto i = elements_.begin(); i != elements_.end(); i++)
        addElements(*i);
}



/*PROTECTED REGION ID(xtext::CompoundElement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CompoundElement::eClassImpl() const
{
    return XtextPackage::_instance()->getCompoundElement();
}

