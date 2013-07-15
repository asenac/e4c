
#ifndef EMF_CPP_KDM_CODE_TEMPLATEUNIT__HPP
#define EMF_CPP_KDM_CODE_TEMPLATEUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/Datatype.hpp>


namespace kdm
{
namespace code
{


// kdm::code::TemplateUnit
class TemplateUnit :  public virtual ::kdm::code::Datatype
{
public:

	typedef TemplateUnit_ptr ptr_type;

	TemplateUnit();
	virtual ~TemplateUnit();

	// Typedefs
	typedef ::e4c::impl::reference< TemplateUnit__codeElement_tag > _codeElement_t;

	
	// Members
	_codeElement_t codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_TEMPLATEUNIT__HPP
