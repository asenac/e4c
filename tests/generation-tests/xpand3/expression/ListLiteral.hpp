
#ifndef EMF_CPP_XPAND3_EXPRESSION_LISTLITERAL__HPP
#define EMF_CPP_XPAND3_EXPRESSION_LISTLITERAL__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::ListLiteral
class ListLiteral :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef ListLiteral_ptr ptr_type;
	
	ListLiteral();
	virtual ~ListLiteral();

	typedef boost::ptr_vector < xpand3::expression::AbstractExpression > elements_t;

	
	// TODO

	
protected:

	elements_t m_elements;

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_LISTLITERAL__HPP
