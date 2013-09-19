
#ifndef EMF_CPP_IDLMM_BINARYEXPRESSION__HPP
#define EMF_CPP_IDLMM_BINARYEXPRESSION__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Expression.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::BinaryExpression
class BinaryExpression :  public virtual ::idlmm::Expression
{
public:

	typedef BinaryExpression_ptr ptr_type;
	
	BinaryExpression();
	virtual ~BinaryExpression();

	typedef std::unique_ptr < idlmm::Expression > left_t;
	typedef std::unique_ptr < idlmm::Expression > right_t;
	typedef int operator_t;

	
	// TODO
	// TODO
	void setOperator(operator_t _operator);
	operator_t getOperator() const;

	
protected:

	left_t m_left;
	right_t m_right;
	operator_t m_operator;

};

} // idlmm


#endif // EMF_CPP_IDLMM_BINARYEXPRESSION__HPP
