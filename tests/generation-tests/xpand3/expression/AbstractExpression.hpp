
#ifndef EMF_CPP_XPAND3_EXPRESSION_ABSTRACTEXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_ABSTRACTEXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/SyntaxElement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class AbstractExpression :  public virtual ::xpand3::SyntaxElement
{
public:

    typedef AbstractExpression_ptr ptr_type;

    virtual ~AbstractExpression();




    /*PROTECTED REGION ID(xpand3::expression::AbstractExpression public) START*/
    /*PROTECTED REGION END*/

protected:
    AbstractExpression();

    friend class ExpressionPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::expression::AbstractExpression protected) START*/
    /*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_ABSTRACTEXPRESSION__HPP
