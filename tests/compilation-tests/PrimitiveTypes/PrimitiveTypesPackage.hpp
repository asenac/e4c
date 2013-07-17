#ifndef EMF_CPP_PRIMITIVETYPES_PACKAGE_HPP
#define EMF_CPP_PRIMITIVETYPES_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <PrimitiveTypes/fwd.hpp>

namespace PrimitiveTypes
{


class PrimitiveTypesPackage : public ::ecore::EPackage
{
public:
    static PrimitiveTypesPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_Boolean();
 	e4c::tag_t getTag_Integer();
 	e4c::tag_t getTag_String();
 	e4c::tag_t getTag_Double();
 
 	// Structural features

protected:
    PrimitiveTypesPackage();
};

} // PrimitiveTypes


#endif // EMF_CPP_PRIMITIVETYPES_PACKAGE_HPP
