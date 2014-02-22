
#include "ClassUnit.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/CodeItem.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::ClassUnit include) START*/
/*PROTECTED REGION END*/

ClassUnit::ClassUnit() :
    m_isAbstract(),
    m_codeElement()
{
    /*PROTECTED REGION ID(ClassUnit constructor) START*/
    /*PROTECTED REGION END*/
}

ClassUnit::~ClassUnit()
{
    /*PROTECTED REGION ID(ClassUnit destructor) START*/
    /*PROTECTED REGION END*/
}

void ClassUnit::setIsAbstract(isAbstract_t _isAbstract)
{
    m_isAbstract = _isAbstract;;
}

ClassUnit::isAbstract_t ClassUnit::getIsAbstract() const
{
    return m_isAbstract;
}

ClassUnit::codeElement_t ClassUnit::getCodeElement() const
{
    return e4c::returned(m_codeElement);
}


void ClassUnit::addCodeElement(kdm::code::CodeItem_ptr codeElement_)
{
    m_codeElement.push_back(std::unique_ptr < kdm::code::CodeItem >(codeElement_));
}

void ClassUnit::addAllCodeElement(const codeElement_t& codeElement_)
{
    for (auto i = codeElement_.begin(); i != codeElement_.end(); i++)
        addCodeElement(*i);
}



/*PROTECTED REGION ID(kdm::code::ClassUnit implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ClassUnit::eClassImpl() const
{
    return CodePackage::_instance()->getClassUnit();
}

