
#ifndef EMF_CPP_KDM_STRUCTURE_SUBSYSTEM__HPP
#define EMF_CPP_KDM_STRUCTURE_SUBSYSTEM__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace structure
{


class Subsystem :  public virtual ::kdm::structure::AbstractStructureElement
{
public:

    typedef Subsystem_ptr ptr_type;

    Subsystem();
    virtual ~Subsystem();




    /*PROTECTED REGION ID(kdm::structure::Subsystem public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class StructurePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::structure::Subsystem protected) START*/
    /*PROTECTED REGION END*/
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_SUBSYSTEM__HPP
