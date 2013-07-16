
#ifndef EMF_CPP_JSON_NVPAIR__HPP
#define EMF_CPP_JSON_NVPAIR__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <ecore/EObject.hpp>

namespace json
{


// json::NVPair
class NVPair : public virtual ::ecore::EObject
{
public:

	typedef NVPair_ptr ptr_type;

	NVPair();
	virtual ~NVPair();

	// Typedefs
	typedef ::e4c::impl::attribute< NVPair__name_tag > _name_t;
	typedef ::e4c::impl::reference< NVPair__value_tag > _value_t;

	
	// Members
	_name_t name;
	_value_t value;

};

} // json


#endif // EMF_CPP_JSON_NVPAIR__HPP
