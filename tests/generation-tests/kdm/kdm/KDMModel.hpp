
#ifndef EMF_CPP_KDM_KDM_KDMMODEL__HPP
#define EMF_CPP_KDM_KDM_KDMMODEL__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/kdm/KDMFramework.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


class KDMModel :  public virtual ::kdm::kdm::KDMFramework
{
public:

    typedef KDMModel_ptr ptr_type;

    virtual ~KDMModel();




    /*PROTECTED REGION ID(kdm::kdm::KDMModel public) START*/
    /*PROTECTED REGION END*/

protected:
    KDMModel();

    friend class KdmPackage;





    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::kdm::KDMModel protected) START*/
    /*PROTECTED REGION END*/
};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_KDMMODEL__HPP
