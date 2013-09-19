
#ifndef EMF_CPP_KDM_CODE_DERIVEDTYPE__HPP
#define EMF_CPP_KDM_CODE_DERIVEDTYPE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace code
{


// kdm::code::DerivedType
class DerivedType :  public virtual ::kdm::code::Datatype
{
public:

	typedef DerivedType_ptr ptr_type;
	
	DerivedType();
	virtual ~DerivedType();

	typedef std::unique_ptr < kdm::code::ItemUnit > itemUnit_t;

	
	// TODO

	
protected:

	itemUnit_t m_itemUnit;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_DERIVEDTYPE__HPP
