
#ifndef EMF_CPP_IDLMM_TYPED__HPP
#define EMF_CPP_IDLMM_TYPED__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class Typed :  public virtual ::idlmm::ModelElement
{
public:

	typedef Typed_ptr ptr_type;
	
	virtual ~Typed();

	typedef idlmm::IDLType_ptr containedType_t;
	typedef idlmm::TypedefDef_ptr sharedType_t;
	
	containedType_t getContainedType() const;
	void setContainedType(containedType_t containedType_);
	containedType_t releaseContainedType();
	sharedType_t getSharedType() const;
	
	void setSharedType(sharedType_t sharedType_);
	

	/*PROTECTED REGION ID(idlmm::Typed public) START*/
	/*PROTECTED REGION END*/
		
protected:
	Typed();

	friend class IdlmmPackage;

	std::unique_ptr < idlmm::IDLType > m_containedType;
	idlmm::TypedefDef_ptr m_sharedType;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::Typed protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_TYPED__HPP
