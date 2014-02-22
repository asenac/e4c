
#ifndef EMF_CPP_XPAND3_EXPRESSION_GLOBALVAREXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_GLOBALVAREXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class GlobalVarExpression :  public virtual ::xpand3::expression::AbstractExpression
{
public:

    typedef GlobalVarExpression_ptr ptr_type;

    GlobalVarExpression();
    virtual ~GlobalVarExpression();

    typedef xpand3::Identifier_ptr globalVarName_t;

    globalVarName_t getGlobalVarName() const;
    void setGlobalVarName(globalVarName_t globalVarName_);
    globalVarName_t releaseGlobalVarName();


    /*PROTECTED REGION ID(xpand3::expression::GlobalVarExpression public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ExpressionPackage;

    std::unique_ptr < xpand3::Identifier > m_globalVarName;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::expression::GlobalVarExpression protected) START*/
    /*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_GLOBALVAREXPRESSION__HPP
