#ifndef EMF_CPP_JSON_PACKAGE_HPP
#define EMF_CPP_JSON_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <json/fwd.hpp>

namespace json
{


class JsonPackage : public ::ecore::EPackage
{
public:
    static const JsonPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_ObjectValue() const;
 	e4c::tag_t getTag_NVPair() const;
 	e4c::tag_t getTag_Value() const;
 	e4c::tag_t getTag_StringValue() const;
 	e4c::tag_t getTag_NumberValue() const;
 	e4c::tag_t getTag_BooleanValue() const;
 	e4c::tag_t getTag_ArrayValue() const;
 	e4c::tag_t getTag_NullValue() const;
 
 	// Structural features
 	e4c::tag_t getTag_ObjectValue__members() const;
 	e4c::tag_t getTag_NVPair__name() const;
 	e4c::tag_t getTag_NVPair__value() const;
 	e4c::tag_t getTag_StringValue__value() const;
 	e4c::tag_t getTag_NumberValue__value() const;
 	e4c::tag_t getTag_BooleanValue__value() const;
 	e4c::tag_t getTag_ArrayValue__values() const;

protected:
    JsonPackage();
};

} // json


#endif // EMF_CPP_JSON_PACKAGE_HPP
