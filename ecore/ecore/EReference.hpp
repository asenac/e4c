#ifndef EMF_CPP_ECORE_EREFERENCE__HPP
#define EMF_CPP_ECORE_EREFERENCE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EStructuralFeature.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


class EReference :  public virtual ::ecore::EStructuralFeature
{
public:

	typedef EReference_ptr ptr_type;
	
	EReference();
	virtual ~EReference();

	typedef ::ecore::EBoolean containment_t;
	typedef ::ecore::EBoolean container_t;
	typedef ::ecore::EBoolean resolveProxies_t;
	typedef ecore::EReference_ptr eOpposite_t;
	typedef ecore::EClass_ptr eReferenceType_t;
	typedef std::vector < ecore::EAttribute_ptr > eKeys_t;
	
	void setContainment(containment_t _containment);
	containment_t getContainment() const;
	void setContainer(container_t _container);
	container_t getContainer() const;
	void setResolveProxies(resolveProxies_t _resolveProxies);
	resolveProxies_t getResolveProxies() const;
	eOpposite_t getEOpposite() const;
	void setEOpposite(eOpposite_t eOpposite_);
	eReferenceType_t getEReferenceType() const;
	void setEReferenceType(eReferenceType_t eReferenceType_);
	eKeys_t getEKeys() const;
	void addEKeys(ecore::EAttribute_ptr eKeys_);
	void addAllEKeys(const eKeys_t& eKeys_);
	void removeEKeys(ecore::EAttribute_ptr eKeys_);
	void clearEKeys();
	

	/*PROTECTED REGION ID(ecore::EReference public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EcorePackage;

	containment_t m_containment;
	container_t m_container;
	resolveProxies_t m_resolveProxies;
	ecore::EReference_ptr m_eOpposite;
	ecore::EClass_ptr m_eReferenceType;
	std::vector < ecore::EAttribute_ptr > m_eKeys;

	
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(ecore::EReference protected) START*/
	/*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_EREFERENCE__HPP
