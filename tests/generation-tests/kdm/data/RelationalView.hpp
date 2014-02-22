
#ifndef EMF_CPP_KDM_DATA_RELATIONALVIEW__HPP
#define EMF_CPP_KDM_DATA_RELATIONALVIEW__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ColumnSet.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class RelationalView :  public virtual ::kdm::data::ColumnSet
{
public:

    typedef RelationalView_ptr ptr_type;

    RelationalView();
    virtual ~RelationalView();




    /*PROTECTED REGION ID(kdm::data::RelationalView public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::RelationalView protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_RELATIONALVIEW__HPP
