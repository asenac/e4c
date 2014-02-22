#ifndef EMF_CPP_EMOF_PACKAGE_HPP
#define EMF_CPP_EMOF_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <emof/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace emof
{


class EmofPackage : public ::ecore::EPackage
{
public:
    static const EmofPackage_ptr _instance();

     ::ecore::EDataType_ptr getBoolean() const;
     ::ecore::EClass_ptr getClass() const;
     ::ecore::EClass_ptr getComment() const;
     ::ecore::EClass_ptr getDataType() const;
     ::ecore::EClass_ptr getElement() const;
     ::ecore::EClass_ptr getEnumeration() const;
     ::ecore::EClass_ptr getEnumerationLiteral() const;
     ::ecore::EClass_ptr getExtent() const;
     ::ecore::EDataType_ptr getInteger() const;
     ::ecore::EClass_ptr getMultiplicityElement() const;
     ::ecore::EClass_ptr getNamedElement() const;
     ::ecore::EClass_ptr getObject() const;
     ::ecore::EClass_ptr getOperation() const;
     ::ecore::EClass_ptr getPackage() const;
     ::ecore::EClass_ptr getParameter() const;
     ::ecore::EClass_ptr getPrimitiveType() const;
     ::ecore::EClass_ptr getProperty() const;
     ::ecore::EDataType_ptr getReal() const;
     ::ecore::EDataType_ptr getString() const;
     ::ecore::EClass_ptr getTag() const;
     ::ecore::EClass_ptr getType() const;
     ::ecore::EClass_ptr getTypedElement() const;
     ::ecore::EClass_ptr getURIExtent() const;
     ::ecore::EDataType_ptr getUnlimitedNatural() const;

     ::ecore::EAttribute_ptr getClass__isAbstract() const;
     ::ecore::EReference_ptr getClass__ownedAttribute() const;
     ::ecore::EReference_ptr getClass__ownedOperation() const;
     ::ecore::EReference_ptr getClass__superClass() const;
     ::ecore::EReference_ptr getComment__annotatedElement() const;
     ::ecore::EReference_ptr getElement__ownedComment() const;
     ::ecore::EReference_ptr getElement__tag() const;
     ::ecore::EReference_ptr getEnumeration__ownedLiteral() const;
     ::ecore::EReference_ptr getEnumerationLiteral__enumeration() const;
     ::ecore::EAttribute_ptr getMultiplicityElement__isOrdered() const;
     ::ecore::EAttribute_ptr getMultiplicityElement__isUnique() const;
     ::ecore::EAttribute_ptr getMultiplicityElement__lower() const;
     ::ecore::EAttribute_ptr getMultiplicityElement__upper() const;
     ::ecore::EAttribute_ptr getNamedElement__name() const;
     ::ecore::EReference_ptr getOperation__class() const;
     ::ecore::EReference_ptr getOperation__ownedParameter() const;
     ::ecore::EReference_ptr getOperation__raisedException() const;
     ::ecore::EReference_ptr getPackage__nestedPackage() const;
     ::ecore::EReference_ptr getPackage__ownedType() const;
     ::ecore::EAttribute_ptr getPackage__uri() const;
     ::ecore::EReference_ptr getParameter__operation() const;
     ::ecore::EReference_ptr getProperty__class() const;
     ::ecore::EAttribute_ptr getProperty__default() const;
     ::ecore::EAttribute_ptr getProperty__isComposite() const;
     ::ecore::EAttribute_ptr getProperty__isDerived() const;
     ::ecore::EAttribute_ptr getProperty__isId() const;
     ::ecore::EAttribute_ptr getProperty__isReadOnly() const;
     ::ecore::EReference_ptr getProperty__opposite() const;
     ::ecore::EReference_ptr getTag__element() const;
     ::ecore::EAttribute_ptr getTag__name() const;
     ::ecore::EAttribute_ptr getTag__value() const;
     ::ecore::EReference_ptr getType__package() const;
     ::ecore::EReference_ptr getTypedElement__type() const;

     e4c::tag_t getTag_Boolean() const;
     e4c::tag_t getTag_Class() const;
     e4c::tag_t getTag_Comment() const;
     e4c::tag_t getTag_DataType() const;
     e4c::tag_t getTag_Element() const;
     e4c::tag_t getTag_Enumeration() const;
     e4c::tag_t getTag_EnumerationLiteral() const;
     e4c::tag_t getTag_Extent() const;
     e4c::tag_t getTag_Integer() const;
     e4c::tag_t getTag_MultiplicityElement() const;
     e4c::tag_t getTag_NamedElement() const;
     e4c::tag_t getTag_Object() const;
     e4c::tag_t getTag_Operation() const;
     e4c::tag_t getTag_Package() const;
     e4c::tag_t getTag_Parameter() const;
     e4c::tag_t getTag_PrimitiveType() const;
     e4c::tag_t getTag_Property() const;
     e4c::tag_t getTag_Real() const;
     e4c::tag_t getTag_String() const;
     e4c::tag_t getTag_Tag() const;
     e4c::tag_t getTag_Type() const;
     e4c::tag_t getTag_TypedElement() const;
     e4c::tag_t getTag_URIExtent() const;
     e4c::tag_t getTag_UnlimitedNatural() const;

     e4c::tag_t getTag_Class__isAbstract() const;
     e4c::tag_t getTag_Class__ownedAttribute() const;
     e4c::tag_t getTag_Class__ownedOperation() const;
     e4c::tag_t getTag_Class__superClass() const;
     e4c::tag_t getTag_Comment__annotatedElement() const;
     e4c::tag_t getTag_Element__ownedComment() const;
     e4c::tag_t getTag_Element__tag() const;
     e4c::tag_t getTag_Enumeration__ownedLiteral() const;
     e4c::tag_t getTag_EnumerationLiteral__enumeration() const;
     e4c::tag_t getTag_MultiplicityElement__isOrdered() const;
     e4c::tag_t getTag_MultiplicityElement__isUnique() const;
     e4c::tag_t getTag_MultiplicityElement__lower() const;
     e4c::tag_t getTag_MultiplicityElement__upper() const;
     e4c::tag_t getTag_NamedElement__name() const;
     e4c::tag_t getTag_Operation__class() const;
     e4c::tag_t getTag_Operation__ownedParameter() const;
     e4c::tag_t getTag_Operation__raisedException() const;
     e4c::tag_t getTag_Package__nestedPackage() const;
     e4c::tag_t getTag_Package__ownedType() const;
     e4c::tag_t getTag_Package__uri() const;
     e4c::tag_t getTag_Parameter__operation() const;
     e4c::tag_t getTag_Property__class() const;
     e4c::tag_t getTag_Property__default() const;
     e4c::tag_t getTag_Property__isComposite() const;
     e4c::tag_t getTag_Property__isDerived() const;
     e4c::tag_t getTag_Property__isId() const;
     e4c::tag_t getTag_Property__isReadOnly() const;
     e4c::tag_t getTag_Property__opposite() const;
     e4c::tag_t getTag_Tag__element() const;
     e4c::tag_t getTag_Tag__name() const;
     e4c::tag_t getTag_Tag__value() const;
     e4c::tag_t getTag_Type__package() const;
     e4c::tag_t getTag_TypedElement__type() const;

protected:
    EmofPackage();

     ::ecore::EDataType_ptr m_Boolean;
     ::ecore::EClass_ptr m_Class;
     ::ecore::EClass_ptr m_Comment;
     ::ecore::EClass_ptr m_DataType;
     ::ecore::EClass_ptr m_Element;
     ::ecore::EClass_ptr m_Enumeration;
     ::ecore::EClass_ptr m_EnumerationLiteral;
     ::ecore::EClass_ptr m_Extent;
     ::ecore::EDataType_ptr m_Integer;
     ::ecore::EClass_ptr m_MultiplicityElement;
     ::ecore::EClass_ptr m_NamedElement;
     ::ecore::EClass_ptr m_Object;
     ::ecore::EClass_ptr m_Operation;
     ::ecore::EClass_ptr m_Package;
     ::ecore::EClass_ptr m_Parameter;
     ::ecore::EClass_ptr m_PrimitiveType;
     ::ecore::EClass_ptr m_Property;
     ::ecore::EDataType_ptr m_Real;
     ::ecore::EDataType_ptr m_String;
     ::ecore::EClass_ptr m_Tag;
     ::ecore::EClass_ptr m_Type;
     ::ecore::EClass_ptr m_TypedElement;
     ::ecore::EClass_ptr m_URIExtent;
     ::ecore::EDataType_ptr m_UnlimitedNatural;
     ::ecore::EAttribute_ptr m_Class__isAbstract;
     ::ecore::EReference_ptr m_Class__ownedAttribute;
     ::ecore::EReference_ptr m_Class__ownedOperation;
     ::ecore::EReference_ptr m_Class__superClass;
     ::ecore::EReference_ptr m_Comment__annotatedElement;
     ::ecore::EReference_ptr m_Element__ownedComment;
     ::ecore::EReference_ptr m_Element__tag;
     ::ecore::EReference_ptr m_Enumeration__ownedLiteral;
     ::ecore::EReference_ptr m_EnumerationLiteral__enumeration;
     ::ecore::EAttribute_ptr m_MultiplicityElement__isOrdered;
     ::ecore::EAttribute_ptr m_MultiplicityElement__isUnique;
     ::ecore::EAttribute_ptr m_MultiplicityElement__lower;
     ::ecore::EAttribute_ptr m_MultiplicityElement__upper;
     ::ecore::EAttribute_ptr m_NamedElement__name;
     ::ecore::EReference_ptr m_Operation__class;
     ::ecore::EReference_ptr m_Operation__ownedParameter;
     ::ecore::EReference_ptr m_Operation__raisedException;
     ::ecore::EReference_ptr m_Package__nestedPackage;
     ::ecore::EReference_ptr m_Package__ownedType;
     ::ecore::EAttribute_ptr m_Package__uri;
     ::ecore::EReference_ptr m_Parameter__operation;
     ::ecore::EReference_ptr m_Property__class;
     ::ecore::EAttribute_ptr m_Property__default;
     ::ecore::EAttribute_ptr m_Property__isComposite;
     ::ecore::EAttribute_ptr m_Property__isDerived;
     ::ecore::EAttribute_ptr m_Property__isId;
     ::ecore::EAttribute_ptr m_Property__isReadOnly;
     ::ecore::EReference_ptr m_Property__opposite;
     ::ecore::EReference_ptr m_Tag__element;
     ::ecore::EAttribute_ptr m_Tag__name;
     ::ecore::EAttribute_ptr m_Tag__value;
     ::ecore::EReference_ptr m_Type__package;
     ::ecore::EReference_ptr m_TypedElement__type;
};

} // emof


#endif // EMF_CPP_EMOF_PACKAGE_HPP
