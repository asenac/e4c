
#include "EnumLiteralDeclaration.hpp"
#include <xtext/XtextPackage.hpp>
#include <ecore/EEnumLiteral.hpp>
#include <xtext/Keyword.hpp>

using namespace xtext;

/*PROTECTED REGION ID(xtext::EnumLiteralDeclaration include) START*/
/*PROTECTED REGION END*/

EnumLiteralDeclaration::EnumLiteralDeclaration() :
    m_enumLiteral(),
    m_literal()
{
    /*PROTECTED REGION ID(EnumLiteralDeclaration constructor) START*/
    /*PROTECTED REGION END*/
}

EnumLiteralDeclaration::~EnumLiteralDeclaration()
{
    /*PROTECTED REGION ID(EnumLiteralDeclaration destructor) START*/
    /*PROTECTED REGION END*/
}

EnumLiteralDeclaration::enumLiteral_t EnumLiteralDeclaration::getEnumLiteral() const
{
    return e4c::returned(m_enumLiteral);
}

void EnumLiteralDeclaration::setEnumLiteral(enumLiteral_t enumLiteral_)
{
    if (m_enumLiteral == enumLiteral_)
        return;
    m_enumLiteral = enumLiteral_;
}

EnumLiteralDeclaration::literal_t EnumLiteralDeclaration::getLiteral() const
{
    return e4c::returned(m_literal);
}


void EnumLiteralDeclaration::setLiteral(literal_t literal_)
{
    m_literal.reset(literal_);
}

EnumLiteralDeclaration::literal_t EnumLiteralDeclaration::releaseLiteral()
{
    return m_literal.release();
}



/*PROTECTED REGION ID(xtext::EnumLiteralDeclaration implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr EnumLiteralDeclaration::eClassImpl() const
{
    return XtextPackage::_instance()->getEnumLiteralDeclaration();
}

