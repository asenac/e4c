
#ifndef EMF_CPP_KDM_CORE_ELEMENT__HPP
#define EMF_CPP_KDM_CORE_ELEMENT__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace core
{


// kdm::core::Element
class Element
{
public:

	typedef Element_ptr ptr_type;
	
	virtual ~Element();

	typedef boost::ptr_set < kdm::kdm::Attribute > attribute_t;
	typedef boost::ptr_set < kdm::kdm::Annotation > annotation_t;

	
	// TODO
	// TODO

	
protected:
	Element();

	attribute_t m_attribute;
	annotation_t m_annotation;

};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_ELEMENT__HPP
