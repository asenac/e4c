#ifndef EMF_CPP_KDM_CODE_FWD_HPP
#define EMF_CPP_KDM_CODE_FWD_HPP


namespace kdm
{
namespace code
{


class CodePackage;
typedef CodePackage * CodePackage_ptr;
class CodeFactory;
typedef CodeFactory * CodeFactory_ptr;

// Data types
enum class MethodKind 
{
operator,
destructor,
method,
abstract,
virtual,
unknown,
constructor};
enum class ParameterKind 
{
byReference,
unknown,
exception,
return,
byValue,
catchall,
byName,
throws,
variadic};
enum class ExportKind 
{
private,
unknown,
public,
protected,
final};
enum class StorableKind 
{
global,
external,
static,
unknown,
register,
local};
enum class CallableKind 
{
external,
regular,
stored,
operator,
unknown};
enum class MacroKind 
{
external,
unknown,
option,
undefined,
regular};


// Classes
class AbstractCodeElement;
typedef AbstractCodeElement* AbstractCodeElement_ptr;
class CodeItem;
typedef CodeItem* CodeItem_ptr;
class ComputationalObject;
typedef ComputationalObject* ComputationalObject_ptr;
class ControlElement;
typedef ControlElement* ControlElement_ptr;
class MethodUnit;
typedef MethodUnit* MethodUnit_ptr;
class Module;
typedef Module* Module_ptr;
class CodeAssembly;
typedef CodeAssembly* CodeAssembly_ptr;
class CallableUnit;
typedef CallableUnit* CallableUnit_ptr;
class Datatype;
typedef Datatype* Datatype_ptr;
class TemplateUnit;
typedef TemplateUnit* TemplateUnit_ptr;
class TemplateParameter;
typedef TemplateParameter* TemplateParameter_ptr;
class AbstractCodeRelationship;
typedef AbstractCodeRelationship* AbstractCodeRelationship_ptr;
class InstanceOf;
typedef InstanceOf* InstanceOf_ptr;
class CompilationUnit;
typedef CompilationUnit* CompilationUnit_ptr;
class CodeModel;
typedef CodeModel* CodeModel_ptr;
class DerivedType;
typedef DerivedType* DerivedType_ptr;
class ArrayType;
typedef ArrayType* ArrayType_ptr;
class PrimitiveType;
typedef PrimitiveType* PrimitiveType_ptr;
class BooleanType;
typedef BooleanType* BooleanType_ptr;
class CharType;
typedef CharType* CharType_ptr;
class ClassUnit;
typedef ClassUnit* ClassUnit_ptr;
class CompositeType;
typedef CompositeType* CompositeType_ptr;
class RecordType;
typedef RecordType* RecordType_ptr;
class EnumeratedType;
typedef EnumeratedType* EnumeratedType_ptr;
class Extends;
typedef Extends* Extends_ptr;
class ScaledType;
typedef ScaledType* ScaledType_ptr;
class FloatType;
typedef FloatType* FloatType_ptr;
class HasType;
typedef HasType* HasType_ptr;
class ImplementationOf;
typedef ImplementationOf* ImplementationOf_ptr;
class Implements;
typedef Implements* Implements_ptr;
class IntegerType;
typedef IntegerType* IntegerType_ptr;
class InterfaceUnit;
typedef InterfaceUnit* InterfaceUnit_ptr;
class PointerType;
typedef PointerType* PointerType_ptr;
class DefinedType;
typedef DefinedType* DefinedType_ptr;
class TypeUnit;
typedef TypeUnit* TypeUnit_ptr;
class RangeType;
typedef RangeType* RangeType_ptr;
class Signature;
typedef Signature* Signature_ptr;
class DataElement;
typedef DataElement* DataElement_ptr;
class StringType;
typedef StringType* StringType_ptr;
class ChoiceType;
typedef ChoiceType* ChoiceType_ptr;
class NamespaceUnit;
typedef NamespaceUnit* NamespaceUnit_ptr;
class VisibleIn;
typedef VisibleIn* VisibleIn_ptr;
class CommentUnit;
typedef CommentUnit* CommentUnit_ptr;
class SharedUnit;
typedef SharedUnit* SharedUnit_ptr;
class DecimalType;
typedef DecimalType* DecimalType_ptr;
class DateType;
typedef DateType* DateType_ptr;
class TimeType;
typedef TimeType* TimeType_ptr;
class VoidType;
typedef VoidType* VoidType_ptr;
class ValueElement;
typedef ValueElement* ValueElement_ptr;
class Value;
typedef Value* Value_ptr;
class ValueList;
typedef ValueList* ValueList_ptr;
class StorableUnit;
typedef StorableUnit* StorableUnit_ptr;
class MemberUnit;
typedef MemberUnit* MemberUnit_ptr;
class ParameterUnit;
typedef ParameterUnit* ParameterUnit_ptr;
class ItemUnit;
typedef ItemUnit* ItemUnit_ptr;
class IndexUnit;
typedef IndexUnit* IndexUnit_ptr;
class SynonymType;
typedef SynonymType* SynonymType_ptr;
class SequenceType;
typedef SequenceType* SequenceType_ptr;
class BagType;
typedef BagType* BagType_ptr;
class SetType;
typedef SetType* SetType_ptr;
class CodeElement;
typedef CodeElement* CodeElement_ptr;
class CodeRelationship;
typedef CodeRelationship* CodeRelationship_ptr;
class LanguageUnit;
typedef LanguageUnit* LanguageUnit_ptr;
class OrdinalType;
typedef OrdinalType* OrdinalType_ptr;
class BitstringType;
typedef BitstringType* BitstringType_ptr;
class OctetType;
typedef OctetType* OctetType_ptr;
class OctetstringType;
typedef OctetstringType* OctetstringType_ptr;
class BitType;
typedef BitType* BitType_ptr;
class Imports;
typedef Imports* Imports_ptr;
class Package;
typedef Package* Package_ptr;
class ParameterTo;
typedef ParameterTo* ParameterTo_ptr;
class TemplateType;
typedef TemplateType* TemplateType_ptr;
class PreprocessorDirective;
typedef PreprocessorDirective* PreprocessorDirective_ptr;
class MacroDirective;
typedef MacroDirective* MacroDirective_ptr;
class MacroUnit;
typedef MacroUnit* MacroUnit_ptr;
class ConditionalDirective;
typedef ConditionalDirective* ConditionalDirective_ptr;
class IncludeDirective;
typedef IncludeDirective* IncludeDirective_ptr;
class VariantTo;
typedef VariantTo* VariantTo_ptr;
class Expands;
typedef Expands* Expands_ptr;
class Redefines;
typedef Redefines* Redefines_ptr;
class GeneratedFrom;
typedef GeneratedFrom* GeneratedFrom_ptr;
class Includes;
typedef Includes* Includes_ptr;
class HasValue;
typedef HasValue* HasValue_ptr;


// Structural features
struct AbstractCodeElement__source_tag;
struct AbstractCodeElement__comment_tag;
struct AbstractCodeElement__codeRelation_tag;
struct ControlElement__type_tag;
struct ControlElement__entryFlow_tag;
struct ControlElement__codeElement_tag;
struct MethodUnit__kind_tag;
struct MethodUnit__export_tag;
struct Module__codeElement_tag;
struct CallableUnit__kind_tag;
struct TemplateUnit__codeElement_tag;
struct InstanceOf__to_tag;
struct InstanceOf__from_tag;
struct CodeModel__codeElement_tag;
struct DerivedType__itemUnit_tag;
struct ArrayType__size_tag;
struct ArrayType__indexUnit_tag;
struct ClassUnit__isAbstract_tag;
struct ClassUnit__codeElement_tag;
struct CompositeType__itemUnit_tag;
struct EnumeratedType__value_tag;
struct Extends__to_tag;
struct Extends__from_tag;
struct HasType__to_tag;
struct HasType__from_tag;
struct ImplementationOf__to_tag;
struct ImplementationOf__from_tag;
struct Implements__to_tag;
struct Implements__from_tag;
struct InterfaceUnit__codeElement_tag;
struct DefinedType__type_tag;
struct DefinedType__codeElement_tag;
struct RangeType__lower_tag;
struct RangeType__upper_tag;
struct Signature__parameterUnit_tag;
struct DataElement__type_tag;
struct DataElement__ext_tag;
struct DataElement__size_tag;
struct DataElement__codeElement_tag;
struct NamespaceUnit__groupedCode_tag;
struct VisibleIn__to_tag;
struct VisibleIn__from_tag;
struct CommentUnit__text_tag;
struct ValueList__valueElement_tag;
struct StorableUnit__kind_tag;
struct MemberUnit__export_tag;
struct ParameterUnit__kind_tag;
struct ParameterUnit__pos_tag;
struct SequenceType__size_tag;
struct BagType__size_tag;
struct SetType__size_tag;
struct CodeRelationship__to_tag;
struct CodeRelationship__from_tag;
struct Imports__to_tag;
struct Imports__from_tag;
struct ParameterTo__to_tag;
struct ParameterTo__from_tag;
struct PreprocessorDirective__codeElement_tag;
struct MacroUnit__kind_tag;
struct VariantTo__to_tag;
struct VariantTo__from_tag;
struct Expands__to_tag;
struct Expands__from_tag;
struct Redefines__to_tag;
struct Redefines__from_tag;
struct GeneratedFrom__to_tag;
struct GeneratedFrom__from_tag;
struct Includes__to_tag;
struct Includes__from_tag;
struct HasValue__to_tag;
struct HasValue__from_tag;


} // code
} // kdm


#endif // EMF_CPP_KDM_CODE_FWD_HPP
