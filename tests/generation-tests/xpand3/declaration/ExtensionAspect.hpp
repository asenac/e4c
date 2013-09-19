
#ifndef EMF_CPP_XPAND3_DECLARATION_EXTENSIONASPECT__HPP
#define EMF_CPP_XPAND3_DECLARATION_EXTENSIONASPECT__HPP

#include <xpand3/declaration/fwd.hpp>
#include <xpand3/declaration/meta.hpp>
#include <xpand3/declaration/AbstractAspect.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


// xpand3::declaration::ExtensionAspect
class ExtensionAspect :  public virtual ::xpand3::declaration::AbstractAspect
{
public:

	typedef ExtensionAspect_ptr ptr_type;
	
	ExtensionAspect();
	virtual ~ExtensionAspect();

	typedef std::unique_ptr < xpand3::expression::AbstractExpression > expression_t;

	
	// TODO

	
protected:

	expression_t m_expression;

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_EXTENSIONASPECT__HPP
