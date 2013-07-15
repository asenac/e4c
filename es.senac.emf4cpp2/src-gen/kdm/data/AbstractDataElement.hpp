
#ifndef EMF_CPP_KDM_DATA_ABSTRACTDATAELEMENT__HPP
#define EMF_CPP_KDM_DATA_ABSTRACTDATAELEMENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/core/KDMEntity.hpp>


namespace kdm
{
namespace data
{


// kdm::data::AbstractDataElement
class AbstractDataElement :  public virtual ::kdm::core::KDMEntity
{
public:

	typedef AbstractDataElement_ptr ptr_type;

	AbstractDataElement();
	virtual ~AbstractDataElement();

	// Typedefs
	typedef ::e4c::impl::reference< AbstractDataElement__source_tag > _source_t;
	typedef ::e4c::impl::reference< AbstractDataElement__dataRelation_tag > _dataRelation_t;
	typedef ::e4c::impl::reference< AbstractDataElement__abstraction_tag > _abstraction_t;

	
	// Members
	_source_t source;
	_dataRelation_t dataRelation;
	_abstraction_t abstraction;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_ABSTRACTDATAELEMENT__HPP
