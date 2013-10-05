#ifndef EMF_CPP_IDLMM_EXPRESSION__HPP
#define EMF_CPP_IDLMM_EXPRESSION__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class Expression :  public virtual ::idlmm::ModelElement
{
public:

	typedef Expression_ptr ptr_type;
	
	virtual ~Expression();

	
	

	/*PROTECTED REGION ID(idlmm::Expression public) START*/
	/*PROTECTED REGION END*/
		
protected:
	Expression();

	friend class IdlmmPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::Expression protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_EXPRESSION__HPP
