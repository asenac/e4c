
#ifndef EMF_CPP_JSON_NUMBERVALUE__HPP
#define EMF_CPP_JSON_NUMBERVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

#include <e4c/mapping.hpp>

namespace json
{


// json::NumberValue
class NumberValue :  public virtual ::json::Value
{
public:

	typedef NumberValue_ptr ptr_type;
	
	NumberValue();
	virtual ~NumberValue();

	typedef int value_t;

	
	void setValue(value_t _value);
	value_t getValue() const;

	
protected:

	value_t m_value;

};

} // json


#endif // EMF_CPP_JSON_NUMBERVALUE__HPP
