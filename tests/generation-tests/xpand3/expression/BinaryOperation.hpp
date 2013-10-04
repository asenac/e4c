
#ifndef EMF_CPP_XPAND3_EXPRESSION_BINARYOPERATION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_BINARYOPERATION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class BinaryOperation :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef BinaryOperation_ptr ptr_type;
	
	BinaryOperation();
	virtual ~BinaryOperation();

	typedef xpand3::expression::AbstractExpression_ptr left_t;
	typedef xpand3::expression::AbstractExpression_ptr right_t;
	typedef xpand3::Identifier_ptr operator_t;
	
	left_t getLeft() const;
	void setLeft(left_t left_);
	left_t releaseLeft();
	right_t getRight() const;
	void setRight(right_t right_);
	right_t releaseRight();
	operator_t getOperator() const;
	void setOperator(operator_t operator_);
	operator_t releaseOperator();
	

	/*PROTECTED REGION ID(xpand3::expression::BinaryOperation public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ExpressionPackage;

	std::unique_ptr < xpand3::expression::AbstractExpression > m_left;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_right;
	std::unique_ptr < xpand3::Identifier > m_operator;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::expression::BinaryOperation protected) START*/
	/*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_BINARYOPERATION__HPP
