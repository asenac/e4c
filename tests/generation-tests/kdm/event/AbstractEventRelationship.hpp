
#ifndef EMF_CPP_KDM_EVENT_ABSTRACTEVENTRELATIONSHIP__HPP
#define EMF_CPP_KDM_EVENT_ABSTRACTEVENTRELATIONSHIP__HPP

#include <kdm/event/fwd.hpp>
#include <kdm/event/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace event
{


class AbstractEventRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractEventRelationship_ptr ptr_type;
	
	virtual ~AbstractEventRelationship();

	
	

	/*PROTECTED REGION ID(kdm::event::AbstractEventRelationship public) START*/
	/*PROTECTED REGION END*/
		
protected:
	AbstractEventRelationship();

	friend class EventPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::event::AbstractEventRelationship protected) START*/
	/*PROTECTED REGION END*/
};

} // event
} // kdm


#endif // EMF_CPP_KDM_EVENT_ABSTRACTEVENTRELATIONSHIP__HPP
