
#ifndef EMF_CPP_ECORE_EPACKAGE__HPP
#define EMF_CPP_ECORE_EPACKAGE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/ENamedElement.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EPackage :  public virtual ::ecore::ENamedElement
{
public:

	typedef EPackage_ptr ptr_type;
	
	EPackage();
	virtual ~EPackage();

	typedef ::ecore::EString nsURI_t;
	typedef ::ecore::EString nsPrefix_t;
	typedef ecore::EFactory_ptr eFactoryInstance_t;
	typedef std::vector < ecore::EClassifier_ptr > eClassifiers_t;
	typedef std::vector < ecore::EPackage_ptr > eSubpackages_t;
	typedef ecore::EPackage_ptr eSuperPackage_t;
	
	void setNsURI(nsURI_t _nsURI);
	nsURI_t getNsURI() const;
	void setNsPrefix(nsPrefix_t _nsPrefix);
	nsPrefix_t getNsPrefix() const;
	eFactoryInstance_t getEFactoryInstance() const;
	
	void setEFactoryInstance(eFactoryInstance_t eFactoryInstance_);
	eClassifiers_t getEClassifiers() const;
	void addEClassifiers(ecore::EClassifier_ptr eClassifiers_);
	void addAllEClassifiers(const eClassifiers_t& eClassifiers_);
	eSubpackages_t getESubpackages() const;
	void addESubpackages(ecore::EPackage_ptr eSubpackages_);
	void addAllESubpackages(const eSubpackages_t& eSubpackages_);
	eSuperPackage_t getESuperPackage() const;
	
	ecore::EClassifier_ptr getEClassifier(ecore::EString name);
		
protected:

	friend class EcorePackage;

	nsURI_t m_nsURI;
	nsPrefix_t m_nsPrefix;
	ecore::EFactory_ptr m_eFactoryInstance;
	std::vector < std::unique_ptr < ecore::EClassifier > > m_eClassifiers;
	std::vector < std::unique_ptr < ecore::EPackage > > m_eSubpackages;
	ecore::EPackage_ptr m_eSuperPackage;

	
	void setESuperPackage(eSuperPackage_t eSuperPackage_);
};

} // ecore


#endif // EMF_CPP_ECORE_EPACKAGE__HPP
