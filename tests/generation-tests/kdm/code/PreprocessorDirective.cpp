
#include "PreprocessorDirective.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::PreprocessorDirective include) START*/
/*PROTECTED REGION END*/

PreprocessorDirective::PreprocessorDirective() :
    m_codeElement()
{
    /*PROTECTED REGION ID(PreprocessorDirective constructor) START*/
    /*PROTECTED REGION END*/
}

PreprocessorDirective::~PreprocessorDirective()
{
    /*PROTECTED REGION ID(PreprocessorDirective destructor) START*/
    /*PROTECTED REGION END*/
}

PreprocessorDirective::codeElement_t PreprocessorDirective::getCodeElement() const
{
    return e4c::returned(m_codeElement);
}


void PreprocessorDirective::addCodeElement(kdm::code::AbstractCodeElement_ptr codeElement_)
{
    m_codeElement.insert(std::unique_ptr < kdm::code::AbstractCodeElement >(codeElement_));
}

void PreprocessorDirective::addAllCodeElement(const codeElement_t& codeElement_)
{
    for (auto i = codeElement_.begin(); i != codeElement_.end(); i++)
        addCodeElement(*i);
}



/*PROTECTED REGION ID(kdm::code::PreprocessorDirective implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr PreprocessorDirective::eClassImpl() const
{
    return CodePackage::_instance()->getPreprocessorDirective();
}

