
#ifndef EMF_CPP_IDLMM_FORWARDDEF__HPP
#define EMF_CPP_IDLMM_FORWARDDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Contained.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class ForwardDef :  public virtual ::idlmm::Contained
{
public:

	typedef ForwardDef_ptr ptr_type;
	
	ForwardDef();
	virtual ~ForwardDef();

	typedef idlmm::InterfaceDef_ptr definition_t;
	
	definition_t getDefinition() const;
	
	void setDefinition(definition_t definition_);
	

	/*PROTECTED REGION ID(idlmm::ForwardDef public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class IdlmmPackage;

	idlmm::InterfaceDef_ptr m_definition;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::ForwardDef protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_FORWARDDEF__HPP
