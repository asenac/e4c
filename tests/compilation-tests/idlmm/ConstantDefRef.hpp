
#ifndef EMF_CPP_IDLMM_CONSTANTDEFREF__HPP
#define EMF_CPP_IDLMM_CONSTANTDEFREF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/LiteralExpression.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::ConstantDefRef
class ConstantDefRef :  public virtual ::idlmm::LiteralExpression
{
public:

	typedef ConstantDefRef_ptr ptr_type;
	
	ConstantDefRef();
	virtual ~ConstantDefRef();

	typedef idlmm::Constant_ptr constant_t;

	
	// TODO

	
protected:

	constant_t m_constant;

};

} // idlmm


#endif // EMF_CPP_IDLMM_CONSTANTDEFREF__HPP
