#ifndef EMF_CPP_ECORE_ECLASS__HPP
#define EMF_CPP_ECORE_ECLASS__HPP

#include <ecore/fwd.hpp>
#include <ecore/meta.hpp>
#include <ecore/EClassifier.hpp>

#include <e4c/mapping.hpp>

namespace ecore
{


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
    void addESuperTypes(ecore::EClass_ptr eSuperTypes_);
    void addAllESuperTypes(const eSuperTypes_t& eSuperTypes_);
    void removeESuperTypes(ecore::EClass_ptr eSuperTypes_);
    void clearESuperTypes();
    eOperations_t getEOperations() const;
    void addEOperations(ecore::EOperation_ptr eOperations_);
    void addAllEOperations(const eOperations_t& eOperations_);
    void removeEOperations(ecore::EOperation_ptr eOperations_);
    void clearEOperations();
    eAllAttributes_t getEAllAttributes() const;
    void addEAllAttributes(ecore::EAttribute_ptr eAllAttributes_);
    void addAllEAllAttributes(const eAllAttributes_t& eAllAttributes_);
    void removeEAllAttributes(ecore::EAttribute_ptr eAllAttributes_);
    void clearEAllAttributes();
    eAllReferences_t getEAllReferences() const;
    void addEAllReferences(ecore::EReference_ptr eAllReferences_);
    void addAllEAllReferences(const eAllReferences_t& eAllReferences_);
    void removeEAllReferences(ecore::EReference_ptr eAllReferences_);
    void clearEAllReferences();
    eReferences_t getEReferences() const;
    void addEReferences(ecore::EReference_ptr eReferences_);
    void addAllEReferences(const eReferences_t& eReferences_);
    void removeEReferences(ecore::EReference_ptr eReferences_);
    void clearEReferences();
    eAttributes_t getEAttributes() const;
    void addEAttributes(ecore::EAttribute_ptr eAttributes_);
    void addAllEAttributes(const eAttributes_t& eAttributes_);
    void removeEAttributes(ecore::EAttribute_ptr eAttributes_);
    void clearEAttributes();
    eAllContainments_t getEAllContainments() const;
    void addEAllContainments(ecore::EReference_ptr eAllContainments_);
    void addAllEAllContainments(const eAllContainments_t& eAllContainments_);
    void removeEAllContainments(ecore::EReference_ptr eAllContainments_);
    void clearEAllContainments();
    eAllOperations_t getEAllOperations() const;
    void addEAllOperations(ecore::EOperation_ptr eAllOperations_);
    void addAllEAllOperations(const eAllOperations_t& eAllOperations_);
    void removeEAllOperations(ecore::EOperation_ptr eAllOperations_);
    void clearEAllOperations();
    eAllStructuralFeatures_t getEAllStructuralFeatures() const;
    void addEAllStructuralFeatures(ecore::EStructuralFeature_ptr eAllStructuralFeatures_);
    void addAllEAllStructuralFeatures(const eAllStructuralFeatures_t& eAllStructuralFeatures_);
    void removeEAllStructuralFeatures(ecore::EStructuralFeature_ptr eAllStructuralFeatures_);
    void clearEAllStructuralFeatures();
    eAllSuperTypes_t getEAllSuperTypes() const;
    void addEAllSuperTypes(ecore::EClass_ptr eAllSuperTypes_);
    void addAllEAllSuperTypes(const eAllSuperTypes_t& eAllSuperTypes_);
    void removeEAllSuperTypes(ecore::EClass_ptr eAllSuperTypes_);
    void clearEAllSuperTypes();
    eIDAttribute_t getEIDAttribute() const;
    void setEIDAttribute(eIDAttribute_t eIDAttribute_);
    eStructuralFeatures_t getEStructuralFeatures() const;
    void addEStructuralFeatures(ecore::EStructuralFeature_ptr eStructuralFeatures_);
    void addAllEStructuralFeatures(const eStructuralFeatures_t& eStructuralFeatures_);
    void removeEStructuralFeatures(ecore::EStructuralFeature_ptr eStructuralFeatures_);
    void clearEStructuralFeatures();
    eGenericSuperTypes_t getEGenericSuperTypes() const;
    void addEGenericSuperTypes(ecore::EGenericType_ptr eGenericSuperTypes_);
    void addAllEGenericSuperTypes(const eGenericSuperTypes_t& eGenericSuperTypes_);
    void removeEGenericSuperTypes(ecore::EGenericType_ptr eGenericSuperTypes_);
    void clearEGenericSuperTypes();
    eAllGenericSuperTypes_t getEAllGenericSuperTypes() const;
    void addEAllGenericSuperTypes(ecore::EGenericType_ptr eAllGenericSuperTypes_);
    void addAllEAllGenericSuperTypes(const eAllGenericSuperTypes_t& eAllGenericSuperTypes_);
    void removeEAllGenericSuperTypes(ecore::EGenericType_ptr eAllGenericSuperTypes_);
    void clearEAllGenericSuperTypes();

    ecore::EBoolean isSuperTypeOf(ecore::EClass_ptr someClass);
    ecore::EInt getFeatureCount();
    ecore::EStructuralFeature_ptr getEStructuralFeature(ecore::EInt featureID);
    ecore::EInt getFeatureID(ecore::EStructuralFeature_ptr feature);
    ecore::EStructuralFeature_ptr getEStructuralFeature(ecore::EString featureName);
    ecore::EInt getOperationCount();
    ecore::EOperation_ptr getEOperation(ecore::EInt operationID);
    ecore::EInt getOperationID(ecore::EOperation_ptr operation);
    ecore::EOperation_ptr getOverride(ecore::EOperation_ptr operation);

    /*PROTECTED REGION ID(ecore::EClass public) ENABLED START*/
    void addFeatureAccesors(ecore::EStructuralFeature_ptr feature, e4c::get_t get, e4c::set_t set);
    e4c::get_t getFeatureGet(ecore::EStructuralFeature_ptr feature);
    e4c::set_t getFeatureSet(ecore::EStructuralFeature_ptr feature);
    /*PROTECTED REGION END*/

protected:

    friend class EcorePackage;

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




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(ecore::EClass protected) ENABLED START*/
    struct Impl;
    Impl * m_impl;
    /*PROTECTED REGION END*/
};

} // ecore


#endif // EMF_CPP_ECORE_ECLASS__HPP
