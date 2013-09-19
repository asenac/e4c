
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

	typedef std::unique_ptr < xpand3::Identifier > name_t;

	
	// TODO

	
protected:
	AbstractNamedDeclaration();

	name_t m_name;

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_ABSTRACTNAMEDDECLARATION__HPP
