
#ifndef EMF_CPP_XPAND3_DECLARATION_EXTENSION__HPP
#define EMF_CPP_XPAND3_DECLARATION_EXTENSION__HPP

#include <xpand3/declaration/fwd.hpp>
#include <xpand3/declaration/meta.hpp>
#include <xpand3/declaration/AbstractNamedDeclaration.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


// xpand3::declaration::Extension
class Extension :  public virtual ::xpand3::declaration::AbstractNamedDeclaration
{
public:

	typedef Extension_ptr ptr_type;
	
	Extension();
	virtual ~Extension();

	typedef int cached_t;
	typedef std::unique_ptr < xpand3::expression::AbstractExpression > body_t;
	typedef std::unique_ptr < xpand3::Identifier > returnType_t;

	
	void setCached(cached_t _cached);
	cached_t getCached() const;
	// TODO
	// TODO

	
protected:

	cached_t m_cached;
	body_t m_body;
	returnType_t m_returnType;

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_EXTENSION__HPP
