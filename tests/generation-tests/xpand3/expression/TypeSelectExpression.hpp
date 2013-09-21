
#ifndef EMF_CPP_XPAND3_EXPRESSION_TYPESELECTEXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_TYPESELECTEXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/FeatureCall.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::TypeSelectExpression
class TypeSelectExpression :  public virtual ::xpand3::expression::FeatureCall
{
public:

	typedef TypeSelectExpression_ptr ptr_type;
	
	TypeSelectExpression();
	virtual ~TypeSelectExpression();

	typedef xpand3::Identifier_ptr typeLiteral_t;

	
	typeLiteral_t getTypeLiteral() const;


	std::unique_ptr < xpand3::Identifier > m_typeLiteral;

		
protected:

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_TYPESELECTEXPRESSION__HPP
