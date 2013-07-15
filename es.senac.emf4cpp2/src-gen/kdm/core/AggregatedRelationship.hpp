
#ifndef EMF_CPP_KDM_CORE_AGGREGATEDRELATIONSHIP__HPP
#define EMF_CPP_KDM_CORE_AGGREGATEDRELATIONSHIP__HPP

#include <kdm/core/fwd.hpp>
#include <kdm/core/meta.hpp>
#include <kdm/core/ModelElement.hpp>


namespace kdm
{
namespace core
{


// kdm::core::AggregatedRelationship
class AggregatedRelationship :  public virtual ::kdm::core::ModelElement
{
public:

	typedef AggregatedRelationship_ptr ptr_type;

	AggregatedRelationship();
	virtual ~AggregatedRelationship();

	// Typedefs
	typedef ::e4c::impl::reference< AggregatedRelationship__from_tag > _from_t;
	typedef ::e4c::impl::reference< AggregatedRelationship__to_tag > _to_t;
	typedef ::e4c::impl::reference< AggregatedRelationship__relation_tag > _relation_t;
	typedef ::e4c::impl::attribute< AggregatedRelationship__density_tag > _density_t;

	
	// Members
	_from_t from;
	_to_t to;
	_relation_t relation;
	_density_t density;

};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_AGGREGATEDRELATIONSHIP__HPP
