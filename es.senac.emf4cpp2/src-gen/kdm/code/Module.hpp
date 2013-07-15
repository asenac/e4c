
#ifndef EMF_CPP_KDM_CODE_MODULE__HPP
#define EMF_CPP_KDM_CODE_MODULE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/CodeItem.hpp>


namespace kdm
{
namespace code
{


// kdm::code::Module
class Module :  public virtual ::kdm::code::CodeItem
{
public:

	typedef Module_ptr ptr_type;

	Module();
	virtual ~Module();

	// Typedefs
	typedef ::e4c::impl::reference< Module__codeElement_tag > _codeElement_t;

	
	// Members
	_codeElement_t codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_MODULE__HPP
