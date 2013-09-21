
#ifndef EMF_CPP_XPAND3_DECLARATION_ABSTRACTNAMEDDECLARATION__HPP
#define EMF_CPP_XPAND3_DECLARATION_ABSTRACTNAMEDDECLARATION__HPP

#include <xpand3/declaration/fwd.hpp>
#include <xpand3/declaration/meta.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


// xpand3::declaration::AbstractNamedDeclaration
class AbstractNamedDeclaration :  public virtual ::xpand3::declaration::AbstractDeclaration
{
public:

	typedef AbstractNamedDeclaration_ptr ptr_type;
	
	virtual ~AbstractNamedDeclaration();

	typedef xpand3::Identifier_ptr name_t;

	
	name_t getName() const;


	std::unique_ptr < xpand3::Identifier > m_name;

		
protected:
	AbstractNamedDeclaration();

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_ABSTRACTNAMEDDECLARATION__HPP
