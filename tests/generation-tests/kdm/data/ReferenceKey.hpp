
#ifndef EMF_CPP_KDM_DATA_REFERENCEKEY__HPP
#define EMF_CPP_KDM_DATA_REFERENCEKEY__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/IndexElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class ReferenceKey :  public virtual ::kdm::data::IndexElement
{
public:

    typedef ReferenceKey_ptr ptr_type;

    ReferenceKey();
    virtual ~ReferenceKey();




    /*PROTECTED REGION ID(kdm::data::ReferenceKey public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::ReferenceKey protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_REFERENCEKEY__HPP
