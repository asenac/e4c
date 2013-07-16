
#ifndef EMF_CPP_ECORE_ENAMEDELEMENT__HPP
#define EMF_CPP_ECORE_ENAMEDELEMENT__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EModelElement.hpp>

namespace ecore
{


// ecore::ENamedElement
class ENamedElement :  public virtual ::ecore::EModelElement
{
public:

	typedef ENamedElement_ptr ptr_type;

	ENamedElement();
	virtual ~ENamedElement();

	// Typedefs
	typedef ::e4c::impl::attribute< ENamedElement__name_tag > _name_t;

	
	// Members
	_name_t name;

};

} // ecore


#endif // EMF_CPP_ECORE_ENAMEDELEMENT__HPP
