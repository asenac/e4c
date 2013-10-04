
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


class TaggedValue :  public virtual ::kdm::kdm::ExtendedValue
{
public:

	typedef TaggedValue_ptr ptr_type;
	
	TaggedValue();
	virtual ~TaggedValue();

	typedef ::kdm::core::String value_t;
	
	void setValue(value_t _value);
	value_t getValue() const;
	

	/*PROTECTED REGION ID(kdm::kdm::TaggedValue public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class KdmPackage;

	value_t m_value;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::kdm::TaggedValue protected) START*/
	/*PROTECTED REGION END*/
};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_TAGGEDVALUE__HPP
