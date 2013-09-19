#ifndef EMF_CPP_KDM_CORE_PACKAGE_HPP
#define EMF_CPP_KDM_CORE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/core/fwd.hpp>

namespace kdm
{
namespace core
{


class CorePackage : public ::ecore::EPackage
{
public:
    static const CorePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_Element() const;
 	e4c::tag_t getTag_ModelElement() const;
 	e4c::tag_t getTag_KDMEntity() const;
 	e4c::tag_t getTag_KDMRelationship() const;
 	e4c::tag_t getTag_AggregatedRelationship() const;
 	e4c::tag_t getTag_String() const;
 	e4c::tag_t getTag_Integer() const;
 	e4c::tag_t getTag_Boolean() const;
 
 	// Structural features
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
};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_PACKAGE_HPP
