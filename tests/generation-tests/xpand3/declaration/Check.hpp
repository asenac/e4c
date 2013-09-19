
#ifndef EMF_CPP_XPAND3_DECLARATION_CHECK__HPP
#define EMF_CPP_XPAND3_DECLARATION_CHECK__HPP

#include <xpand3/declaration/fwd.hpp>
#include <xpand3/declaration/meta.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


// xpand3::declaration::Check
class Check :  public virtual ::xpand3::declaration::AbstractDeclaration
{
public:

	typedef Check_ptr ptr_type;
	
	Check();
	virtual ~Check();

	typedef int errorSeverity_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > msg_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > constraint_t;
	typedef int feature_t;

	
	void setErrorSeverity(errorSeverity_t _errorSeverity);
	errorSeverity_t getErrorSeverity() const;
	// TODO
	// TODO
	void setFeature(feature_t _feature);
	feature_t getFeature() const;

	
protected:

	errorSeverity_t m_errorSeverity;
	msg_t m_msg;
	constraint_t m_constraint;
	feature_t m_feature;

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_CHECK__HPP
