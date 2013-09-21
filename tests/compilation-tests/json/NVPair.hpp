
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

	typedef ::ecore::EString name_t;
	typedef json::Value_ptr value_t;

	
	void setName(name_t _name);
	name_t getName() const;
	value_t getValue() const;


	name_t m_name;
	std::unique_ptr < json::Value > m_value;

		
protected:

};

} // json


#endif // EMF_CPP_JSON_NVPAIR__HPP
