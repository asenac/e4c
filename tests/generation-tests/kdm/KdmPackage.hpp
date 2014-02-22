#ifndef EMF_CPP_KDM_PACKAGE_HPP
#define EMF_CPP_KDM_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace kdm
{


class KdmPackage : public ::ecore::EPackage
{
public:
    static const KdmPackage_ptr _instance();





protected:
    KdmPackage();

};

} // kdm


#endif // EMF_CPP_KDM_PACKAGE_HPP
