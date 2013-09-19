
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

	typedef std::unique_ptr < xpand3::Identifier > javaType_t;
	typedef std::unique_ptr < xpand3::Identifier > javaMethod_t;
	typedef boost::ptr_vector < xpand3::Identifier > javaParamTypes_t;

	
	// TODO
	// TODO
	// TODO

	
protected:

	javaType_t m_javaType;
	javaMethod_t m_javaMethod;
	javaParamTypes_t m_javaParamTypes;

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_JAVAEXTENSION__HPP
