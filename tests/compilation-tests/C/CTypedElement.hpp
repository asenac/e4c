
#ifndef EMF_CPP_C_CTYPEDELEMENT__HPP
#define EMF_CPP_C_CTYPEDELEMENT__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <ecore/EObject.hpp>

namespace C
{


// C::CTypedElement
class CTypedElement : public virtual ::ecore::EObject
{
public:

	typedef CTypedElement_ptr ptr_type;

	CTypedElement();
	virtual ~CTypedElement();

	// Typedefs
	typedef ::e4c::impl::reference< CTypedElement__type_tag > _type_t;
	typedef ::e4c::impl::reference< CTypedElement__source_tag > _source_t;

	
	// Members
	_type_t type;
	_source_t source;

};

} // C


#endif // EMF_CPP_C_CTYPEDELEMENT__HPP
