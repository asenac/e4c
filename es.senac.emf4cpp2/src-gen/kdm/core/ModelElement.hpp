
#ifndef EMF_CPP_KDM_CORE_MODELELEMENT__HPP
#define EMF_CPP_KDM_CORE_MODELELEMENT__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>
#include <kdm/core/Element.hpp>


namespace kdm
{
namespace core
{


// kdm::core::ModelElement
class ModelElement :  public virtual ::kdm::core::Element
{
public:

	typedef ModelElement_ptr ptr_type;

	ModelElement();
	virtual ~ModelElement();

	// Typedefs
	typedef ::e4c::impl::reference< ModelElement__stereotype_tag > _stereotype_t;
	typedef ::e4c::impl::reference< ModelElement__taggedValue_tag > _taggedValue_t;

	
	// Members
	_stereotype_t stereotype;
	_taggedValue_t taggedValue;

};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_MODELELEMENT__HPP
