
#ifndef EMF_CPP_XPAND3_DECLARATION_DEFINITION__HPP
#define EMF_CPP_XPAND3_DECLARATION_DEFINITION__HPP

#include <xpand3/declaration/fwd.hpp>
#include <xpand3/declaration/meta.hpp>
#include <xpand3/declaration/AbstractNamedDeclaration.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


// xpand3::declaration::Definition
class Definition :  public virtual ::xpand3::declaration::AbstractNamedDeclaration
{
public:

	typedef Definition_ptr ptr_type;
	
	Definition();
	virtual ~Definition();

	typedef boost::ptr_vector < xpand3::statement::AbstractStatement > body_t;

	
	// TODO

	
protected:

	body_t m_body;

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_DEFINITION__HPP
