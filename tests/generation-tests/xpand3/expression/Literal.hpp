
#ifndef EMF_CPP_XPAND3_EXPRESSION_LITERAL__HPP
#define EMF_CPP_XPAND3_EXPRESSION_LITERAL__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::Literal
class Literal :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef Literal_ptr ptr_type;
	
	virtual ~Literal();

	typedef std::unique_ptr < xpand3::Identifier > literalValue_t;

	
	// TODO

	
protected:
	Literal();

	literalValue_t m_literalValue;

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_LITERAL__HPP
