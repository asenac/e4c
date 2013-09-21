
#ifndef EMF_CPP_XPAND3_EXPRESSION_FEATURECALL__HPP
#define EMF_CPP_XPAND3_EXPRESSION_FEATURECALL__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::FeatureCall
class FeatureCall :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef FeatureCall_ptr ptr_type;
	
	FeatureCall();
	virtual ~FeatureCall();

	typedef xpand3::expression::AbstractExpression_ptr target_t;
	typedef xpand3::Identifier_ptr name_t;

	
	target_t getTarget() const;
	name_t getName() const;


	std::unique_ptr < xpand3::expression::AbstractExpression > m_target;
	std::unique_ptr < xpand3::Identifier > m_name;

		
protected:

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_FEATURECALL__HPP
