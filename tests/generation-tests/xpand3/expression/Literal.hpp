
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


class Literal :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef Literal_ptr ptr_type;
	
	virtual ~Literal();

	typedef xpand3::Identifier_ptr literalValue_t;
	
	literalValue_t getLiteralValue() const;
	void setLiteralValue(literalValue_t literalValue_);
	literalValue_t releaseLiteralValue();
	

	/*PROTECTED REGION ID(xpand3::expression::Literal public) START*/
	/*PROTECTED REGION END*/
		
protected:
	Literal();

	friend class ExpressionPackage;

	std::unique_ptr < xpand3::Identifier > m_literalValue;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::expression::Literal protected) START*/
	/*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_LITERAL__HPP
