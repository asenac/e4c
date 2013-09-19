
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

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > closure_t;
	typedef std::unique_ptr < xpand3::Identifier > eleName_t;

	
	// TODO
	// TODO

	
protected:

	closure_t m_closure;
	eleName_t m_eleName;

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_COLLECTIONEXPRESSION__HPP
