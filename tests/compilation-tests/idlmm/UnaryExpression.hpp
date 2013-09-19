
#ifndef EMF_CPP_IDLMM_UNARYEXPRESSION__HPP
#define EMF_CPP_IDLMM_UNARYEXPRESSION__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Expression.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::UnaryExpression
class UnaryExpression :  public virtual ::idlmm::Expression
{
public:

	typedef UnaryExpression_ptr ptr_type;
	
	UnaryExpression();
	virtual ~UnaryExpression();

	typedef std::unique_ptr < idlmm::Expression > expression_t;
	typedef int operator_t;

	
	// TODO
	void setOperator(operator_t _operator);
	operator_t getOperator() const;

	
protected:

	expression_t m_expression;
	operator_t m_operator;

};

} // idlmm


#endif // EMF_CPP_IDLMM_UNARYEXPRESSION__HPP
