
#ifndef EMF_CPP_KDM_DATA_GROUPCONTENT__HPP
#define EMF_CPP_KDM_DATA_GROUPCONTENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ContentItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class GroupContent :  public virtual ::kdm::data::ContentItem
{
public:

    typedef GroupContent_ptr ptr_type;

    GroupContent();
    virtual ~GroupContent();




    /*PROTECTED REGION ID(kdm::data::GroupContent public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::GroupContent protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_GROUPCONTENT__HPP
