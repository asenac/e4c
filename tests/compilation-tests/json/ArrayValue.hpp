
#ifndef EMF_CPP_JSON_ARRAYVALUE__HPP
#define EMF_CPP_JSON_ARRAYVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

#include <e4c/mapping.hpp>

namespace json
{


class ArrayValue :  public virtual ::json::Value
{
public:

    typedef ArrayValue_ptr ptr_type;

    ArrayValue();
    virtual ~ArrayValue();

    typedef std::vector < json::Value_ptr > values_t;

    values_t getValues() const;
    void addValues(json::Value_ptr values_);
    void addAllValues(const values_t& values_);


    /*PROTECTED REGION ID(json::ArrayValue public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class JsonPackage;

    std::vector < std::unique_ptr < json::Value > > m_values;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(json::ArrayValue protected) START*/
    /*PROTECTED REGION END*/
};

} // json


#endif // EMF_CPP_JSON_ARRAYVALUE__HPP
