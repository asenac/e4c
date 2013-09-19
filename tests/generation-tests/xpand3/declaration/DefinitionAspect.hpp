
#ifndef EMF_CPP_XPAND3_DECLARATION_DEFINITIONASPECT__HPP
#define EMF_CPP_XPAND3_DECLARATION_DEFINITIONASPECT__HPP

#include <xpand3/declaration/fwd.hpp>
#include <xpand3/declaration/meta.hpp>
#include <xpand3/declaration/AbstractAspect.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


// xpand3::declaration::DefinitionAspect
class DefinitionAspect :  public virtual ::xpand3::declaration::AbstractAspect
{
public:

	typedef DefinitionAspect_ptr ptr_type;
	
	DefinitionAspect();
	virtual ~DefinitionAspect();

	typedef boost::ptr_vector < xpand3::statement::AbstractStatement > body_t;

	
	// TODO

	
protected:

	body_t m_body;

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_DEFINITIONASPECT__HPP
