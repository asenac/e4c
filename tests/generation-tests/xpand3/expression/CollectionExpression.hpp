
#ifndef EMF_CPP_XPAND3_EXPRESSION_COLLECTIONEXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_COLLECTIONEXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/FeatureCall.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class CollectionExpression :  public virtual ::xpand3::expression::FeatureCall
{
public:

    typedef CollectionExpression_ptr ptr_type;

    CollectionExpression();
    virtual ~CollectionExpression();

    typedef xpand3::expression::AbstractExpression_ptr closure_t;
    typedef xpand3::Identifier_ptr eleName_t;

    closure_t getClosure() const;
    void setClosure(closure_t closure_);
    closure_t releaseClosure();
    eleName_t getEleName() const;
    void setEleName(eleName_t eleName_);
    eleName_t releaseEleName();


    /*PROTECTED REGION ID(xpand3::expression::CollectionExpression public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ExpressionPackage;

    std::unique_ptr < xpand3::expression::AbstractExpression > m_closure;
    std::unique_ptr < xpand3::Identifier > m_eleName;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::expression::CollectionExpression protected) START*/
    /*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_COLLECTIONEXPRESSION__HPP
