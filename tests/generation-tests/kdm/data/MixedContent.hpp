
#ifndef EMF_CPP_KDM_DATA_MIXEDCONTENT__HPP
#define EMF_CPP_KDM_DATA_MIXEDCONTENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ComplexContentType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class MixedContent :  public virtual ::kdm::data::ComplexContentType
{
public:

    typedef MixedContent_ptr ptr_type;

    MixedContent();
    virtual ~MixedContent();




    /*PROTECTED REGION ID(kdm::data::MixedContent public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::MixedContent protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_MIXEDCONTENT__HPP
