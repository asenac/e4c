
#ifndef EMF_CPP_KDM_KDM_TAGGEDREF__HPP
#define EMF_CPP_KDM_KDM_TAGGEDREF__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/kdm/ExtendedValue.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


// kdm::kdm::TaggedRef
class TaggedRef :  public virtual ::kdm::kdm::ExtendedValue
{
public:

	typedef TaggedRef_ptr ptr_type;
	
	TaggedRef();
	virtual ~TaggedRef();

	typedef kdm::core::ModelElement_ptr reference_t;

	
	// TODO

	
protected:

	reference_t m_reference;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_TAGGEDREF__HPP
