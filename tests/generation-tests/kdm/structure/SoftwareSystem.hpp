
#ifndef EMF_CPP_KDM_STRUCTURE_SOFTWARESYSTEM__HPP
#define EMF_CPP_KDM_STRUCTURE_SOFTWARESYSTEM__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace structure
{


class SoftwareSystem :  public virtual ::kdm::structure::AbstractStructureElement
{
public:

    typedef SoftwareSystem_ptr ptr_type;

    SoftwareSystem();
    virtual ~SoftwareSystem();




    /*PROTECTED REGION ID(kdm::structure::SoftwareSystem public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class StructurePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::structure::SoftwareSystem protected) START*/
    /*PROTECTED REGION END*/
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_SOFTWARESYSTEM__HPP
