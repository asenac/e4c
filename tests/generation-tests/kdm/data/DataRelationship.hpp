
#ifndef EMF_CPP_KDM_DATA_DATARELATIONSHIP__HPP
#define EMF_CPP_KDM_DATA_DATARELATIONSHIP__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class DataRelationship :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

    typedef DataRelationship_ptr ptr_type;

    DataRelationship();
    virtual ~DataRelationship();

    typedef kdm::core::KDMEntity_ptr to_t;
    typedef kdm::data::AbstractDataElement_ptr from_t;

    to_t getTo() const;
    void setTo(to_t to_);
    from_t getFrom() const;
    void setFrom(from_t from_);


    /*PROTECTED REGION ID(kdm::data::DataRelationship public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;

    kdm::core::KDMEntity_ptr m_to;
    kdm::data::AbstractDataElement_ptr m_from;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::DataRelationship protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATARELATIONSHIP__HPP
