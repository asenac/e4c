
#ifndef EMF_CPP_KDM_CONCEPTUAL_RULEUNIT__HPP
#define EMF_CPP_KDM_CONCEPTUAL_RULEUNIT__HPP

#include <kdm/conceptual/fwd.hpp>
#include <kdm/conceptual/meta.hpp>
#include <kdm/conceptual/ConceptualContainer.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace conceptual
{


class RuleUnit :  public virtual ::kdm::conceptual::ConceptualContainer
{
public:

    typedef RuleUnit_ptr ptr_type;

    RuleUnit();
    virtual ~RuleUnit();




    /*PROTECTED REGION ID(kdm::conceptual::RuleUnit public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class ConceptualPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::conceptual::RuleUnit protected) START*/
    /*PROTECTED REGION END*/
};

} // conceptual
} // kdm


#endif // EMF_CPP_KDM_CONCEPTUAL_RULEUNIT__HPP
