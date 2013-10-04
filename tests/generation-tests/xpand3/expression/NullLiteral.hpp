
#ifndef EMF_CPP_XPAND3_EXPRESSION_NULLLITERAL__HPP
#define EMF_CPP_XPAND3_EXPRESSION_NULLLITERAL__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/Literal.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


class NullLiteral :  public virtual ::xpand3::expression::Literal
{
public:

	typedef NullLiteral_ptr ptr_type;
	
	NullLiteral();
	virtual ~NullLiteral();

	
	

	/*PROTECTED REGION ID(xpand3::expression::NullLiteral public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ExpressionPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::expression::NullLiteral protected) START*/
	/*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_NULLLITERAL__HPP
