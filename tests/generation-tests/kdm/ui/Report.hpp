
#ifndef EMF_CPP_KDM_UI_REPORT__HPP
#define EMF_CPP_KDM_UI_REPORT__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/UIDisplay.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class Report :  public virtual ::kdm::ui::UIDisplay
{
public:

	typedef Report_ptr ptr_type;
	
	Report();
	virtual ~Report();

	
	

	/*PROTECTED REGION ID(kdm::ui::Report public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class UiPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::ui::Report protected) START*/
	/*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_REPORT__HPP
