
#ifndef EMF_CPP_KDM_SOURCE_CONFIGURATION__HPP
#define EMF_CPP_KDM_SOURCE_CONFIGURATION__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


class Configuration :  public virtual ::kdm::source::InventoryItem
{
public:

    typedef Configuration_ptr ptr_type;

    Configuration();
    virtual ~Configuration();




    /*PROTECTED REGION ID(kdm::source::Configuration public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SourcePackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::source::Configuration protected) START*/
    /*PROTECTED REGION END*/
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_CONFIGURATION__HPP
