
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


// xpand3::expression::LetExpression
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
	targetExpression_t getTargetExpression() const;
	varName_t getVarName() const;


	std::unique_ptr < xpand3::expression::AbstractExpression > m_varExpression;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_targetExpression;
	std::unique_ptr < xpand3::Identifier > m_varName;

		
protected:

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_LETEXPRESSION__HPP
