
#ifndef EMF_CPP_JSON_STRINGVALUE__HPP
#define EMF_CPP_JSON_STRINGVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

namespace json
{


// json::StringValue
class StringValue :  public virtual ::json::Value
{
public:

	typedef StringValue_ptr ptr_type;

	StringValue();
	virtual ~StringValue();

	// Typedefs
	typedef ::e4c::impl::attribute< StringValue__value_tag > _value_t;

	
	// Members
	_value_t value;

};

} // json


#endif // EMF_CPP_JSON_STRINGVALUE__HPP
