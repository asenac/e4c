
#ifndef EMF_CPP_XPAND3_DECLAREDPARAMETER__HPP
#define EMF_CPP_XPAND3_DECLAREDPARAMETER__HPP

#include <xpand3/fwd.hpp>
#include <xpand3/meta.hpp>
#include <xpand3/SyntaxElement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{


// xpand3::DeclaredParameter
class DeclaredParameter :  public virtual ::xpand3::SyntaxElement
{
public:

	typedef DeclaredParameter_ptr ptr_type;
	
	DeclaredParameter();
	virtual ~DeclaredParameter();

	typedef std::unique_ptr < xpand3::Identifier > name_t;
	typedef std::unique_ptr < xpand3::Identifier > type_t;

	
	// TODO
	// TODO

	
protected:

	name_t m_name;
	type_t m_type;

};

} // xpand3


#endif // EMF_CPP_XPAND3_DECLAREDPARAMETER__HPP
