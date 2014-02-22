
#ifndef EMF_CPP_KDM_DATA_DATARESOURCE__HPP
#define EMF_CPP_KDM_DATA_DATARESOURCE__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class DataResource :  public virtual ::kdm::data::AbstractDataElement
{
public:

    typedef DataResource_ptr ptr_type;

    DataResource();
    virtual ~DataResource();




    /*PROTECTED REGION ID(kdm::data::DataResource public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::DataResource protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATARESOURCE__HPP
