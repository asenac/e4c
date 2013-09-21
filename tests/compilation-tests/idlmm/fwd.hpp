#ifndef EMF_CPP_IDLMM_FWD_HPP
#define EMF_CPP_IDLMM_FWD_HPP


#include <e4c/mapping.hpp>

namespace idlmm
{


class IdlmmPackage;
typedef IdlmmPackage * IdlmmPackage_ptr;
class IdlmmFactory;
typedef IdlmmFactory * IdlmmFactory_ptr;

// Data types
enum class ParameterMode : int
{
	PARAM_IN,
    PARAM_OUT,
    PARAM_INOUT
};
enum class PrimitiveKind : int
{
	PK_NULL,
    PK_VOID,
    PK_SHORT,
    PK_LONG,
    PK_USHORT,
    PK_ULONG,
    PK_FLOAT,
    PK_DOUBLE,
    PK_BOOLEAN,
    PK_CHAR,
    PK_OCTET,
    PK_ANY,
    PK_LONGDOUBLE,
    PK_WSTRING,
    PK_TYPECODE,
    PK_WCHAR,
    PK_PRINCIPAL,
    PK_STRING,
    PK_ULONGLONG,
    PK_OBJREF,
    PK_LONGLONG
};

/*PROTECTED REGION ID(typedef_idlmm::EAny) ENABLED START*/typedef int EAny;
/*PROTECTED REGION END*/

/*PROTECTED REGION ID(typedef_idlmm::ETypeCode) ENABLED START*/typedef int ETypeCode;
/*PROTECTED REGION END*/


// Classes
class ModelElement;
typedef ModelElement* ModelElement_ptr;
class Container;
typedef Container* Container_ptr;
class Contained;
typedef Contained* Contained_ptr;
class InterfaceDef;
typedef InterfaceDef* InterfaceDef_ptr;
class ModuleDef;
typedef ModuleDef* ModuleDef_ptr;
class IDLType;
typedef IDLType* IDLType_ptr;
class OperationDef;
typedef OperationDef* OperationDef_ptr;
class AttributeDef;
typedef AttributeDef* AttributeDef_ptr;
class ConstantDef;
typedef ConstantDef* ConstantDef_ptr;
class Typed;
typedef Typed* Typed_ptr;
class ParameterDef;
typedef ParameterDef* ParameterDef_ptr;
class PrimitiveDef;
typedef PrimitiveDef* PrimitiveDef_ptr;
class ExceptionDef;
typedef ExceptionDef* ExceptionDef_ptr;
class Field;
typedef Field* Field_ptr;
class FixedDef;
typedef FixedDef* FixedDef_ptr;
class WstringDef;
typedef WstringDef* WstringDef_ptr;
class StringDef;
typedef StringDef* StringDef_ptr;
class AliasDef;
typedef AliasDef* AliasDef_ptr;
class ArrayDef;
typedef ArrayDef* ArrayDef_ptr;
class SequenceDef;
typedef SequenceDef* SequenceDef_ptr;
class UnionField;
typedef UnionField* UnionField_ptr;
class TypedefDef;
typedef TypedefDef* TypedefDef_ptr;
class UnionDef;
typedef UnionDef* UnionDef_ptr;
class EnumDef;
typedef EnumDef* EnumDef_ptr;
class StructDef;
typedef StructDef* StructDef_ptr;
class TranslationUnit;
typedef TranslationUnit* TranslationUnit_ptr;
class Include;
typedef Include* Include_ptr;
class Expression;
typedef Expression* Expression_ptr;
class BinaryExpression;
typedef BinaryExpression* BinaryExpression_ptr;
class UnaryExpression;
typedef UnaryExpression* UnaryExpression_ptr;
class LiteralExpression;
typedef LiteralExpression* LiteralExpression_ptr;
class ConstantDefRef;
typedef ConstantDefRef* ConstantDefRef_ptr;
class ValueExpression;
typedef ValueExpression* ValueExpression_ptr;
class ForwardDef;
typedef ForwardDef* ForwardDef_ptr;
class EnumMember;
typedef EnumMember* EnumMember_ptr;
class Constant;
typedef Constant* Constant_ptr;
class NamedElement;
typedef NamedElement* NamedElement_ptr;


// Structural features
struct Container__contains_tag;
struct Contained__repositoryId_tag;
struct Contained__version_tag;
struct Contained__absoluteName_tag;
struct Contained__definedIn_tag;
struct InterfaceDef__isAbstract_tag;
struct InterfaceDef__isCustom_tag;
struct InterfaceDef__isTruncatable_tag;
struct InterfaceDef__derivesFrom_tag;
struct InterfaceDef__forward_tag;
struct ModuleDef__prefix_tag;
struct IDLType__typeCode_tag;
struct OperationDef__parameters_tag;
struct OperationDef__isOneway_tag;
struct OperationDef__contexts_tag;
struct OperationDef__canRaise_tag;
struct AttributeDef__getRaises_tag;
struct AttributeDef__setRaises_tag;
struct AttributeDef__isReadonly_tag;
struct ConstantDef__constValue_tag;
struct Typed__containedType_tag;
struct Typed__sharedType_tag;
struct ParameterDef__identifier_tag;
struct ParameterDef__direction_tag;
struct PrimitiveDef__kind_tag;
struct ExceptionDef__typeCode_tag;
struct ExceptionDef__members_tag;
struct Field__identifier_tag;
struct FixedDef__digits_tag;
struct FixedDef__scale_tag;
struct WstringDef__bound_tag;
struct StringDef__bound_tag;
struct ArrayDef__name_tag;
struct ArrayDef__bounds_tag;
struct SequenceDef__bound_tag;
struct UnionField__identifier_tag;
struct UnionField__label_tag;
struct UnionDef__unionMembers_tag;
struct UnionDef__containedDiscrim_tag;
struct UnionDef__sharedDiscrim_tag;
struct EnumDef__members_tag;
struct StructDef__members_tag;
struct TranslationUnit__contains_tag;
struct TranslationUnit__identifier_tag;
struct TranslationUnit__includes_tag;
struct Include__importURI_tag;
struct Include__translationUnit_tag;
struct BinaryExpression__left_tag;
struct BinaryExpression__right_tag;
struct BinaryExpression__operator_tag;
struct UnaryExpression__expression_tag;
struct UnaryExpression__operator_tag;
struct ConstantDefRef__constant_tag;
struct ValueExpression__value_tag;
struct ForwardDef__definition_tag;
struct EnumMember__enum_tag;
struct NamedElement__identifier_tag;


} // idlmm


#endif // EMF_CPP_IDLMM_FWD_HPP
