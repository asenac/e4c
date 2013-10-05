#ifndef EMF_CPP_IDLMM_VALUEEXPRESSION__HPP
#define EMF_CPP_IDLMM_VALUEEXPRESSION__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/LiteralExpression.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class ValueExpression :  public virtual ::idlmm::LiteralExpression
{
public:

	typedef ValueExpression_ptr ptr_type;
	
	ValueExpression();
	virtual ~ValueExpression();

	typedef ::ecore::EString value_t;
	
	void setValue(value_t _value);
	value_t getValue() const;
	

	/*PROTECTED REGION ID(idlmm::ValueExpression public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class IdlmmPackage;

	value_t m_value;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::ValueExpression protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_VALUEEXPRESSION__HPP
