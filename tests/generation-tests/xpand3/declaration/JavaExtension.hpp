
#ifndef EMF_CPP_XPAND3_DECLARATION_JAVAEXTENSION__HPP
#define EMF_CPP_XPAND3_DECLARATION_JAVAEXTENSION__HPP

#include <xpand3/declaration/fwd.hpp>
#include <xpand3/declaration/meta.hpp>
#include <xpand3/declaration/AbstractNamedDeclaration.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


// xpand3::declaration::JavaExtension
class JavaExtension :  public virtual ::xpand3::declaration::AbstractNamedDeclaration
{
public:

	typedef JavaExtension_ptr ptr_type;
	
	JavaExtension();
	virtual ~JavaExtension();

	typedef xpand3::Identifier_ptr javaType_t;
	typedef xpand3::Identifier_ptr javaMethod_t;
	typedef std::vector < xpand3::Identifier_ptr > javaParamTypes_t;

	
	javaType_t getJavaType() const;
	javaMethod_t getJavaMethod() const;
	javaParamTypes_t getJavaParamTypes() const;


	std::unique_ptr < xpand3::Identifier > m_javaType;
	std::unique_ptr < xpand3::Identifier > m_javaMethod;
	std::vector < std::unique_ptr < xpand3::Identifier > > m_javaParamTypes;

		
protected:

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_JAVAEXTENSION__HPP
