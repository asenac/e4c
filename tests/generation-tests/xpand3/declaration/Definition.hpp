
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

	typedef std::vector < xpand3::statement::AbstractStatement_ptr > body_t;

	
	body_t getBody() const;


	std::vector < std::unique_ptr < xpand3::statement::AbstractStatement > > m_body;

		
protected:

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_DEFINITION__HPP
