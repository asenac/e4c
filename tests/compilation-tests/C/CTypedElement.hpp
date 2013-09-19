
#ifndef EMF_CPP_C_CTYPEDELEMENT__HPP
#define EMF_CPP_C_CTYPEDELEMENT__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace C
{


// C::CTypedElement
class CTypedElement
{
public:

	typedef CTypedElement_ptr ptr_type;
	
	CTypedElement();
	virtual ~CTypedElement();

	typedef C::CClassifier_ptr type_t;
	typedef C::CSourceText_ptr source_t;

	
	// TODO
	// TODO

	
protected:

	type_t m_type;
	source_t m_source;

};

} // C


#endif // EMF_CPP_C_CTYPEDELEMENT__HPP
