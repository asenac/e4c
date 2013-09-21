
#ifndef EMF_CPP_IDLMM_MODELELEMENT__HPP
#define EMF_CPP_IDLMM_MODELELEMENT__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class ModelElement : ::ecore::EObject
{
public:

	typedef ModelElement_ptr ptr_type;
	
	virtual ~ModelElement();

	
	

	/*PROTECTED REGION ID(idlmm::ModelElement public) START*/
	/*PROTECTED REGION END*/
		
protected:
	ModelElement();

	friend class IdlmmPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::ModelElement protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_MODELELEMENT__HPP
