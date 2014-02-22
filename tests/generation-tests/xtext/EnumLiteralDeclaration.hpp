
#ifndef EMF_CPP_XTEXT_ENUMLITERALDECLARATION__HPP
#define EMF_CPP_XTEXT_ENUMLITERALDECLARATION__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class EnumLiteralDeclaration :  public virtual ::xtext::AbstractElement
{
public:

    typedef EnumLiteralDeclaration_ptr ptr_type;

    EnumLiteralDeclaration();
    virtual ~EnumLiteralDeclaration();

    typedef ecore::EEnumLiteral_ptr enumLiteral_t;
    typedef xtext::Keyword_ptr literal_t;

    enumLiteral_t getEnumLiteral() const;
    void setEnumLiteral(enumLiteral_t enumLiteral_);
    literal_t getLiteral() const;
    void setLiteral(literal_t literal_);
    literal_t releaseLiteral();


    /*PROTECTED REGION ID(xtext::EnumLiteralDeclaration public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;

    ecore::EEnumLiteral_ptr m_enumLiteral;
    std::unique_ptr < xtext::Keyword > m_literal;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::EnumLiteralDeclaration protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_ENUMLITERALDECLARATION__HPP
