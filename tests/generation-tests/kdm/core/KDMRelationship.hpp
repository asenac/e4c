
#ifndef EMF_CPP_KDM_CORE_KDMRELATIONSHIP__HPP
#define EMF_CPP_KDM_CORE_KDMRELATIONSHIP__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>
#include <kdm/core/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace core
{


class KDMRelationship :  public virtual ::kdm::core::ModelElement
{
public:

    typedef KDMRelationship_ptr ptr_type;

    virtual ~KDMRelationship();



    kdm::core::KDMEntity_ptr getTo();
    kdm::core::KDMEntity_ptr getFrom();

    /*PROTECTED REGION ID(kdm::core::KDMRelationship public) START*/
    /*PROTECTED REGION END*/

protected:
    KDMRelationship();

    friend class CorePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::core::KDMRelationship protected) START*/
    /*PROTECTED REGION END*/
};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_KDMRELATIONSHIP__HPP
