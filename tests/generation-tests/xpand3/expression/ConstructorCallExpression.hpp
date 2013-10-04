
#ifndef EMF_CPP_XPAND3_EXPRESSION_CONSTRUCTORCALLEXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_CONSTRUCTORCALLEXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class ConstructorCallExpression :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef ConstructorCallExpression_ptr ptr_type;
	
	ConstructorCallExpression();
	virtual ~ConstructorCallExpression();

	typedef xpand3::Identifier_ptr type_t;
	
	type_t getType() const;
	void setType(type_t type_);
	type_t releaseType();
	

	/*PROTECTED REGION ID(xpand3::expression::ConstructorCallExpression public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ExpressionPackage;

	std::unique_ptr < xpand3::Identifier > m_type;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::expression::ConstructorCallExpression protected) START*/
	/*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_CONSTRUCTORCALLEXPRESSION__HPP
