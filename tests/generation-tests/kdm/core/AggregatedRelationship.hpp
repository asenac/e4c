
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
	typedef std::set < kdm::core::KDMRelationship_ptr > relation_t;
	typedef ::kdm::core::Integer density_t;

	
	from_t getFrom() const;
	to_t getTo() const;
	relation_t getRelation() const;
	void setDensity(density_t _density);
	density_t getDensity() const;


	kdm::core::KDMEntity_ptr m_from;
	kdm::core::KDMEntity_ptr m_to;
	std::set < kdm::core::KDMRelationship_ptr > m_relation;
	density_t m_density;

		
protected:

};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_AGGREGATEDRELATIONSHIP__HPP
