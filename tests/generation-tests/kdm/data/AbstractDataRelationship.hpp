
#ifndef EMF_CPP_KDM_DATA_ABSTRACTDATARELATIONSHIP__HPP
#define EMF_CPP_KDM_DATA_ABSTRACTDATARELATIONSHIP__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/core/KDMRelationship.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class AbstractDataRelationship :  public virtual ::kdm::core::KDMRelationship
{
public:

    typedef AbstractDataRelationship_ptr ptr_type;

    virtual ~AbstractDataRelationship();




    /*PROTECTED REGION ID(kdm::data::AbstractDataRelationship public) START*/
    /*PROTECTED REGION END*/

protected:
    AbstractDataRelationship();

    friend class DataPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::AbstractDataRelationship protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_ABSTRACTDATARELATIONSHIP__HPP
