#ifndef EMF_CPP_PRIMITIVETYPES_FACTORY_HPP
#define EMF_CPP_PRIMITIVETYPES_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <PrimitiveTypes/fwd.hpp>

namespace PrimitiveTypes
{


class PrimitiveTypesFactory : public ::ecore::EFactory
{
public:

    static const PrimitiveTypesFactory_ptr _instance();


protected:

    PrimitiveTypesFactory();
};

} // PrimitiveTypes


#endif // EMF_CPP_PRIMITIVETYPES_FACTORY_HPP
