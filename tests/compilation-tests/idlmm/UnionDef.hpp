#ifndef EMF_CPP_IDLMM_UNIONDEF__HPP
#define EMF_CPP_IDLMM_UNIONDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/TypedefDef.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class UnionDef :  public virtual ::idlmm::TypedefDef
{
public:

	typedef UnionDef_ptr ptr_type;
	
	UnionDef();
	virtual ~UnionDef();

	typedef std::vector < idlmm::UnionField_ptr > unionMembers_t;
	typedef idlmm::IDLType_ptr containedDiscrim_t;
	typedef idlmm::TypedefDef_ptr sharedDiscrim_t;
	
	unionMembers_t getUnionMembers() const;
	void addUnionMembers(idlmm::UnionField_ptr unionMembers_);
	void addAllUnionMembers(const unionMembers_t& unionMembers_);
	void removeUnionMembers(idlmm::UnionField_ptr unionMembers_);
	void clearUnionMembers();
	containedDiscrim_t getContainedDiscrim() const;
	void setContainedDiscrim(containedDiscrim_t containedDiscrim_);
	containedDiscrim_t releaseContainedDiscrim();
	sharedDiscrim_t getSharedDiscrim() const;
	void setSharedDiscrim(sharedDiscrim_t sharedDiscrim_);
	

	/*PROTECTED REGION ID(idlmm::UnionDef public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class IdlmmPackage;

	std::vector < std::unique_ptr < idlmm::UnionField > > m_unionMembers;
	std::unique_ptr < idlmm::IDLType > m_containedDiscrim;
	idlmm::TypedefDef_ptr m_sharedDiscrim;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::UnionDef protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_UNIONDEF__HPP
