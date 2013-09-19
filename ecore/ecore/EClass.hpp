
#ifndef EMF_CPP_ECORE_ECLASS__HPP
#define EMF_CPP_ECORE_ECLASS__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EClassifier.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


// ecore::EClass
class EClass :  public virtual ::ecore::EClassifier
{
public:

	typedef EClass_ptr ptr_type;
	
	EClass();
	virtual ~EClass();

	typedef int abstract_t;
	typedef int interface_t;
	typedef std::set < ecore::EClass_ptr > eSuperTypes_t;
	typedef boost::ptr_vector < ecore::EOperation > eOperations_t;
	typedef std::set < ecore::EAttribute_ptr > eAllAttributes_t;
	typedef std::set < ecore::EReference_ptr > eAllReferences_t;
	typedef std::set < ecore::EReference_ptr > eReferences_t;
	typedef std::set < ecore::EAttribute_ptr > eAttributes_t;
	typedef std::set < ecore::EReference_ptr > eAllContainments_t;
	typedef std::set < ecore::EOperation_ptr > eAllOperations_t;
	typedef std::set < ecore::EStructuralFeature_ptr > eAllStructuralFeatures_t;
	typedef std::set < ecore::EClass_ptr > eAllSuperTypes_t;
	typedef ecore::EAttribute_ptr eIDAttribute_t;
	typedef boost::ptr_vector < ecore::EStructuralFeature > eStructuralFeatures_t;
	typedef boost::ptr_vector < ecore::EGenericType > eGenericSuperTypes_t;
	typedef std::set < ecore::EGenericType_ptr > eAllGenericSuperTypes_t;

	
	void setAbstract(abstract_t _abstract);
	abstract_t getAbstract() const;
	void setInterface(interface_t _interface);
	interface_t getInterface() const;
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO
	// TODO

	
protected:

	abstract_t m_abstract;
	interface_t m_interface;
	eSuperTypes_t m_eSuperTypes;
	eOperations_t m_eOperations;
	eAllAttributes_t m_eAllAttributes;
	eAllReferences_t m_eAllReferences;
	eReferences_t m_eReferences;
	eAttributes_t m_eAttributes;
	eAllContainments_t m_eAllContainments;
	eAllOperations_t m_eAllOperations;
	eAllStructuralFeatures_t m_eAllStructuralFeatures;
	eAllSuperTypes_t m_eAllSuperTypes;
	eIDAttribute_t m_eIDAttribute;
	eStructuralFeatures_t m_eStructuralFeatures;
	eGenericSuperTypes_t m_eGenericSuperTypes;
	eAllGenericSuperTypes_t m_eAllGenericSuperTypes;

};

} // ecore


#endif // EMF_CPP_ECORE_ECLASS__HPP
