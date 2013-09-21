
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

	typedef std::vector < xpand3::statement::AbstractStatement_ptr > body_t;

	
	body_t getBody() const;


	std::vector < std::unique_ptr < xpand3::statement::AbstractStatement > > m_body;

		
protected:

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_DEFINITIONASPECT__HPP
