
#ifndef EMF_CPP_KDM_DATA_ABSTRACTDATAELEMENT__HPP
#define EMF_CPP_KDM_DATA_ABSTRACTDATAELEMENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::AbstractDataElement
class AbstractDataElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractDataElement_ptr ptr_type;
	
	virtual ~AbstractDataElement();

	typedef boost::ptr_set < kdm::source::SourceRef > source_t;
	typedef boost::ptr_set < kdm::data::AbstractDataRelationship > dataRelation_t;
	typedef boost::ptr_vector < kdm::action::ActionElement > abstraction_t;

	
	// TODO
	// TODO
	// TODO

	
protected:
	AbstractDataElement();

	source_t m_source;
	dataRelation_t m_dataRelation;
	abstraction_t m_abstraction;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_ABSTRACTDATAELEMENT__HPP
