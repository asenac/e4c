
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

	typedef xpand3::Identifier_ptr name_t;
	typedef xpand3::Identifier_ptr type_t;

	
	name_t getName() const;
	type_t getType() const;


	std::unique_ptr < xpand3::Identifier > m_name;
	std::unique_ptr < xpand3::Identifier > m_type;

		
protected:

};

} // xpand3


#endif // EMF_CPP_XPAND3_DECLAREDPARAMETER__HPP
