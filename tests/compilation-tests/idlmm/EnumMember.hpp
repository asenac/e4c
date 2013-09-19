
#ifndef EMF_CPP_IDLMM_ENUMMEMBER__HPP
#define EMF_CPP_IDLMM_ENUMMEMBER__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Constant.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::EnumMember
class EnumMember :  public virtual ::idlmm::Constant
{
public:

	typedef EnumMember_ptr ptr_type;
	
	EnumMember();
	virtual ~EnumMember();

	typedef idlmm::EnumDef_ptr enum_t;

	
	// TODO

	
protected:

	enum_t m_enum;

};

} // idlmm


#endif // EMF_CPP_IDLMM_ENUMMEMBER__HPP
