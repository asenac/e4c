
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

	typedef std::unique_ptr < xpand3::File > owner_t;
	typedef boost::ptr_vector < xpand3::DeclaredParameter > params_t;
	typedef int isPrivate_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > guard_t;

	
	// TODO
	// TODO
	void setIsPrivate(isPrivate_t _isPrivate);
	isPrivate_t getIsPrivate() const;
	// TODO

	
protected:
	AbstractDeclaration();

	owner_t m_owner;
	params_t m_params;
	isPrivate_t m_isPrivate;
	guard_t m_guard;

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_ABSTRACTDECLARATION__HPP
