
#ifndef EMF_CPP_KDM_KDM_ANNOTATION__HPP
#define EMF_CPP_KDM_KDM_ANNOTATION__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


class Annotation :  public virtual ::kdm::core::Element
{
public:

	typedef Annotation_ptr ptr_type;
	
	Annotation();
	virtual ~Annotation();

	typedef ::kdm::core::String text_t;
	
	void setText(text_t _text);
	text_t getText() const;
	

	/*PROTECTED REGION ID(kdm::kdm::Annotation public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class KdmPackage;

	text_t m_text;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::kdm::Annotation protected) START*/
	/*PROTECTED REGION END*/
};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_ANNOTATION__HPP
