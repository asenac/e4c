
#ifndef EMF_CPP_KDM_CODE_SEQUENCETYPE__HPP
#define EMF_CPP_KDM_CODE_SEQUENCETYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DerivedType.hpp>


namespace kdm
{
namespace code
{


// kdm::code::SequenceType
class SequenceType :  public virtual ::kdm::code::DerivedType
{
public:

	typedef SequenceType_ptr ptr_type;

	SequenceType();
	virtual ~SequenceType();

	// Typedefs
	typedef ::e4c::impl::attribute< SequenceType__size_tag > _size_t;

	
	// Members
	_size_t size;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_SEQUENCETYPE__HPP
