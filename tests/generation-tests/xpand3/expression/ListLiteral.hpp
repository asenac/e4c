
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


class ListLiteral :  public virtual ::xpand3::expression::AbstractExpression
{
public:

	typedef ListLiteral_ptr ptr_type;
	
	ListLiteral();
	virtual ~ListLiteral();

	typedef std::vector < xpand3::expression::AbstractExpression_ptr > elements_t;
	
	elements_t getElements() const;
	void addElements(xpand3::expression::AbstractExpression_ptr elements_);
	void addAllElements(const elements_t& elements_);
	

	/*PROTECTED REGION ID(xpand3::expression::ListLiteral public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ExpressionPackage;

	std::vector < std::unique_ptr < xpand3::expression::AbstractExpression > > m_elements;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::expression::ListLiteral protected) START*/
	/*PROTECTED REGION END*/
};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_LISTLITERAL__HPP
