
#ifndef EMF_CPP_KDM_DATA_DATAEVENT__HPP
#define EMF_CPP_KDM_DATA_DATAEVENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataResource.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class DataEvent :  public virtual ::kdm::data::DataResource
{
public:

    typedef DataEvent_ptr ptr_type;

    DataEvent();
    virtual ~DataEvent();

    typedef ::kdm::core::String kind_t;

    void setKind(kind_t _kind);
    kind_t getKind() const;


    /*PROTECTED REGION ID(kdm::data::DataEvent public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;

    kind_t m_kind;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::DataEvent protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATAEVENT__HPP
