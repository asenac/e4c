#ifndef EMF_CPP_JSON_FACTORY_HPP
#define EMF_CPP_JSON_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <json/fwd.hpp>

namespace json
{


class JsonFactory : public ::ecore::EFactory
{
public:

    static const JsonFactory_ptr _instance();

    ObjectValue_ptr createObjectValue() const;
    NVPair_ptr createNVPair() const;
    StringValue_ptr createStringValue() const;
    NumberValue_ptr createNumberValue() const;
    BooleanValue_ptr createBooleanValue() const;
    ArrayValue_ptr createArrayValue() const;
    NullValue_ptr createNullValue() const;

protected:

    JsonFactory();
};

} // json


#endif // EMF_CPP_JSON_FACTORY_HPP
