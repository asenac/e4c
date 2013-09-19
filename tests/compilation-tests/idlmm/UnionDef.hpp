
#ifndef EMF_CPP_IDLMM_UNIONDEF__HPP
#define EMF_CPP_IDLMM_UNIONDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/TypedefDef.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::UnionDef
class UnionDef :  public virtual ::idlmm::TypedefDef
{
public:

	typedef UnionDef_ptr ptr_type;
	
	UnionDef();
	virtual ~UnionDef();

	typedef boost::ptr_vector < idlmm::UnionField > unionMembers_t;
	typedef std::unique_ptr < idlmm::IDLType > containedDiscrim_t;
	typedef idlmm::TypedefDef_ptr sharedDiscrim_t;

	
	// TODO
	// TODO
	// TODO

	
protected:

	unionMembers_t m_unionMembers;
	containedDiscrim_t m_containedDiscrim;
	sharedDiscrim_t m_sharedDiscrim;

};

} // idlmm


#endif // EMF_CPP_IDLMM_UNIONDEF__HPP
