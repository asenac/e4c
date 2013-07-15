
#ifndef EMF_CPP_KDM_CODE_DEFINEDTYPE__HPP
#define EMF_CPP_KDM_CODE_DEFINEDTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>


namespace kdm
{
namespace code
{


// kdm::code::DefinedType
class DefinedType :  public virtual ::kdm::code::Datatype
{
public:

	typedef DefinedType_ptr ptr_type;

	DefinedType();
	virtual ~DefinedType();

	// Typedefs
	typedef ::e4c::impl::reference< DefinedType__type_tag > _type_t;
	typedef ::e4c::impl::reference< DefinedType__codeElement_tag > _codeElement_t;

	
	// Members
	_type_t type;
	_codeElement_t codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DEFINEDTYPE__HPP
