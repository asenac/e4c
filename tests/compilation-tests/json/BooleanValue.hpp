
#ifndef EMF_CPP_JSON_BOOLEANVALUE__HPP
#define EMF_CPP_JSON_BOOLEANVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

#include <e4c/mapping.hpp>

namespace json
{


class BooleanValue :  public virtual ::json::Value
{
public:

    typedef BooleanValue_ptr ptr_type;

    BooleanValue();
    virtual ~BooleanValue();

    typedef ::ecore::EBoolean value_t;

    void setValue(value_t _value);
    value_t getValue() const;


    /*PROTECTED REGION ID(json::BooleanValue public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class JsonPackage;

    value_t m_value;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(json::BooleanValue protected) START*/
    /*PROTECTED REGION END*/
};

} // json


#endif // EMF_CPP_JSON_BOOLEANVALUE__HPP
