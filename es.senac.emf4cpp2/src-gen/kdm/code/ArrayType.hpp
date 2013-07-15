
#ifndef EMF_CPP_KDM_CODE_ARRAYTYPE__HPP
#define EMF_CPP_KDM_CODE_ARRAYTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DerivedType.hpp>


namespace kdm
{
namespace code
{


// kdm::code::ArrayType
class ArrayType :  public virtual ::kdm::code::DerivedType
{
public:

	typedef ArrayType_ptr ptr_type;

	ArrayType();
	virtual ~ArrayType();

	// Typedefs
	typedef ::e4c::impl::attribute< ArrayType__size_tag > _size_t;
	typedef ::e4c::impl::reference< ArrayType__indexUnit_tag > _indexUnit_t;

	
	// Members
	_size_t size;
	_indexUnit_t indexUnit;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_ARRAYTYPE__HPP
