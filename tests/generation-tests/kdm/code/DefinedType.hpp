
#ifndef EMF_CPP_KDM_CODE_DEFINEDTYPE__HPP
#define EMF_CPP_KDM_CODE_DEFINEDTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::DefinedType
class DefinedType :  public virtual ::kdm::code::Datatype
{
public:

	typedef DefinedType_ptr ptr_type;
	
	virtual ~DefinedType();

	typedef kdm::code::Datatype_ptr type_t;
	typedef std::unique_ptr < kdm::code::Datatype > codeElement_t;

	
	// TODO
	// TODO

	
protected:
	DefinedType();

	type_t m_type;
	codeElement_t m_codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DEFINEDTYPE__HPP
