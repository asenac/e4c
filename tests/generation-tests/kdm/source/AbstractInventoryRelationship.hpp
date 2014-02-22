
#ifndef EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYRELATIONSHIP__HPP
#define EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYRELATIONSHIP__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


class AbstractInventoryRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

    typedef AbstractInventoryRelationship_ptr ptr_type;

    virtual ~AbstractInventoryRelationship();




    /*PROTECTED REGION ID(kdm::source::AbstractInventoryRelationship public) START*/
    /*PROTECTED REGION END*/

protected:
    AbstractInventoryRelationship();

    friend class SourcePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::source::AbstractInventoryRelationship protected) START*/
    /*PROTECTED REGION END*/
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYRELATIONSHIP__HPP
