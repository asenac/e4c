#ifndef EMF_CPP_KDM_CORE_FACTORY_HPP
#define EMF_CPP_KDM_CORE_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/core/fwd.hpp>

namespace kdm
{
namespace core
{


class CoreFactory : public ::ecore::EFactory
{
public:

    static const CoreFactory_ptr _instance();

    AggregatedRelationship_ptr createAggregatedRelationship() const;

protected:

    CoreFactory();
};

} // core
} // kdm


#endif // EMF_CPP_KDM_CORE_FACTORY_HPP
