
#ifndef EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYELEMENT__HPP
#define EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYELEMENT__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


class AbstractInventoryElement :  public virtual ::kdm::core::KDMEntity
{
public:

    typedef AbstractInventoryElement_ptr ptr_type;

    virtual ~AbstractInventoryElement();

    typedef std::set < kdm::source::AbstractInventoryRelationship_ptr > inventoryRelation_t;

    inventoryRelation_t getInventoryRelation() const;
    void addInventoryRelation(kdm::source::AbstractInventoryRelationship_ptr inventoryRelation_);
    void addAllInventoryRelation(const inventoryRelation_t& inventoryRelation_);


    /*PROTECTED REGION ID(kdm::source::AbstractInventoryElement public) START*/
    /*PROTECTED REGION END*/

protected:
    AbstractInventoryElement();

    friend class SourcePackage;

    std::set < std::unique_ptr < kdm::source::AbstractInventoryRelationship > > m_inventoryRelation;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::source::AbstractInventoryElement protected) START*/
    /*PROTECTED REGION END*/
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_ABSTRACTINVENTORYELEMENT__HPP
