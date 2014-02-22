
#ifndef EMF_CPP_KDM_DATA_HASCONTENT__HPP
#define EMF_CPP_KDM_DATA_HASCONTENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class HasContent :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

    typedef HasContent_ptr ptr_type;

    HasContent();
    virtual ~HasContent();

    typedef kdm::data::AbstractDataElement_ptr to_t;
    typedef kdm::action::ActionElement_ptr from_t;

    to_t getTo() const;
    void setTo(to_t to_);
    from_t getFrom() const;
    void setFrom(from_t from_);


    /*PROTECTED REGION ID(kdm::data::HasContent public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;

    kdm::data::AbstractDataElement_ptr m_to;
    kdm::action::ActionElement_ptr m_from;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::HasContent protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_HASCONTENT__HPP
