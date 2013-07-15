#ifndef EMF_CPP_KDM_PACKAGE_HPP
#define EMF_CPP_KDM_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/fwd.hpp>

namespace kdm
{


class KdmPackage : public ::ecore::EPackage
{
public:
    static KdmPackage_ptr _instance();
 
 	// Classifiers
 
 	// Structural features

protected:
    KdmPackage();
};

} // kdm


#endif // EMF_CPP_KDM_PACKAGE_HPP
