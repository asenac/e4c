
#ifndef EMF_CPP_ECORE_EPACKAGE__HPP
#define EMF_CPP_ECORE_EPACKAGE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::EPackage
class EPackage :  public virtual ::ecore::ENamedElement
{
public:

	typedef EPackage_ptr ptr_type;
	
	EPackage();
	virtual ~EPackage();

	typedef int nsURI_t;
	typedef int nsPrefix_t;
	typedef ecore::EFactory_ptr eFactoryInstance_t;
	typedef boost::ptr_vector < ecore::EClassifier > eClassifiers_t;
	typedef boost::ptr_vector < ecore::EPackage > eSubpackages_t;
	typedef ecore::EPackage_ptr eSuperPackage_t;

	
	void setNsURI(nsURI_t _nsURI);
	nsURI_t getNsURI() const;
	void setNsPrefix(nsPrefix_t _nsPrefix);
	nsPrefix_t getNsPrefix() const;
	// TODO
	// TODO
	// TODO
	// TODO

	
protected:

	nsURI_t m_nsURI;
	nsPrefix_t m_nsPrefix;
	eFactoryInstance_t m_eFactoryInstance;
	eClassifiers_t m_eClassifiers;
	eSubpackages_t m_eSubpackages;
	eSuperPackage_t m_eSuperPackage;

};

} // ecore


#endif // EMF_CPP_ECORE_EPACKAGE__HPP
