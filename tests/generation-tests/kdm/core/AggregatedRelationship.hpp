
#ifndef EMF_CPP_KDM_CORE_AGGREGATEDRELATIONSHIP__HPP
#define EMF_CPP_KDM_CORE_AGGREGATEDRELATIONSHIP__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>
#include <kdm/core/ModelElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace core
{


class AggregatedRelationship :  public virtual ::kdm::core::ModelElement
{
public:

    typedef AggregatedRelationship_ptr ptr_type;

    AggregatedRelationship();
    virtual ~AggregatedRelationship();

    typedef kdm::core::KDMEntity_ptr from_t;
    typedef kdm::core::KDMEntity_ptr to_t;
    typedef std::set < kdm::core::KDMRelationship_ptr > relation_t;
    typedef ::kdm::core::Integer density_t;

    from_t getFrom() const;
    void setFrom(from_t from_);
    to_t getTo() const;
    void setTo(to_t to_);
    relation_t getRelation() const;
    void addRelation(kdm::core::KDMRelationship_ptr relation_);
    void addAllRelation(const relation_t& relation_);
    void setDensity(density_t _density);
    density_t getDensity() const;


    /*PROTECTED REGION ID(kdm::core::AggregatedRelationship public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class CorePackage;

    kdm::core::KDMEntity_ptr m_from;
    kdm::core::KDMEntity_ptr m_to;
    std::set < kdm::core::KDMRelationship_ptr > m_relation;
    density_t m_density;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::core::AggregatedRelationship protected) START*/
    /*PROTECTED REGION END*/
};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_AGGREGATEDRELATIONSHIP__HPP
