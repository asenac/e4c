
#ifndef EMF_CPP_JSON_NUMBERVALUE__HPP
#define EMF_CPP_JSON_NUMBERVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

namespace json
{


// json::NumberValue
class NumberValue :  public virtual ::json::Value
{
public:

	typedef NumberValue_ptr ptr_type;

	NumberValue();
	virtual ~NumberValue();

	// Typedefs
	typedef ::e4c::impl::attribute< NumberValue__value_tag > _value_t;

	
	// Members
	_value_t value;

};

} // json


#endif // EMF_CPP_JSON_NUMBERVALUE__HPP
