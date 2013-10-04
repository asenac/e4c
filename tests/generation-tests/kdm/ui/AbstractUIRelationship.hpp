
#ifndef EMF_CPP_KDM_UI_ABSTRACTUIRELATIONSHIP__HPP
#define EMF_CPP_KDM_UI_ABSTRACTUIRELATIONSHIP__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class AbstractUIRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

	typedef AbstractUIRelationship_ptr ptr_type;
	
	virtual ~AbstractUIRelationship();

	
	

	/*PROTECTED REGION ID(kdm::ui::AbstractUIRelationship public) START*/
	/*PROTECTED REGION END*/
		
protected:
	AbstractUIRelationship();

	friend class UiPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::ui::AbstractUIRelationship protected) START*/
	/*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_ABSTRACTUIRELATIONSHIP__HPP
