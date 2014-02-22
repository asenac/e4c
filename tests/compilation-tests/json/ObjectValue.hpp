
#ifndef EMF_CPP_JSON_OBJECTVALUE__HPP
#define EMF_CPP_JSON_OBJECTVALUE__HPP

#include <json/fwd.hpp>
#include <json/meta.hpp>
#include <json/Value.hpp>

#include <e4c/mapping.hpp>

namespace json
{


class ObjectValue :  public virtual ::json::Value
{
public:

    typedef ObjectValue_ptr ptr_type;

    ObjectValue();
    virtual ~ObjectValue();

    typedef std::vector < json::NVPair_ptr > members_t;

    members_t getMembers() const;
    void addMembers(json::NVPair_ptr members_);
    void addAllMembers(const members_t& members_);


    /*PROTECTED REGION ID(json::ObjectValue public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class JsonPackage;

    std::vector < std::unique_ptr < json::NVPair > > m_members;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(json::ObjectValue protected) START*/
    /*PROTECTED REGION END*/
};

} // json


#endif // EMF_CPP_JSON_OBJECTVALUE__HPP
