#ifndef EMF_CPP_PRIMITIVETYPES_PACKAGE_HPP
#define EMF_CPP_PRIMITIVETYPES_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <PrimitiveTypes/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace PrimitiveTypes
{


class PrimitiveTypesPackage : public ::ecore::EPackage
{
public:
    static const PrimitiveTypesPackage_ptr _instance();

     ::ecore::EDataType_ptr getBoolean() const;
     ::ecore::EDataType_ptr getInteger() const;
     ::ecore::EDataType_ptr getString() const;
     ::ecore::EDataType_ptr getDouble() const;


     e4c::tag_t getTag_Boolean() const;
     e4c::tag_t getTag_Integer() const;
     e4c::tag_t getTag_String() const;
     e4c::tag_t getTag_Double() const;


protected:
    PrimitiveTypesPackage();

     ::ecore::EDataType_ptr m_Boolean;
     ::ecore::EDataType_ptr m_Integer;
     ::ecore::EDataType_ptr m_String;
     ::ecore::EDataType_ptr m_Double;
};

} // PrimitiveTypes


#endif // EMF_CPP_PRIMITIVETYPES_PACKAGE_HPP
