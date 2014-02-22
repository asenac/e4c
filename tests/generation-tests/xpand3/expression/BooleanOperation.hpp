
#ifndef EMF_CPP_XPAND3_EXPRESSION_BOOLEANOPERATION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_BOOLEANOPERATION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/BinaryOperation.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class BooleanOperation :  public virtual ::xpand3::expression::BinaryOperation
{
public:

    typedef BooleanOperation_ptr ptr_type;

    BooleanOperation();
    virtual ~BooleanOperation();




    /*PROTECTED REGION ID(xpand3::expression::BooleanOperation public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ExpressionPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::expression::BooleanOperation protected) START*/
    /*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_BOOLEANOPERATION__HPP
