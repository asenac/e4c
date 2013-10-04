#ifndef EMF_CPP_JSON_PACKAGE_HPP
#define EMF_CPP_JSON_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <json/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace json
{


class JsonPackage : public ::ecore::EPackage
{
public:
    static const JsonPackage_ptr _instance();

 	::ecore::EClass_ptr getObjectValue() const;
 	::ecore::EClass_ptr getNVPair() const;
 	::ecore::EClass_ptr getValue() const;
 	::ecore::EClass_ptr getStringValue() const;
 	::ecore::EClass_ptr getNumberValue() const;
 	::ecore::EClass_ptr getBooleanValue() const;
 	::ecore::EClass_ptr getArrayValue() const;
 	::ecore::EClass_ptr getNullValue() const;
 	
 	::ecore::EReference_ptr getObjectValue__members() const;
 	::ecore::EAttribute_ptr getNVPair__name() const;
 	::ecore::EReference_ptr getNVPair__value() const;
 	::ecore::EAttribute_ptr getStringValue__value() const;
 	::ecore::EAttribute_ptr getNumberValue__value() const;
 	::ecore::EAttribute_ptr getBooleanValue__value() const;
 	::ecore::EReference_ptr getArrayValue__values() const;

 	e4c::tag_t getTag_ObjectValue() const;
 	e4c::tag_t getTag_NVPair() const;
 	e4c::tag_t getTag_Value() const;
 	e4c::tag_t getTag_StringValue() const;
 	e4c::tag_t getTag_NumberValue() const;
 	e4c::tag_t getTag_BooleanValue() const;
 	e4c::tag_t getTag_ArrayValue() const;
 	e4c::tag_t getTag_NullValue() const;
 
 	e4c::tag_t getTag_ObjectValue__members() const;
 	e4c::tag_t getTag_NVPair__name() const;
 	e4c::tag_t getTag_NVPair__value() const;
 	e4c::tag_t getTag_StringValue__value() const;
 	e4c::tag_t getTag_NumberValue__value() const;
 	e4c::tag_t getTag_BooleanValue__value() const;
 	e4c::tag_t getTag_ArrayValue__values() const;

protected:
    JsonPackage();
    
 	::ecore::EClass_ptr m_ObjectValue;
 	::ecore::EClass_ptr m_NVPair;
 	::ecore::EClass_ptr m_Value;
 	::ecore::EClass_ptr m_StringValue;
 	::ecore::EClass_ptr m_NumberValue;
 	::ecore::EClass_ptr m_BooleanValue;
 	::ecore::EClass_ptr m_ArrayValue;
 	::ecore::EClass_ptr m_NullValue;
 	::ecore::EReference_ptr m_ObjectValue__members;
 	::ecore::EAttribute_ptr m_NVPair__name;
 	::ecore::EReference_ptr m_NVPair__value;
 	::ecore::EAttribute_ptr m_StringValue__value;
 	::ecore::EAttribute_ptr m_NumberValue__value;
 	::ecore::EAttribute_ptr m_BooleanValue__value;
 	::ecore::EReference_ptr m_ArrayValue__values;
};

} // json


#endif // EMF_CPP_JSON_PACKAGE_HPP
