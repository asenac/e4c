
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

	typedef std::vector < json::NVPair_ptr > members_t;

	
	members_t getMembers() const;


	std::vector < std::unique_ptr < json::NVPair > > m_members;

		
protected:

};

} // json


#endif // EMF_CPP_JSON_OBJECTVALUE__HPP
