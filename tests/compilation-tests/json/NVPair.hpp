
#ifndef EMF_CPP_JSON_NVPAIR__HPP
#define EMF_CPP_JSON_NVPAIR__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace json
{


// json::NVPair
class NVPair
{
public:

	typedef NVPair_ptr ptr_type;
	
	NVPair();
	virtual ~NVPair();

	typedef int name_t;
	typedef std::unique_ptr < json::Value > value_t;

	
	void setName(name_t _name);
	name_t getName() const;
	// TODO

	
protected:

	name_t m_name;
	value_t m_value;

};

} // json


#endif // EMF_CPP_JSON_NVPAIR__HPP
