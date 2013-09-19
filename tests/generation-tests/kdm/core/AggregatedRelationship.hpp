
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


// kdm::core::AggregatedRelationship
class AggregatedRelationship :  public virtual ::kdm::core::ModelElement
{
public:

	typedef AggregatedRelationship_ptr ptr_type;
	
	AggregatedRelationship();
	virtual ~AggregatedRelationship();

	typedef kdm::core::KDMEntity_ptr from_t;
	typedef kdm::core::KDMEntity_ptr to_t;
	typedef std::vector < kdm::core::KDMRelationship_ptr > relation_t;
	typedef int density_t;

	
	// TODO
	// TODO
	// TODO
	void setDensity(density_t _density);
	density_t getDensity() const;

	
protected:

	from_t m_from;
	to_t m_to;
	relation_t m_relation;
	density_t m_density;

};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_AGGREGATEDRELATIONSHIP__HPP
