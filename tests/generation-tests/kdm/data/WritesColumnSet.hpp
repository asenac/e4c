
#ifndef EMF_CPP_KDM_DATA_WRITESCOLUMNSET__HPP
#define EMF_CPP_KDM_DATA_WRITESCOLUMNSET__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class WritesColumnSet :  public virtual ::kdm::action::AbstractActionRelationship
{
public:

    typedef WritesColumnSet_ptr ptr_type;

    WritesColumnSet();
    virtual ~WritesColumnSet();

    typedef kdm::data::ColumnSet_ptr to_t;
    typedef kdm::action::ActionElement_ptr from_t;

    to_t getTo() const;
    void setTo(to_t to_);
    from_t getFrom() const;
    void setFrom(from_t from_);


    /*PROTECTED REGION ID(kdm::data::WritesColumnSet public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;

    kdm::data::ColumnSet_ptr m_to;
    kdm::action::ActionElement_ptr m_from;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::WritesColumnSet protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_WRITESCOLUMNSET__HPP
