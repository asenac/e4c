
#ifndef EMF_CPP_KDM_DATA_SEQCONTENT__HPP
#define EMF_CPP_KDM_DATA_SEQCONTENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ComplexContentType.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class SeqContent :  public virtual ::kdm::data::ComplexContentType
{
public:

    typedef SeqContent_ptr ptr_type;

    SeqContent();
    virtual ~SeqContent();




    /*PROTECTED REGION ID(kdm::data::SeqContent public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::SeqContent protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_SEQCONTENT__HPP
