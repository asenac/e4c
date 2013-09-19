#ifndef EMF_CPP_KDM_FACTORY_HPP
#define EMF_CPP_KDM_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/fwd.hpp>

namespace kdm
{


class KdmFactory : public ::ecore::EFactory
{
public:

    static const KdmFactory_ptr _instance();


protected:

    KdmFactory();
};

} // kdm


#endif // EMF_CPP_KDM_FACTORY_HPP
