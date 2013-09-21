
#ifndef EMF_CPP_KDM_DATA_DATARELATIONSHIP__HPP
#define EMF_CPP_KDM_DATA_DATARELATIONSHIP__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::DataRelationship
class DataRelationship :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef DataRelationship_ptr ptr_type;
	
	DataRelationship();
	virtual ~DataRelationship();

	typedef kdm::core::KDMEntity_ptr to_t;
	typedef kdm::data::AbstractDataElement_ptr from_t;

	
	to_t getTo() const;
	from_t getFrom() const;


	kdm::core::KDMEntity_ptr m_to;
	kdm::data::AbstractDataElement_ptr m_from;

		
protected:

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATARELATIONSHIP__HPP
