#ifndef EMF_CPP_PRIMITIVETYPES_PACKAGE_HPP
#define EMF_CPP_PRIMITIVETYPES_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <PrimitiveTypes/fwd.hpp>

namespace PrimitiveTypes
{


class PrimitiveTypesPackage : public ::ecore::EPackage
{
public:
    static const PrimitiveTypesPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_Integer() const;
 	e4c::tag_t getTag_String() const;
 	e4c::tag_t getTag_Boolean() const;
 	e4c::tag_t getTag_Double() const;
 
 	// Structural features

protected:
    PrimitiveTypesPackage();
};

} // PrimitiveTypes


#endif // EMF_CPP_PRIMITIVETYPES_PACKAGE_HPP
