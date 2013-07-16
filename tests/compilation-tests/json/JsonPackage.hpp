#ifndef EMF_CPP_JSON_PACKAGE_HPP
#define EMF_CPP_JSON_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <json/fwd.hpp>

namespace json
{


class JsonPackage : public ::ecore::EPackage
{
public:
    static JsonPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_ObjectValue();
 	e4c::tag_t getTag_NVPair();
 	e4c::tag_t getTag_Value();
 	e4c::tag_t getTag_StringValue();
 	e4c::tag_t getTag_NumberValue();
 	e4c::tag_t getTag_BooleanValue();
 	e4c::tag_t getTag_ArrayValue();
 	e4c::tag_t getTag_NullValue();
 
 	// Structural features
 	e4c::tag_t getTag_ObjectValue__members();
 	e4c::tag_t getTag_NVPair__name();
 	e4c::tag_t getTag_NVPair__value();
 	e4c::tag_t getTag_StringValue__value();
 	e4c::tag_t getTag_NumberValue__value();
 	e4c::tag_t getTag_BooleanValue__value();
 	e4c::tag_t getTag_ArrayValue__values();

protected:
    JsonPackage();
};

} // json


#endif // EMF_CPP_JSON_PACKAGE_HPP
