
#ifndef EMF_CPP_JSON_BOOLEANVALUE__HPP
#define EMF_CPP_JSON_BOOLEANVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

namespace json
{


// json::BooleanValue
class BooleanValue :  public virtual ::json::Value
{
public:

	typedef BooleanValue_ptr ptr_type;

	BooleanValue();
	virtual ~BooleanValue();

	// Typedefs
	typedef ::e4c::impl::attribute< BooleanValue__value_tag > _value_t;

	
	// Members
	_value_t value;

};

} // json


#endif // EMF_CPP_JSON_BOOLEANVALUE__HPP
