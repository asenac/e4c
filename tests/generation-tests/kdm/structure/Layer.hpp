
#ifndef EMF_CPP_KDM_STRUCTURE_LAYER__HPP
#define EMF_CPP_KDM_STRUCTURE_LAYER__HPP

#include <kdm/structure/fwd.hpp>
#include <kdm/structure/meta.hpp>
#include <kdm/structure/AbstractStructureElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace structure
{


class Layer :  public virtual ::kdm::structure::AbstractStructureElement
{
public:

    typedef Layer_ptr ptr_type;

    Layer();
    virtual ~Layer();




    /*PROTECTED REGION ID(kdm::structure::Layer public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class StructurePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::structure::Layer protected) START*/
    /*PROTECTED REGION END*/
};

} // structure
} // kdm


#endif // EMF_CPP_KDM_STRUCTURE_LAYER__HPP
