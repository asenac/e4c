
#ifndef EMF_CPP_KDM_CORE_MODELELEMENT__HPP
#define EMF_CPP_KDM_CORE_MODELELEMENT__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>
#include <kdm/core/Element.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace core
{


// kdm::core::ModelElement
class ModelElement :  public virtual ::kdm::core::Element
{
public:

	typedef ModelElement_ptr ptr_type;
	
	virtual ~ModelElement();

	typedef std::vector < kdm::kdm::Stereotype_ptr > stereotype_t;
	typedef boost::ptr_set < kdm::kdm::ExtendedValue > taggedValue_t;

	
	// TODO
	// TODO

	
protected:
	ModelElement();

	stereotype_t m_stereotype;
	taggedValue_t m_taggedValue;

};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_MODELELEMENT__HPP
