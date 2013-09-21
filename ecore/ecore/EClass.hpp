
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

	typedef ::ecore::EBoolean abstract_t;
	typedef ::ecore::EBoolean interface_t;
	typedef std::vector < ecore::EClass_ptr > eSuperTypes_t;
	typedef std::vector < ecore::EOperation_ptr > eOperations_t;
	typedef std::vector < ecore::EAttribute_ptr > eAllAttributes_t;
	typedef std::vector < ecore::EReference_ptr > eAllReferences_t;
	typedef std::vector < ecore::EReference_ptr > eReferences_t;
	typedef std::vector < ecore::EAttribute_ptr > eAttributes_t;
	typedef std::vector < ecore::EReference_ptr > eAllContainments_t;
	typedef std::vector < ecore::EOperation_ptr > eAllOperations_t;
	typedef std::vector < ecore::EStructuralFeature_ptr > eAllStructuralFeatures_t;
	typedef std::vector < ecore::EClass_ptr > eAllSuperTypes_t;
	typedef ecore::EAttribute_ptr eIDAttribute_t;
	typedef std::vector < ecore::EStructuralFeature_ptr > eStructuralFeatures_t;
	typedef std::vector < ecore::EGenericType_ptr > eGenericSuperTypes_t;
	typedef std::vector < ecore::EGenericType_ptr > eAllGenericSuperTypes_t;

	
	void setAbstract(abstract_t _abstract);
	abstract_t getAbstract() const;
	void setInterface(interface_t _interface);
	interface_t getInterface() const;
	eSuperTypes_t getESuperTypes() const;
	
	eOperations_t getEOperations() const;
	void addEOperations(ecore::EOperation_ptr eOperations_);
	eAllAttributes_t getEAllAttributes() const;
	
	eAllReferences_t getEAllReferences() const;
	
	eReferences_t getEReferences() const;
	
	eAttributes_t getEAttributes() const;
	
	eAllContainments_t getEAllContainments() const;
	
	eAllOperations_t getEAllOperations() const;
	
	eAllStructuralFeatures_t getEAllStructuralFeatures() const;
	
	eAllSuperTypes_t getEAllSuperTypes() const;
	
	eIDAttribute_t getEIDAttribute() const;
	
	void setEIDAttribute(eIDAttribute_t eIDAttribute_);
	eStructuralFeatures_t getEStructuralFeatures() const;
	void addEStructuralFeatures(ecore::EStructuralFeature_ptr eStructuralFeatures_);
	eGenericSuperTypes_t getEGenericSuperTypes() const;
	void addEGenericSuperTypes(ecore::EGenericType_ptr eGenericSuperTypes_);
	eAllGenericSuperTypes_t getEAllGenericSuperTypes() const;
	

		
protected:

	abstract_t m_abstract;
	interface_t m_interface;
	std::vector < ecore::EClass_ptr > m_eSuperTypes;
	std::vector < std::unique_ptr < ecore::EOperation > > m_eOperations;
	std::vector < ecore::EAttribute_ptr > m_eAllAttributes;
	std::vector < ecore::EReference_ptr > m_eAllReferences;
	std::vector < ecore::EReference_ptr > m_eReferences;
	std::vector < ecore::EAttribute_ptr > m_eAttributes;
	std::vector < ecore::EReference_ptr > m_eAllContainments;
	std::vector < ecore::EOperation_ptr > m_eAllOperations;
	std::vector < ecore::EStructuralFeature_ptr > m_eAllStructuralFeatures;
	std::vector < ecore::EClass_ptr > m_eAllSuperTypes;
	ecore::EAttribute_ptr m_eIDAttribute;
	std::vector < std::unique_ptr < ecore::EStructuralFeature > > m_eStructuralFeatures;
	std::vector < std::unique_ptr < ecore::EGenericType > > m_eGenericSuperTypes;
	std::vector < ecore::EGenericType_ptr > m_eAllGenericSuperTypes;

	
};

} // ecore


#endif // EMF_CPP_ECORE_ECLASS__HPP
