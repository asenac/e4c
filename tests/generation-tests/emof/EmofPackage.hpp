#ifndef EMF_CPP_EMOF_PACKAGE_HPP
#define EMF_CPP_EMOF_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <emof/fwd.hpp>

namespace emof
{


class EmofPackage : public ::ecore::EPackage
{
public:
    static const EmofPackage_ptr _instance();
 
 	// Classifiers
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
 
 	// Structural features
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
};

} // emof


#endif // EMF_CPP_EMOF_PACKAGE_HPP
