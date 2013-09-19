
#ifndef EMF_CPP_XPAND3_EXPRESSION_ABSTRACTEXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_ABSTRACTEXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/SyntaxElement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::AbstractExpression
class AbstractExpression :  public virtual ::xpand3::SyntaxElement
{
public:

	typedef AbstractExpression_ptr ptr_type;
	
	virtual ~AbstractExpression();

	
	
	
	
protected:
	AbstractExpression();

	
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_ABSTRACTEXPRESSION__HPP
