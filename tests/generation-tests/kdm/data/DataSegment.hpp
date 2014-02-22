
#ifndef EMF_CPP_KDM_DATA_DATASEGMENT__HPP
#define EMF_CPP_KDM_DATA_DATASEGMENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/ColumnSet.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class DataSegment :  public virtual ::kdm::data::ColumnSet
{
public:

    typedef DataSegment_ptr ptr_type;

    DataSegment();
    virtual ~DataSegment();




    /*PROTECTED REGION ID(kdm::data::DataSegment public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::DataSegment protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_DATASEGMENT__HPP
