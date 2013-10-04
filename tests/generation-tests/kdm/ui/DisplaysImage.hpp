
#ifndef EMF_CPP_KDM_UI_DISPLAYSIMAGE__HPP
#define EMF_CPP_KDM_UI_DISPLAYSIMAGE__HPP

#include <kdm/ui/fwd.hpp>
#include <kdm/ui/meta.hpp>
#include <kdm/ui/AbstractUIRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace ui
{


class DisplaysImage :  public virtual ::kdm::ui::AbstractUIRelationship
{
public:

	typedef DisplaysImage_ptr ptr_type;
	
	DisplaysImage();
	virtual ~DisplaysImage();

	typedef kdm::source::Image_ptr to_t;
	typedef kdm::action::ActionElement_ptr from_t;
	
	to_t getTo() const;
	void setTo(to_t to_);
	from_t getFrom() const;
	void setFrom(from_t from_);
	

	/*PROTECTED REGION ID(kdm::ui::DisplaysImage public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class UiPackage;

	kdm::source::Image_ptr m_to;
	kdm::action::ActionElement_ptr m_from;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::ui::DisplaysImage protected) START*/
	/*PROTECTED REGION END*/
};

} // ui
} // kdm


#endif // EMF_CPP_KDM_UI_DISPLAYSIMAGE__HPP
