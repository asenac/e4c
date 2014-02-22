
#ifndef EMF_CPP_KDM_SOURCE_DEPENDSON__HPP
#define EMF_CPP_KDM_SOURCE_DEPENDSON__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/AbstractInventoryRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


class DependsOn :  public virtual ::kdm::source::AbstractInventoryRelationship
{
public:

    typedef DependsOn_ptr ptr_type;

    DependsOn();
    virtual ~DependsOn();

    typedef kdm::source::AbstractInventoryElement_ptr to_t;
    typedef kdm::source::AbstractInventoryElement_ptr from_t;

    to_t getTo() const;
    void setTo(to_t to_);
    from_t getFrom() const;
    void setFrom(from_t from_);


    /*PROTECTED REGION ID(kdm::source::DependsOn public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SourcePackage;

    kdm::source::AbstractInventoryElement_ptr m_to;
    kdm::source::AbstractInventoryElement_ptr m_from;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::source::DependsOn protected) START*/
    /*PROTECTED REGION END*/
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_DEPENDSON__HPP
