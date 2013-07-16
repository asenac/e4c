
#ifndef EMF_CPP_C_CSTRUCTURECONTENTS__HPP
#define EMF_CPP_C_CSTRUCTURECONTENTS__HPP

#include <C/fwd.hpp>
#include <C/meta.hpp>
#include <ecore/EObject.hpp>

namespace C
{


// C::CStructureContents
class CStructureContents : public virtual ::ecore::EObject
{
public:

	typedef CStructureContents_ptr ptr_type;

	CStructureContents();
	virtual ~CStructureContents();

	// Typedefs
	typedef ::e4c::impl::reference< CStructureContents__sc_container_tag > _sc_container_t;

	
	// Members
	_sc_container_t sc_container;

};

} // C


#endif // EMF_CPP_C_CSTRUCTURECONTENTS__HPP
