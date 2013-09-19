
#ifndef EMF_CPP_IDLMM_ENUMDEF__HPP
#define EMF_CPP_IDLMM_ENUMDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/TypedefDef.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::EnumDef
class EnumDef :  public virtual ::idlmm::TypedefDef
{
public:

	typedef EnumDef_ptr ptr_type;
	
	EnumDef();
	virtual ~EnumDef();

	typedef boost::ptr_vector < idlmm::EnumMember > members_t;

	
	// TODO

	
protected:

	members_t m_members;

};

} // idlmm


#endif // EMF_CPP_IDLMM_ENUMDEF__HPP
