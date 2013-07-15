
#ifndef EMF_CPP_KDM_CODE_MACRODIRECTIVE__HPP
#define EMF_CPP_KDM_CODE_MACRODIRECTIVE__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PreprocessorDirective.hpp>


namespace kdm
{
namespace code
{


// kdm::code::MacroDirective
class MacroDirective :  public virtual ::kdm::code::PreprocessorDirective
{
public:

	typedef MacroDirective_ptr ptr_type;

	MacroDirective();
	virtual ~MacroDirective();

	// Typedefs
	
	
	// Members
	
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_MACRODIRECTIVE__HPP
