
#ifndef EMF_CPP_JSON_ARRAYVALUE__HPP
#define EMF_CPP_JSON_ARRAYVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

namespace json
{


// json::ArrayValue
class ArrayValue :  public virtual ::json::Value
{
public:

	typedef ArrayValue_ptr ptr_type;

	ArrayValue();
	virtual ~ArrayValue();

	// Typedefs
	typedef ::e4c::impl::reference< ArrayValue__values_tag > _values_t;

	
	// Members
	_values_t values;

};

} // json


#endif // EMF_CPP_JSON_ARRAYVALUE__HPP
