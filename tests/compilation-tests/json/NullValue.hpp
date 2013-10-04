
#ifndef EMF_CPP_JSON_NULLVALUE__HPP
#define EMF_CPP_JSON_NULLVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

#include <e4c/mapping.hpp>

namespace json
{


class NullValue :  public virtual ::json::Value
{
public:

	typedef NullValue_ptr ptr_type;
	
	NullValue();
	virtual ~NullValue();

	
	

	/*PROTECTED REGION ID(json::NullValue public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class JsonPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(json::NullValue protected) START*/
	/*PROTECTED REGION END*/
};

} // json


#endif // EMF_CPP_JSON_NULLVALUE__HPP
