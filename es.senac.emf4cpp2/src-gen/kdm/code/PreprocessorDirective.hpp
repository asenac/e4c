
#ifndef EMF_CPP_KDM_CODE_PREPROCESSORDIRECTIVE__HPP
#define EMF_CPP_KDM_CODE_PREPROCESSORDIRECTIVE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/AbstractCodeElement.hpp>


namespace kdm
{
namespace code
{


// kdm::code::PreprocessorDirective
class PreprocessorDirective :  public virtual ::kdm::code::AbstractCodeElement
{
public:

	typedef PreprocessorDirective_ptr ptr_type;

	PreprocessorDirective();
	virtual ~PreprocessorDirective();

	// Typedefs
	typedef ::e4c::impl::reference< PreprocessorDirective__codeElement_tag > _codeElement_t;

	
	// Members
	_codeElement_t codeElement;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_PREPROCESSORDIRECTIVE__HPP
