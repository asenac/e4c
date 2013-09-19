
#ifndef EMF_CPP_KDM_KDM_TAGGEDVALUE__HPP
#define EMF_CPP_KDM_KDM_TAGGEDVALUE__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/kdm/ExtendedValue.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


// kdm::kdm::TaggedValue
class TaggedValue :  public virtual ::kdm::kdm::ExtendedValue
{
public:

	typedef TaggedValue_ptr ptr_type;
	
	TaggedValue();
	virtual ~TaggedValue();

	typedef int value_t;

	
	void setValue(value_t _value);
	value_t getValue() const;

	
protected:

	value_t m_value;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_TAGGEDVALUE__HPP
