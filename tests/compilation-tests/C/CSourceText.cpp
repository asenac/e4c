
#include "CSourceText.hpp"
#include <C/CPackage.hpp>

using namespace C;

/*PROTECTED REGION ID(C::CSourceText include) START*/
/*PROTECTED REGION END*/

CSourceText::CSourceText() :
    m_source(),
    m_fileName()
{
    /*PROTECTED REGION ID(CSourceText constructor) START*/
    /*PROTECTED REGION END*/
}

CSourceText::~CSourceText()
{
    /*PROTECTED REGION ID(CSourceText destructor) START*/
    /*PROTECTED REGION END*/
}

void CSourceText::setSource(source_t _source)
{
    m_source = _source;;
}

CSourceText::source_t CSourceText::getSource() const
{
    return m_source;
}

void CSourceText::setFileName(fileName_t _fileName)
{
    m_fileName = _fileName;;
}

CSourceText::fileName_t CSourceText::getFileName() const
{
    return m_fileName;
}



/*PROTECTED REGION ID(C::CSourceText implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr CSourceText::eClassImpl() const
{
    return CPackage::_instance()->getCSourceText();
}

