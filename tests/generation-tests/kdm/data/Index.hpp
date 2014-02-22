
#ifndef EMF_CPP_KDM_DATA_INDEX__HPP
#define EMF_CPP_KDM_DATA_INDEX__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/IndexElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class Index :  public virtual ::kdm::data::IndexElement
{
public:

    typedef Index_ptr ptr_type;

    Index();
    virtual ~Index();




    /*PROTECTED REGION ID(kdm::data::Index public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::Index protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_INDEX__HPP
