
#ifndef EMF_CPP_JSON_OBJECTVALUE__HPP
#define EMF_CPP_JSON_OBJECTVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

namespace json
{


// json::ObjectValue
class ObjectValue :  public virtual ::json::Value
{
public:

	typedef ObjectValue_ptr ptr_type;

	ObjectValue();
	virtual ~ObjectValue();

	// Typedefs
	typedef ::e4c::impl::reference< ObjectValue__members_tag > _members_t;

	
	// Members
	_members_t members;

};

} // json


#endif // EMF_CPP_JSON_OBJECTVALUE__HPP
