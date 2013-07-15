
#ifndef EMF_CPP_KDM_CODE_MEMBERUNIT__HPP
#define EMF_CPP_KDM_CODE_MEMBERUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/DataElement.hpp>


namespace kdm
{
namespace code
{


// kdm::code::MemberUnit
class MemberUnit :  public virtual ::kdm::code::DataElement
{
public:

	typedef MemberUnit_ptr ptr_type;

	MemberUnit();
	virtual ~MemberUnit();

	// Typedefs
	typedef ::e4c::impl::attribute< MemberUnit__export_tag > _export_t;

	
	// Members
	_export_t export_;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_MEMBERUNIT__HPP
