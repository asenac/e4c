
#ifndef EMF_CPP_ECORE_EFACTORY__HPP
#define EMF_CPP_ECORE_EFACTORY__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EModelElement.hpp>

namespace ecore
{


// ecore::EFactory
class EFactory :  public virtual ::ecore::EModelElement
{
public:

	typedef EFactory_ptr ptr_type;

	EFactory();
	virtual ~EFactory();

	// Typedefs
	typedef ::e4c::impl::reference< EFactory__ePackage_tag > _ePackage_t;

	
	// Members
	_ePackage_t ePackage;

};

} // ecore


#endif // EMF_CPP_ECORE_EFACTORY__HPP
