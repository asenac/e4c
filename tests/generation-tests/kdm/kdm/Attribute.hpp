
#ifndef EMF_CPP_KDM_KDM_ATTRIBUTE__HPP
#define EMF_CPP_KDM_KDM_ATTRIBUTE__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/core/Element.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


// kdm::kdm::Attribute
class Attribute :  public virtual ::kdm::core::Element
{
public:

	typedef Attribute_ptr ptr_type;
	
	Attribute();
	virtual ~Attribute();

	typedef ::kdm::core::String tag_t;
	typedef ::kdm::core::String value_t;

	
	void setTag(tag_t _tag);
	tag_t getTag() const;
	void setValue(value_t _value);
	value_t getValue() const;


	tag_t m_tag;
	value_t m_value;

		
protected:

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_ATTRIBUTE__HPP
