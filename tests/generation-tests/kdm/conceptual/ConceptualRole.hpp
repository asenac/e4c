
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALROLE__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALROLE__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


class ConceptualRole :  public virtual ::kdm::conceptual::AbstractConceptualElement
{
public:

    typedef ConceptualRole_ptr ptr_type;

    ConceptualRole();
    virtual ~ConceptualRole();

    typedef kdm::conceptual::AbstractConceptualElement_ptr conceptualElement_t;

    conceptualElement_t getConceptualElement() const;
    void setConceptualElement(conceptualElement_t conceptualElement_);


    /*PROTECTED REGION ID(kdm::conceptual::ConceptualRole public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ConceptualPackage;

    kdm::conceptual::AbstractConceptualElement_ptr m_conceptualElement;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::conceptual::ConceptualRole protected) START*/
    /*PROTECTED REGION END*/
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALROLE__HPP
