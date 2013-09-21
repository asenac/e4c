
#ifndef EMF_CPP_JSON_ARRAYVALUE__HPP
#define EMF_CPP_JSON_ARRAYVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

#include <e4c/mapping.hpp>

namespace json
{


// json::ArrayValue
class ArrayValue :  public virtual ::json::Value
{
public:

	typedef ArrayValue_ptr ptr_type;
	
	ArrayValue();
	virtual ~ArrayValue();

	typedef std::vector < json::Value_ptr > values_t;

	
	values_t getValues() const;


	std::vector < std::unique_ptr < json::Value > > m_values;

		
protected:

};

} // json


#endif // EMF_CPP_JSON_ARRAYVALUE__HPP
