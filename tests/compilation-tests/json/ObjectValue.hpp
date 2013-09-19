
#ifndef EMF_CPP_JSON_OBJECTVALUE__HPP
#define EMF_CPP_JSON_OBJECTVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

#include <e4c/mapping.hpp>

namespace json
{


// json::ObjectValue
class ObjectValue :  public virtual ::json::Value
{
public:

	typedef ObjectValue_ptr ptr_type;
	
	ObjectValue();
	virtual ~ObjectValue();

	typedef boost::ptr_vector < json::NVPair > members_t;

	
	// TODO

	
protected:

	members_t m_members;

};

} // json


#endif // EMF_CPP_JSON_OBJECTVALUE__HPP
