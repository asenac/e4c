
#ifndef EMF_CPP_IDLMM_CONSTANTDEF__HPP
#define EMF_CPP_IDLMM_CONSTANTDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/Constant.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::ConstantDef
class ConstantDef :  public virtual ::idlmm::Contained,  public virtual ::idlmm::Typed,  public virtual ::idlmm::Constant
{
public:

	typedef ConstantDef_ptr ptr_type;
	
	ConstantDef();
	virtual ~ConstantDef();

	typedef std::unique_ptr < idlmm::Expression > constValue_t;

	
	// TODO

	
protected:

	constValue_t m_constValue;

};

} // idlmm


#endif // EMF_CPP_IDLMM_CONSTANTDEF__HPP
