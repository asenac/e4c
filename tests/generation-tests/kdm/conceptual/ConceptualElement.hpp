
#ifndef EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALELEMENT__HPP
#define EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALELEMENT__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/AbstractConceptualElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


class ConceptualElement :  public virtual ::kdm::conceptual::AbstractConceptualElement
{
public:

    typedef ConceptualElement_ptr ptr_type;

    ConceptualElement();
    virtual ~ConceptualElement();




    /*PROTECTED REGION ID(kdm::conceptual::ConceptualElement public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ConceptualPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::conceptual::ConceptualElement protected) START*/
    /*PROTECTED REGION END*/
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_CONCEPTUALELEMENT__HPP
