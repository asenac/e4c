
#ifndef EMF_CPP_XPAND3_DECLARATION_ABSTRACTDECLARATION__HPP
#define EMF_CPP_XPAND3_DECLARATION_ABSTRACTDECLARATION__HPP

#include <xpand3/declaration/fwd.hpp>
#include <xpand3/declaration/meta.hpp>
#include <xpand3/SyntaxElement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


// xpand3::declaration::AbstractDeclaration
class AbstractDeclaration :  public virtual ::xpand3::SyntaxElement
{
public:

	typedef AbstractDeclaration_ptr ptr_type;
	
	virtual ~AbstractDeclaration();

	typedef xpand3::File_ptr owner_t;
	typedef std::vector < xpand3::DeclaredParameter_ptr > params_t;
	typedef ::ecore::EBoolean isPrivate_t;
	typedef xpand3::expression::AbstractExpression_ptr guard_t;

	
	owner_t getOwner() const;
	params_t getParams() const;
	void setIsPrivate(isPrivate_t _isPrivate);
	isPrivate_t getIsPrivate() const;
	guard_t getGuard() const;


	std::unique_ptr < xpand3::File > m_owner;
	std::vector < std::unique_ptr < xpand3::DeclaredParameter > > m_params;
	isPrivate_t m_isPrivate;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_guard;

		
protected:
	AbstractDeclaration();

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_ABSTRACTDECLARATION__HPP
