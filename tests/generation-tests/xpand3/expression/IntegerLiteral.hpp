
#ifndef EMF_CPP_XPAND3_EXPRESSION_INTEGERLITERAL__HPP
#define EMF_CPP_XPAND3_EXPRESSION_INTEGERLITERAL__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/Literal.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class IntegerLiteral :  public virtual ::xpand3::expression::Literal
{
public:

    typedef IntegerLiteral_ptr ptr_type;

    IntegerLiteral();
    virtual ~IntegerLiteral();




    /*PROTECTED REGION ID(xpand3::expression::IntegerLiteral public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ExpressionPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::expression::IntegerLiteral protected) START*/
    /*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_INTEGERLITERAL__HPP
