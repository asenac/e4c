
#ifndef EMF_CPP_C_CSTRUCTURED__HPP
#define EMF_CPP_C_CSTRUCTURED__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <C/CClassifier.hpp>
#include <C/CStructureContents.hpp>

namespace C
{


// C::CStructured
class CStructured :  public virtual ::C::CClassifier,  public virtual ::C::CStructureContents
{
public:

	typedef CStructured_ptr ptr_type;

	CStructured();
	virtual ~CStructured();

	// Typedefs
	typedef ::e4c::impl::reference< CStructured__contains_tag > _contains_t;

	
	// Members
	_contains_t contains;

};

} // C


#endif // EMF_CPP_C_CSTRUCTURED__HPP
