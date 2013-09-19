
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


// xpand3::expression::Cast
class Cast :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef Cast_ptr ptr_type;
	
	Cast();
	virtual ~Cast();

	typedef std::unique_ptr < xpand3::Identifier > type_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > target_t;

	
	// TODO
	// TODO

	
protected:

	type_t m_type;
	target_t m_target;

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_CAST__HPP
