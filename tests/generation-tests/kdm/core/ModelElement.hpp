
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

	typedef std::set < kdm::kdm::Stereotype_ptr > stereotype_t;
	typedef std::set < kdm::kdm::ExtendedValue_ptr > taggedValue_t;

	
	stereotype_t getStereotype() const;
	taggedValue_t getTaggedValue() const;


	std::set < kdm::kdm::Stereotype_ptr > m_stereotype;
	std::set < std::unique_ptr < kdm::kdm::ExtendedValue > > m_taggedValue;

		
protected:
	ModelElement();

};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_MODELELEMENT__HPP
