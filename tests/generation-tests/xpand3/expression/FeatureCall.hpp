
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

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > target_t;
	typedef std::unique_ptr < xpand3::Identifier > name_t;

	
	// TODO
	// TODO

	
protected:

	target_t m_target;
	name_t m_name;

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_FEATURECALL__HPP
