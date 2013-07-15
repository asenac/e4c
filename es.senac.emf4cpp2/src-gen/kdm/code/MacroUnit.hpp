
#ifndef EMF_CPP_KDM_CODE_MACROUNIT__HPP
#define EMF_CPP_KDM_CODE_MACROUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PreprocessorDirective.hpp>


namespace kdm
{
namespace code
{


// kdm::code::MacroUnit
class MacroUnit :  public virtual ::kdm::code::PreprocessorDirective
{
public:

	typedef MacroUnit_ptr ptr_type;

	MacroUnit();
	virtual ~MacroUnit();

	// Typedefs
	typedef ::e4c::impl::attribute< MacroUnit__kind_tag > _kind_t;

	
	// Members
	_kind_t kind;

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_MACROUNIT__HPP
