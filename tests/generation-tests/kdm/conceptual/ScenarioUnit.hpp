
#ifndef EMF_CPP_KDM_CONCEPTUAL_SCENARIOUNIT__HPP
#define EMF_CPP_KDM_CONCEPTUAL_SCENARIOUNIT__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/ConceptualContainer.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


class ScenarioUnit :  public virtual ::kdm::conceptual::ConceptualContainer
{
public:

	typedef ScenarioUnit_ptr ptr_type;
	
	ScenarioUnit();
	virtual ~ScenarioUnit();

	
	

	/*PROTECTED REGION ID(kdm::conceptual::ScenarioUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class ConceptualPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::conceptual::ScenarioUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_SCENARIOUNIT__HPP
