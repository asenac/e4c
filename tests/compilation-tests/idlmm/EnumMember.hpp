
#ifndef EMF_CPP_IDLMM_ENUMMEMBER__HPP
#define EMF_CPP_IDLMM_ENUMMEMBER__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Constant.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class EnumMember :  public virtual ::idlmm::Constant
{
public:

	typedef EnumMember_ptr ptr_type;
	
	EnumMember();
	virtual ~EnumMember();

	typedef idlmm::EnumDef_ptr enum_t;
	
	enum_t getEnum() const;
	

	/*PROTECTED REGION ID(idlmm::EnumMember public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class IdlmmPackage;

	idlmm::EnumDef_ptr m_enum;

	
	friend class ::idlmm::EnumDef;
	void setEnum(enum_t enum_);
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::EnumMember protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_ENUMMEMBER__HPP
