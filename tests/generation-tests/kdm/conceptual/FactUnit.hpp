
#ifndef EMF_CPP_KDM_CONCEPTUAL_FACTUNIT__HPP
#define EMF_CPP_KDM_CONCEPTUAL_FACTUNIT__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/ConceptualContainer.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


class FactUnit :  public virtual ::kdm::conceptual::ConceptualContainer
{
public:

	typedef FactUnit_ptr ptr_type;
	
	FactUnit();
	virtual ~FactUnit();

	
	

	/*PROTECTED REGION ID(kdm::conceptual::FactUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ConceptualPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::conceptual::FactUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_FACTUNIT__HPP
