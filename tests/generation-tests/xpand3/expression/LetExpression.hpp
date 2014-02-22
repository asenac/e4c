
#ifndef EMF_CPP_XPAND3_EXPRESSION_LETEXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_LETEXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class LetExpression :  public virtual ::xpand3::expression::AbstractExpression
{
public:

    typedef LetExpression_ptr ptr_type;

    LetExpression();
    virtual ~LetExpression();

    typedef xpand3::expression::AbstractExpression_ptr varExpression_t;
    typedef xpand3::expression::AbstractExpression_ptr targetExpression_t;
    typedef xpand3::Identifier_ptr varName_t;

    varExpression_t getVarExpression() const;
    void setVarExpression(varExpression_t varExpression_);
    varExpression_t releaseVarExpression();
    targetExpression_t getTargetExpression() const;
    void setTargetExpression(targetExpression_t targetExpression_);
    targetExpression_t releaseTargetExpression();
    varName_t getVarName() const;
    void setVarName(varName_t varName_);
    varName_t releaseVarName();


    /*PROTECTED REGION ID(xpand3::expression::LetExpression public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ExpressionPackage;

    std::unique_ptr < xpand3::expression::AbstractExpression > m_varExpression;
    std::unique_ptr < xpand3::expression::AbstractExpression > m_targetExpression;
    std::unique_ptr < xpand3::Identifier > m_varName;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::expression::LetExpression protected) START*/
    /*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_LETEXPRESSION__HPP
