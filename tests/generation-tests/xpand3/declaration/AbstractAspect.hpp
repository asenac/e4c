
#ifndef EMF_CPP_XPAND3_DECLARATION_ABSTRACTASPECT__HPP
#define EMF_CPP_XPAND3_DECLARATION_ABSTRACTASPECT__HPP

#include <xpand3/declaration/fwd.hpp>
#include <xpand3/declaration/meta.hpp>
#include <xpand3/declaration/AbstractDeclaration.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace declaration
{


// xpand3::declaration::AbstractAspect
class AbstractAspect :  public virtual ::xpand3::declaration::AbstractDeclaration
{
public:

	typedef AbstractAspect_ptr ptr_type;
	
	virtual ~AbstractAspect();

	typedef xpand3::Identifier_ptr pointcut_t;
	typedef ::ecore::EBoolean wildparams_t;

	
	pointcut_t getPointcut() const;
	void setWildparams(wildparams_t _wildparams);
	wildparams_t getWildparams() const;


	std::unique_ptr < xpand3::Identifier > m_pointcut;
	wildparams_t m_wildparams;

		
protected:
	AbstractAspect();

};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_ABSTRACTASPECT__HPP
