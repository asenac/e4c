
#ifndef EMF_CPP_JSON_NVPAIR__HPP
#define EMF_CPP_JSON_NVPAIR__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace json
{


class NVPair : ::ecore::EObject
{
public:

    typedef NVPair_ptr ptr_type;

    NVPair();
    virtual ~NVPair();

    typedef ::ecore::EString name_t;
    typedef json::Value_ptr value_t;

    void setName(name_t _name);
    name_t getName() const;
    value_t getValue() const;
    void setValue(value_t value_);
    value_t releaseValue();


    /*PROTECTED REGION ID(json::NVPair public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class JsonPackage;

    name_t m_name;
    std::unique_ptr < json::Value > m_value;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(json::NVPair protected) START*/
    /*PROTECTED REGION END*/
};

} // json


#endif // EMF_CPP_JSON_NVPAIR__HPP
