#ifndef EMF_CPP_JSON_FWD_HPP
#define EMF_CPP_JSON_FWD_HPP


#include <e4c/mapping.hpp>

namespace json
{


class JsonPackage;
typedef JsonPackage * JsonPackage_ptr;
class JsonFactory;
typedef JsonFactory * JsonFactory_ptr;

// Data types


// Classes
class ObjectValue;
typedef ObjectValue* ObjectValue_ptr;
class NVPair;
typedef NVPair* NVPair_ptr;
class Value;
typedef Value* Value_ptr;
class StringValue;
typedef StringValue* StringValue_ptr;
class NumberValue;
typedef NumberValue* NumberValue_ptr;
class BooleanValue;
typedef BooleanValue* BooleanValue_ptr;
class ArrayValue;
typedef ArrayValue* ArrayValue_ptr;
class NullValue;
typedef NullValue* NullValue_ptr;


// Structural features
struct ObjectValue__members_tag;
struct NVPair__name_tag;
struct NVPair__value_tag;
struct StringValue__value_tag;
struct NumberValue__value_tag;
struct BooleanValue__value_tag;
struct ArrayValue__values_tag;


} // json


#endif // EMF_CPP_JSON_FWD_HPP
