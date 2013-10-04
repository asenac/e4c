
#ifndef EMF_CPP_JSON_VALUE__HPP
#define EMF_CPP_JSON_VALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace json
{


class Value : ::ecore::EObject
{
public:

	typedef Value_ptr ptr_type;
	
	virtual ~Value();

	
	

	/*PROTECTED REGION ID(json::Value public) START*/
	/*PROTECTED REGION END*/
		
protected:
	Value();

	friend class JsonPackage;

	
	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(json::Value protected) START*/
	/*PROTECTED REGION END*/
};

} // json


#endif // EMF_CPP_JSON_VALUE__HPP
