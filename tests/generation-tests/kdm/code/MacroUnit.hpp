
#ifndef EMF_CPP_KDM_CODE_MACROUNIT__HPP
#define EMF_CPP_KDM_CODE_MACROUNIT__HPP

#include <kdm/code/fwd.hpp>
#include <kdm/code/meta.hpp>
#include <kdm/code/PreprocessorDirective.hpp>

#include <e4c/mapping.hpp>

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

	typedef ::kdm::code::MacroKind kind_t;

	
	void setKind(kind_t _kind);
	kind_t getKind() const;


	kind_t m_kind;

		
protected:

};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_MACROUNIT__HPP
