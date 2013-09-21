
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

	
	type_t getType() const;
	source_t getSource() const;


	C::CClassifier_ptr m_type;
	C::CSourceText_ptr m_source;

		
protected:

};

} // C


#endif // EMF_CPP_C_CTYPEDELEMENT__HPP
