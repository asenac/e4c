
#ifndef EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALELEMENT__HPP
#define EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALELEMENT__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


class AbstractConceptualElement :  public virtual ::kdm::core::KDMEntity
{
public:

    typedef AbstractConceptualElement_ptr ptr_type;

    virtual ~AbstractConceptualElement();

    typedef std::set < kdm::source::SourceRef_ptr > source_t;
    typedef std::set < kdm::core::KDMEntity_ptr > implementation_t;
    typedef std::set < kdm::conceptual::AbstractConceptualRelationship_ptr > conceptualRelation_t;
    typedef std::set < kdm::action::ActionElement_ptr > abstraction_t;

    source_t getSource() const;
    void addSource(kdm::source::SourceRef_ptr source_);
    void addAllSource(const source_t& source_);
    implementation_t getImplementation() const;
    void addImplementation(kdm::core::KDMEntity_ptr implementation_);
    void addAllImplementation(const implementation_t& implementation_);
    conceptualRelation_t getConceptualRelation() const;
    void addConceptualRelation(kdm::conceptual::AbstractConceptualRelationship_ptr conceptualRelation_);
    void addAllConceptualRelation(const conceptualRelation_t& conceptualRelation_);
    abstraction_t getAbstraction() const;
    void addAbstraction(kdm::action::ActionElement_ptr abstraction_);
    void addAllAbstraction(const abstraction_t& abstraction_);


    /*PROTECTED REGION ID(kdm::conceptual::AbstractConceptualElement public) START*/
    /*PROTECTED REGION END*/

protected:
    AbstractConceptualElement();

    friend class ConceptualPackage;

    std::set < std::unique_ptr < kdm::source::SourceRef > > m_source;
    std::set < kdm::core::KDMEntity_ptr > m_implementation;
    std::set < std::unique_ptr < kdm::conceptual::AbstractConceptualRelationship > > m_conceptualRelation;
    std::set < std::unique_ptr < kdm::action::ActionElement > > m_abstraction;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::conceptual::AbstractConceptualElement protected) START*/
    /*PROTECTED REGION END*/
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_ABSTRACTCONCEPTUALELEMENT__HPP
