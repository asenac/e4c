
#ifndef EMF_CPP_KDM_SOURCE_IMAGE__HPP
#define EMF_CPP_KDM_SOURCE_IMAGE__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


class Image :  public virtual ::kdm::source::InventoryItem
{
public:

    typedef Image_ptr ptr_type;

    Image();
    virtual ~Image();




    /*PROTECTED REGION ID(kdm::source::Image public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SourcePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::source::Image protected) START*/
    /*PROTECTED REGION END*/
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_IMAGE__HPP
