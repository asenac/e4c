
#ifndef EMF_CPP_ECORE_EREFERENCE__HPP
#define EMF_CPP_ECORE_EREFERENCE__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EStructuralFeature.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::EReference
class EReference :  public virtual ::ecore::EStructuralFeature
{
public:

	typedef EReference_ptr ptr_type;
	
	EReference();
	virtual ~EReference();

	typedef int containment_t;
	typedef int container_t;
	typedef int resolveProxies_t;
	typedef ecore::EReference_ptr eOpposite_t;
	typedef ecore::EClass_ptr eReferenceType_t;
	typedef std::set < ecore::EAttribute_ptr > eKeys_t;

	
	void setContainment(containment_t _containment);
	containment_t getContainment() const;
	void setContainer(container_t _container);
	container_t getContainer() const;
	void setResolveProxies(resolveProxies_t _resolveProxies);
	resolveProxies_t getResolveProxies() const;
	// TODO
	// TODO
	// TODO

	
protected:

	containment_t m_containment;
	container_t m_container;
	resolveProxies_t m_resolveProxies;
	eOpposite_t m_eOpposite;
	eReferenceType_t m_eReferenceType;
	eKeys_t m_eKeys;

};

} // ecore


#endif // EMF_CPP_ECORE_EREFERENCE__HPP
