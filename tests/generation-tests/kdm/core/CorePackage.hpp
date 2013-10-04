#ifndef EMF_CPP_KDM_CORE_PACKAGE_HPP
#define EMF_CPP_KDM_CORE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/core/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace kdm
{
namespace core
{


class CorePackage : public ::ecore::EPackage
{
public:
    static const CorePackage_ptr _instance();

 	::ecore::EClass_ptr getElement() const;
 	::ecore::EClass_ptr getModelElement() const;
 	::ecore::EClass_ptr getKDMEntity() const;
 	::ecore::EClass_ptr getKDMRelationship() const;
 	::ecore::EClass_ptr getAggregatedRelationship() const;
 	::ecore::EDataType_ptr getString() const;
 	::ecore::EDataType_ptr getInteger() const;
 	::ecore::EDataType_ptr getBoolean() const;
 	
 	::ecore::EReference_ptr getElement__attribute() const;
 	::ecore::EReference_ptr getElement__annotation() const;
 	::ecore::EReference_ptr getModelElement__stereotype() const;
 	::ecore::EReference_ptr getModelElement__taggedValue() const;
 	::ecore::EAttribute_ptr getKDMEntity__name() const;
 	::ecore::EReference_ptr getAggregatedRelationship__from() const;
 	::ecore::EReference_ptr getAggregatedRelationship__to() const;
 	::ecore::EReference_ptr getAggregatedRelationship__relation() const;
 	::ecore::EAttribute_ptr getAggregatedRelationship__density() const;

 	e4c::tag_t getTag_Element() const;
 	e4c::tag_t getTag_ModelElement() const;
 	e4c::tag_t getTag_KDMEntity() const;
 	e4c::tag_t getTag_KDMRelationship() const;
 	e4c::tag_t getTag_AggregatedRelationship() const;
 	e4c::tag_t getTag_String() const;
 	e4c::tag_t getTag_Integer() const;
 	e4c::tag_t getTag_Boolean() const;
 
 	e4c::tag_t getTag_Element__attribute() const;
 	e4c::tag_t getTag_Element__annotation() const;
 	e4c::tag_t getTag_ModelElement__stereotype() const;
 	e4c::tag_t getTag_ModelElement__taggedValue() const;
 	e4c::tag_t getTag_KDMEntity__name() const;
 	e4c::tag_t getTag_AggregatedRelationship__from() const;
 	e4c::tag_t getTag_AggregatedRelationship__to() const;
 	e4c::tag_t getTag_AggregatedRelationship__relation() const;
 	e4c::tag_t getTag_AggregatedRelationship__density() const;

protected:
    CorePackage();
    
 	::ecore::EClass_ptr m_Element;
 	::ecore::EClass_ptr m_ModelElement;
 	::ecore::EClass_ptr m_KDMEntity;
 	::ecore::EClass_ptr m_KDMRelationship;
 	::ecore::EClass_ptr m_AggregatedRelationship;
 	::ecore::EDataType_ptr m_String;
 	::ecore::EDataType_ptr m_Integer;
 	::ecore::EDataType_ptr m_Boolean;
 	::ecore::EReference_ptr m_Element__attribute;
 	::ecore::EReference_ptr m_Element__annotation;
 	::ecore::EReference_ptr m_ModelElement__stereotype;
 	::ecore::EReference_ptr m_ModelElement__taggedValue;
 	::ecore::EAttribute_ptr m_KDMEntity__name;
 	::ecore::EReference_ptr m_AggregatedRelationship__from;
 	::ecore::EReference_ptr m_AggregatedRelationship__to;
 	::ecore::EReference_ptr m_AggregatedRelationship__relation;
 	::ecore::EAttribute_ptr m_AggregatedRelationship__density;
};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_PACKAGE_HPP
