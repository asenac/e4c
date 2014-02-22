
#include "TemplateUnit.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::TemplateUnit include) START*/
/*PROTECTED REGION END*/

TemplateUnit::TemplateUnit() :
    m_codeElement()
{
    /*PROTECTED REGION ID(TemplateUnit constructor) START*/
    /*PROTECTED REGION END*/
}

TemplateUnit::~TemplateUnit()
{
    /*PROTECTED REGION ID(TemplateUnit destructor) START*/
    /*PROTECTED REGION END*/
}

TemplateUnit::codeElement_t TemplateUnit::getCodeElement() const
{
    return e4c::returned(m_codeElement);
}


void TemplateUnit::addCodeElement(kdm::code::CodeItem_ptr codeElement_)
{
    m_codeElement.push_back(std::unique_ptr < kdm::code::CodeItem >(codeElement_));
}

void TemplateUnit::addAllCodeElement(const codeElement_t& codeElement_)
{
    for (auto i = codeElement_.begin(); i != codeElement_.end(); i++)
        addCodeElement(*i);
}



/*PROTECTED REGION ID(kdm::code::TemplateUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr TemplateUnit::eClassImpl() const
{
    return CodePackage::_instance()->getTemplateUnit();
}

