
#ifndef EMF_CPP_JSON_NUMBERVALUE__HPP
#define EMF_CPP_JSON_NUMBERVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

#include <e4c/mapping.hpp>

namespace json
{


class NumberValue :  public virtual ::json::Value
{
public:

    typedef NumberValue_ptr ptr_type;

    NumberValue();
    virtual ~NumberValue();

    typedef ::ecore::EDouble value_t;

    void setValue(value_t _value);
    value_t getValue() const;


    /*PROTECTED REGION ID(json::NumberValue public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class JsonPackage;

    value_t m_value;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(json::NumberValue protected) START*/
    /*PROTECTED REGION END*/
};

} // json


#endif // EMF_CPP_JSON_NUMBERVALUE__HPP
