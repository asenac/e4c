
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


class Definition :  public virtual ::xpand3::declaration::AbstractNamedDeclaration
{
public:

	typedef Definition_ptr ptr_type;
	
	Definition();
	virtual ~Definition();

	typedef std::vector < xpand3::statement::AbstractStatement_ptr > body_t;
	
	body_t getBody() const;
	void addBody(xpand3::statement::AbstractStatement_ptr body_);
	void addAllBody(const body_t& body_);
	

	/*PROTECTED REGION ID(xpand3::declaration::Definition public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class DeclarationPackage;

	std::vector < std::unique_ptr < xpand3::statement::AbstractStatement > > m_body;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(xpand3::declaration::Definition protected) START*/
	/*PROTECTED REGION END*/
};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_DEFINITION__HPP
