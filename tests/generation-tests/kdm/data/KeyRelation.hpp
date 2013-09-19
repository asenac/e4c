
#ifndef EMF_CPP_KDM_DATA_KEYRELATION__HPP
#define EMF_CPP_KDM_DATA_KEYRELATION__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


// kdm::data::KeyRelation
class KeyRelation :  public virtual ::kdm::data::AbstractDataRelationship
{
public:

	typedef KeyRelation_ptr ptr_type;
	
	KeyRelation();
	virtual ~KeyRelation();

	typedef kdm::data::UniqueKey_ptr to_t;
	typedef kdm::data::ReferenceKey_ptr from_t;

	
	// TODO
	// TODO

	
protected:

	to_t m_to;
	from_t m_from;

};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_KEYRELATION__HPP
