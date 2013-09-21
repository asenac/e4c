
#ifndef EMF_CPP_IDLMM_UNARYEXPRESSION__HPP
#define EMF_CPP_IDLMM_UNARYEXPRESSION__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Expression.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class UnaryExpression :  public virtual ::idlmm::Expression
{
public:

	typedef UnaryExpression_ptr ptr_type;
	
	UnaryExpression();
	virtual ~UnaryExpression();

	typedef idlmm::Expression_ptr expression_t;
	typedef ::ecore::EString operator_t;
	
	expression_t getExpression() const;
	void setExpression(expression_t expression_);
	expression_t releaseExpression();
	void setOperator(operator_t _operator);
	operator_t getOperator() const;
	
		
protected:

	friend class IdlmmPackage;

	std::unique_ptr < idlmm::Expression > m_expression;
	operator_t m_operator;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_UNARYEXPRESSION__HPP
