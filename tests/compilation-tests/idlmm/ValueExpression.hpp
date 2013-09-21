
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

		
protected:

	value_t m_value;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_VALUEEXPRESSION__HPP
