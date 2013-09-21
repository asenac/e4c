
#ifndef EMF_CPP_XPAND3_EXPRESSION_COLLECTIONEXPRESSION__HPP
#define EMF_CPP_XPAND3_EXPRESSION_COLLECTIONEXPRESSION__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/FeatureCall.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::CollectionExpression
class CollectionExpression :  public virtual ::xpand3::expression::FeatureCall
{
public:

	typedef CollectionExpression_ptr ptr_type;
	
	CollectionExpression();
	virtual ~CollectionExpression();

	typedef xpand3::expression::AbstractExpression_ptr closure_t;
	typedef xpand3::Identifier_ptr eleName_t;

	
	closure_t getClosure() const;
	eleName_t getEleName() const;


	std::unique_ptr < xpand3::expression::AbstractExpression > m_closure;
	std::unique_ptr < xpand3::Identifier > m_eleName;

		
protected:

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_COLLECTIONEXPRESSION__HPP
