
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


// xpand3::expression::ConstructorCallExpression
class ConstructorCallExpression :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef ConstructorCallExpression_ptr ptr_type;
	
	ConstructorCallExpression();
	virtual ~ConstructorCallExpression();

	typedef std::unique_ptr < xpand3::Identifier > type_t;

	
	// TODO

	
protected:

	type_t m_type;

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_CONSTRUCTORCALLEXPRESSION__HPP
