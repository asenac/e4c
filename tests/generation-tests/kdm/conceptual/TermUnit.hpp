
#ifndef EMF_CPP_KDM_CONCEPTUAL_TERMUNIT__HPP
#define EMF_CPP_KDM_CONCEPTUAL_TERMUNIT__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


class TermUnit :  public virtual ::kdm::conceptual::AbstractConceptualElement
{
public:

	typedef TermUnit_ptr ptr_type;
	
	TermUnit();
	virtual ~TermUnit();

	
	

	/*PROTECTED REGION ID(kdm::conceptual::TermUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ConceptualPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::conceptual::TermUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_TERMUNIT__HPP
