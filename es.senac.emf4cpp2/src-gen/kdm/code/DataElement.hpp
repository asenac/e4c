
#ifndef EMF_CPP_KDM_CODE_DATAELEMENT__HPP
#define EMF_CPP_KDM_CODE_DATAELEMENT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/ComputationalObject.hpp>


namespace kdm
{
namespace code
{


// kdm::code::DataElement
class DataElement :  public virtual ::kdm::code::ComputationalObject
{
public:

	typedef DataElement_ptr ptr_type;

	DataElement();
	virtual ~DataElement();

	// Typedefs
	typedef ::e4c::impl::reference< DataElement__type_tag > _type_t;
	typedef ::e4c::impl::attribute< DataElement__ext_tag > _ext_t;
	typedef ::e4c::impl::attribute< DataElement__size_tag > _size_t;
	typedef ::e4c::impl::reference< DataElement__codeElement_tag > _codeElement_t;

	
	// Members
	_type_t type;
	_ext_t ext;
	_size_t size;
	_codeElement_t codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DATAELEMENT__HPP
