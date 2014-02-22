
#include "CodeModel.hpp"
#include <kdm/code/CodePackage.hpp>
#include <kdm/code/AbstractCodeElement.hpp>

using namespace kdm::code;

/*PROTECTED REGION ID(kdm::code::CodeModel include) START*/
/*PROTECTED REGION END*/

CodeModel::CodeModel() :
    m_codeElement()
{
    /*PROTECTED REGION ID(CodeModel constructor) START*/
    /*PROTECTED REGION END*/
}

CodeModel::~CodeModel()
{
    /*PROTECTED REGION ID(CodeModel destructor) START*/
    /*PROTECTED REGION END*/
}

CodeModel::codeElement_t CodeModel::getCodeElement() const
{
    return e4c::returned(m_codeElement);
}


void CodeModel::addCodeElement(kdm::code::AbstractCodeElement_ptr codeElement_)
{
    m_codeElement.insert(std::unique_ptr < kdm::code::AbstractCodeElement >(codeElement_));
}

void CodeModel::addAllCodeElement(const codeElement_t& codeElement_)
{
    for (auto i = codeElement_.begin(); i != codeElement_.end(); i++)
        addCodeElement(*i);
}



/*PROTECTED REGION ID(kdm::code::CodeModel implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CodeModel::eClassImpl() const
{
    return CodePackage::_instance()->getCodeModel();
}

