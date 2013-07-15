#ifndef EMF_CPP_KDM_CORE_PACKAGE_HPP
#define EMF_CPP_KDM_CORE_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/core/fwd.hpp>

namespace kdm
{
namespace core
{


class CorePackage : public ::ecore::EPackage
{
public:
    static CorePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_Element();
 	e4c::tag_t getTag_ModelElement();
 	e4c::tag_t getTag_KDMEntity();
 	e4c::tag_t getTag_KDMRelationship();
 	e4c::tag_t getTag_AggregatedRelationship();
 	e4c::tag_t getTag_String();
 	e4c::tag_t getTag_Integer();
 	e4c::tag_t getTag_Boolean();
 
 	// Structural features
 	e4c::tag_t getTag_Element__attribute();
 	e4c::tag_t getTag_Element__annotation();
 	e4c::tag_t getTag_ModelElement__stereotype();
 	e4c::tag_t getTag_ModelElement__taggedValue();
 	e4c::tag_t getTag_KDMEntity__name();
 	e4c::tag_t getTag_AggregatedRelationship__from();
 	e4c::tag_t getTag_AggregatedRelationship__to();
 	e4c::tag_t getTag_AggregatedRelationship__relation();
 	e4c::tag_t getTag_AggregatedRelationship__density();

protected:
    CorePackage();
};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_PACKAGE_HPP
