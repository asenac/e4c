
#ifndef EMF_CPP_KDM_CODE_STORABLEUNIT__HPP
#define EMF_CPP_KDM_CODE_STORABLEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DataElement.hpp>


namespace kdm
{
namespace code
{


// kdm::code::StorableUnit
class StorableUnit :  public virtual ::kdm::code::DataElement
{
public:

	typedef StorableUnit_ptr ptr_type;

	StorableUnit();
	virtual ~StorableUnit();

	// Typedefs
	typedef ::e4c::impl::attribute< StorableUnit__kind_tag > _kind_t;

	
	// Members
	_kind_t kind;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_STORABLEUNIT__HPP
