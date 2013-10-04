
#ifndef EMF_CPP_XPAND3_EXPRESSION_CAST__HPP
#define EMF_CPP_XPAND3_EXPRESSION_CAST__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class Cast :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef Cast_ptr ptr_type;
	
	Cast();
	virtual ~Cast();

	typedef xpand3::Identifier_ptr type_t;
	typedef xpand3::expression::AbstractExpression_ptr target_t;
	
	type_t getType() const;
	void setType(type_t type_);
	type_t releaseType();
	target_t getTarget() const;
	void setTarget(target_t target_);
	target_t releaseTarget();
	

	/*PROTECTED REGION ID(xpand3::expression::Cast public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ExpressionPackage;

	std::unique_ptr < xpand3::Identifier > m_type;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_target;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::expression::Cast protected) START*/
	/*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_CAST__HPP
