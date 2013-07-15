
#ifndef EMF_CPP_ECORE_EMODELELEMENT__HPP
#define EMF_CPP_ECORE_EMODELELEMENT__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EObject.hpp>

namespace ecore
{


// ecore::EModelElement
class EModelElement : public ::ecore::EObject
{
public:

	typedef EModelElement_ptr ptr_type;

	EModelElement();
	virtual ~EModelElement();

	// Typedefs
	typedef ::e4c::impl::reference< EModelElement__eAnnotations_tag > _eAnnotations_t;

	
	// Members
	_eAnnotations_t eAnnotations;

};

} // ecore


#endif // EMF_CPP_ECORE_EMODELELEMENT__HPP
