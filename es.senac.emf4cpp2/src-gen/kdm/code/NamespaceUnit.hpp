
#ifndef EMF_CPP_KDM_CODE_NAMESPACEUNIT__HPP
#define EMF_CPP_KDM_CODE_NAMESPACEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/CodeItem.hpp>


namespace kdm
{
namespace code
{


// kdm::code::NamespaceUnit
class NamespaceUnit :  public virtual ::kdm::code::CodeItem
{
public:

	typedef NamespaceUnit_ptr ptr_type;

	NamespaceUnit();
	virtual ~NamespaceUnit();

	// Typedefs
	typedef ::e4c::impl::reference< NamespaceUnit__groupedCode_tag > _groupedCode_t;

	
	// Members
	_groupedCode_t groupedCode;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_NAMESPACEUNIT__HPP
