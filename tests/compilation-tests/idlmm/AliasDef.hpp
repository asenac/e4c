#ifndef EMF_CPP_IDLMM_ALIASDEF__HPP
#define EMF_CPP_IDLMM_ALIASDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/TypedefDef.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class AliasDef :  public virtual ::idlmm::Typed,  public virtual ::idlmm::TypedefDef
{
public:

	typedef AliasDef_ptr ptr_type;
	
	AliasDef();
	virtual ~AliasDef();

	
	

	/*PROTECTED REGION ID(idlmm::AliasDef public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class IdlmmPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::AliasDef protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_ALIASDEF__HPP
