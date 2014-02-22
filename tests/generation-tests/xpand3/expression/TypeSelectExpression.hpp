
#ifndef EMF_CPP_XPAND3_EXPRESSION_TYPESELECTEXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_TYPESELECTEXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/FeatureCall.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class TypeSelectExpression :  public virtual ::xpand3::expression::FeatureCall
{
public:

    typedef TypeSelectExpression_ptr ptr_type;

    TypeSelectExpression();
    virtual ~TypeSelectExpression();

    typedef xpand3::Identifier_ptr typeLiteral_t;

    typeLiteral_t getTypeLiteral() const;
    void setTypeLiteral(typeLiteral_t typeLiteral_);
    typeLiteral_t releaseTypeLiteral();


    /*PROTECTED REGION ID(xpand3::expression::TypeSelectExpression public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ExpressionPackage;

    std::unique_ptr < xpand3::Identifier > m_typeLiteral;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::expression::TypeSelectExpression protected) START*/
    /*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_TYPESELECTEXPRESSION__HPP
