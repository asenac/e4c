
#ifndef EMF_CPP_KDM_DATA_REFERENCETO__HPP
#define EMF_CPP_KDM_DATA_REFERENCETO__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>


namespace kdm
{
namespace data
{


// kdm::data::ReferenceTo
class ReferenceTo :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef ReferenceTo_ptr ptr_type;

	ReferenceTo();
	virtual ~ReferenceTo();

	// Typedefs
	typedef ::e4c::impl::reference< ReferenceTo__to_tag > _to_t;
	typedef ::e4c::impl::reference< ReferenceTo__from_tag > _from_t;

	
	// Members
	_to_t to;
	_from_t from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_REFERENCETO__HPP
