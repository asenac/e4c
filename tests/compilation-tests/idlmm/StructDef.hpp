
#ifndef EMF_CPP_IDLMM_STRUCTDEF__HPP
#define EMF_CPP_IDLMM_STRUCTDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/TypedefDef.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::StructDef
class StructDef :  public virtual ::idlmm::TypedefDef
{
public:

	typedef StructDef_ptr ptr_type;
	
	StructDef();
	virtual ~StructDef();

	typedef boost::ptr_vector < idlmm::Field > members_t;

	
	// TODO

	
protected:

	members_t m_members;

};

} // idlmm


#endif // EMF_CPP_IDLMM_STRUCTDEF__HPP
