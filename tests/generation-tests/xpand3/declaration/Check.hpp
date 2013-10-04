
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


class Check :  public virtual ::xpand3::declaration::AbstractDeclaration
{
public:

	typedef Check_ptr ptr_type;
	
	Check();
	virtual ~Check();

	typedef ::ecore::EBoolean errorSeverity_t;
	typedef xpand3::expression::AbstractExpression_ptr msg_t;
	typedef xpand3::expression::AbstractExpression_ptr constraint_t;
	typedef ::ecore::EString feature_t;
	
	void setErrorSeverity(errorSeverity_t _errorSeverity);
	errorSeverity_t getErrorSeverity() const;
	msg_t getMsg() const;
	void setMsg(msg_t msg_);
	msg_t releaseMsg();
	constraint_t getConstraint() const;
	void setConstraint(constraint_t constraint_);
	constraint_t releaseConstraint();
	void setFeature(feature_t _feature);
	feature_t getFeature() const;
	

	/*PROTECTED REGION ID(xpand3::declaration::Check public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DeclarationPackage;

	errorSeverity_t m_errorSeverity;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_msg;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_constraint;
	feature_t m_feature;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::declaration::Check protected) START*/
	/*PROTECTED REGION END*/
};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_CHECK__HPP
