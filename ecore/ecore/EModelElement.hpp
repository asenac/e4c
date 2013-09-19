
#ifndef EMF_CPP_ECORE_EMODELELEMENT__HPP
#define EMF_CPP_ECORE_EMODELELEMENT__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::EModelElement
class EModelElement
{
public:

	typedef EModelElement_ptr ptr_type;
	
	virtual ~EModelElement();

	typedef boost::ptr_vector < ecore::EAnnotation > eAnnotations_t;

	
	// TODO

	
protected:
	EModelElement();

	eAnnotations_t m_eAnnotations;

};

} // ecore


#endif // EMF_CPP_ECORE_EMODELELEMENT__HPP
