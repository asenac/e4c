
#ifndef EMF_CPP_KDM_DATA_EXTENDEDDATAELEMENT__HPP
#define EMF_CPP_KDM_DATA_EXTENDEDDATAELEMENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractDataElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class ExtendedDataElement :  public virtual ::kdm::data::AbstractDataElement
{
public:

    typedef ExtendedDataElement_ptr ptr_type;

    ExtendedDataElement();
    virtual ~ExtendedDataElement();




    /*PROTECTED REGION ID(kdm::data::ExtendedDataElement public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::ExtendedDataElement protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_EXTENDEDDATAELEMENT__HPP
