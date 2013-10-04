
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


class MacroUnit :  public virtual ::kdm::code::PreprocessorDirective
{
public:

	typedef MacroUnit_ptr ptr_type;
	
	MacroUnit();
	virtual ~MacroUnit();

	typedef ::kdm::code::MacroKind kind_t;
	
	void setKind(kind_t _kind);
	kind_t getKind() const;
	

	/*PROTECTED REGION ID(kdm::code::MacroUnit public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class CodePackage;

	kind_t m_kind;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(kdm::code::MacroUnit protected) START*/
	/*PROTECTED REGION END*/
};

} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_MACROUNIT__HPP
