
#ifndef EMF_CPP_JSON_STRINGVALUE__HPP
#define EMF_CPP_JSON_STRINGVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

#include <e4c/mapping.hpp>

namespace json
{


class StringValue :  public virtual ::json::Value
{
public:

	typedef StringValue_ptr ptr_type;
	
	StringValue();
	virtual ~StringValue();

	typedef ::ecore::EString value_t;
	
	void setValue(value_t _value);
	value_t getValue() const;
	

	/*PROTECTED REGION ID(json::StringValue public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class JsonPackage;

	value_t m_value;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(json::StringValue protected) START*/
	/*PROTECTED REGION END*/
};

} // json


#endif // EMF_CPP_JSON_STRINGVALUE__HPP
