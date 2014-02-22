
#ifndef EMF_CPP_KDM_CORE_KDMENTITY__HPP
#define EMF_CPP_KDM_CORE_KDMENTITY__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>
#include <kdm/core/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace core
{


class KDMEntity :  public virtual ::kdm::core::ModelElement
{
public:

    typedef KDMEntity_ptr ptr_type;

    virtual ~KDMEntity();

    typedef ::kdm::core::String name_t;

    void setName(name_t _name);
    name_t getName() const;

    void createAggregation(kdm::core::KDMEntity_ptr otherEntity);
    void deleteAggregation(kdm::core::AggregatedRelationship_ptr aggregation);
    kdm::core::KDMRelationship_ptr getInbound();
    kdm::core::KDMRelationship_ptr getOutbound();
    kdm::core::KDMRelationship_ptr getOwnedRelation();
    kdm::core::AggregatedRelationship_ptr getInAggregated();
    kdm::core::AggregatedRelationship_ptr getOutAggregated();
    kdm::core::KDMEntity_ptr getOwner();
    kdm::core::KDMEntity_ptr getOwnedElement();
    kdm::core::KDMEntity_ptr getGroup();
    kdm::core::KDMEntity_ptr getGroupedElement();
    kdm::kdm::KDMModel_ptr getModel();

    /*PROTECTED REGION ID(kdm::core::KDMEntity public) START*/
    /*PROTECTED REGION END*/

protected:
    KDMEntity();

    friend class CorePackage;

    name_t m_name;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::core::KDMEntity protected) START*/
    /*PROTECTED REGION END*/
};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_KDMENTITY__HPP
