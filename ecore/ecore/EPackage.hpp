
#ifndef EMF_CPP_ECORE_EPACKAGE__HPP
#define EMF_CPP_ECORE_EPACKAGE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

namespace ecore
{


// ecore::EPackage
class EPackage :  public virtual ::ecore::ENamedElement
{
public:

	typedef EPackage_ptr ptr_type;

	EPackage();
	virtual ~EPackage();

	// Typedefs
	typedef ::e4c::impl::attribute< EPackage__nsURI_tag > _nsURI_t;
	typedef ::e4c::impl::attribute< EPackage__nsPrefix_tag > _nsPrefix_t;
	typedef ::e4c::impl::reference< EPackage__eFactoryInstance_tag > _eFactoryInstance_t;
	typedef ::e4c::impl::reference< EPackage__eClassifiers_tag > _eClassifiers_t;
	typedef ::e4c::impl::reference< EPackage__eSubpackages_tag > _eSubpackages_t;
	typedef ::e4c::impl::reference< EPackage__eSuperPackage_tag > _eSuperPackage_t;

	
	// Members
	_nsURI_t nsURI;
	_nsPrefix_t nsPrefix;
	_eFactoryInstance_t eFactoryInstance;
	_eClassifiers_t eClassifiers;
	_eSubpackages_t eSubpackages;
	_eSuperPackage_t eSuperPackage;

};

} // ecore


#endif // EMF_CPP_ECORE_EPACKAGE__HPP
