
#ifndef EMF_CPP_IDLMM_STRUCTDEF__HPP
#define EMF_CPP_IDLMM_STRUCTDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/TypedefDef.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class StructDef :  public virtual ::idlmm::TypedefDef
{
public:

	typedef StructDef_ptr ptr_type;
	
	StructDef();
	virtual ~StructDef();

	typedef std::vector < idlmm::Field_ptr > members_t;

	
	members_t getMembers() const;
	void addMembers(idlmm::Field_ptr members_);
	void addAllMembers(const members_t& members_);

		
protected:

	std::vector < std::unique_ptr < idlmm::Field > > m_members;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_STRUCTDEF__HPP
