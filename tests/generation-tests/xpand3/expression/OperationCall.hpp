
#ifndef EMF_CPP_XPAND3_EXPRESSION_OPERATIONCALL__HPP
#define EMF_CPP_XPAND3_EXPRESSION_OPERATIONCALL__HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/expression/meta.hpp>
#include <xpand3/expression/FeatureCall.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace expression
{


// xpand3::expression::OperationCall
class OperationCall :  public virtual ::xpand3::expression::FeatureCall
{
public:

	typedef OperationCall_ptr ptr_type;
	
	OperationCall();
	virtual ~OperationCall();

	typedef std::vector < xpand3::expression::AbstractExpression_ptr > params_t;

	
	params_t getParams() const;


	std::vector < std::unique_ptr < xpand3::expression::AbstractExpression > > m_params;

		
protected:

};

} // expression
} // xpand3


#endif // EMF_CPP_XPAND3_EXPRESSION_OPERATIONCALL__HPP
