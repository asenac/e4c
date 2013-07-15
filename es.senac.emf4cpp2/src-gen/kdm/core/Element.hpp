
#ifndef EMF_CPP_KDM_CORE_ELEMENT__HPP
#define EMF_CPP_KDM_CORE_ELEMENT__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>


namespace kdm
{
namespace core
{


// kdm::core::Element
class Element
{
public:

	typedef Element_ptr ptr_type;

	Element();
	virtual ~Element();

	// Typedefs
	typedef ::e4c::impl::reference< Element__attribute_tag > _attribute_t;
	typedef ::e4c::impl::reference< Element__annotation_tag > _annotation_t;

	
	// Members
	_attribute_t attribute;
	_annotation_t annotation;

};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_ELEMENT__HPP
