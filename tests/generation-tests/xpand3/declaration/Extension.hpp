
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

	typedef ::ecore::EBoolean cached_t;
	typedef xpand3::expression::AbstractExpression_ptr body_t;
	typedef xpand3::Identifier_ptr returnType_t;

	
	void setCached(cached_t _cached);
	cached_t getCached() const;
	body_t getBody() const;
	returnType_t getReturnType() const;


	cached_t m_cached;
	std::unique_ptr < xpand3::expression::AbstractExpression > m_body;
	std::unique_ptr < xpand3::Identifier > m_returnType;

		
protected:

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_EXTENSION__HPP
