
#ifndef EMF_CPP_KDM_DATA_FWD_HPP
#define EMF_CPP_KDM_DATA_FWD_HPP

#include <emf4cpp2/emf4cpp2.hpp>


namespace kdm
{
namespace data
{


class DataPackage;
typedef DataPackage * DataPackage_ptr;
class DataFactory;
typedef DataFactory * DataFactory_ptr;

// Data types


// Classes
class DataModel;
typedef DataModel* DataModel_ptr;
class AbstractDataElement;
typedef AbstractDataElement* AbstractDataElement_ptr;
class DataResource;
typedef DataResource* DataResource_ptr;
class IndexElement;
typedef IndexElement* IndexElement_ptr;
class UniqueKey;
typedef UniqueKey* UniqueKey_ptr;
class Index;
typedef Index* Index_ptr;
class AbstractDataRelationship;
typedef AbstractDataRelationship* AbstractDataRelationship_ptr;
class KeyRelation;
typedef KeyRelation* KeyRelation_ptr;
class ReferenceKey;
typedef ReferenceKey* ReferenceKey_ptr;
class DataContainer;
typedef DataContainer* DataContainer_ptr;
class Catalog;
typedef Catalog* Catalog_ptr;
class RelationalSchema;
typedef RelationalSchema* RelationalSchema_ptr;
class ColumnSet;
typedef ColumnSet* ColumnSet_ptr;
class RelationalTable;
typedef RelationalTable* RelationalTable_ptr;
class RelationalView;
typedef RelationalView* RelationalView_ptr;
class RecordFile;
typedef RecordFile* RecordFile_ptr;
class DataEvent;
typedef DataEvent* DataEvent_ptr;
class XMLSchema;
typedef XMLSchema* XMLSchema_ptr;
class AbstractContentElement;
typedef AbstractContentElement* AbstractContentElement_ptr;
class ComplexContentType;
typedef ComplexContentType* ComplexContentType_ptr;
class AllContent;
typedef AllContent* AllContent_ptr;
class SeqContent;
typedef SeqContent* SeqContent_ptr;
class ChoiceContent;
typedef ChoiceContent* ChoiceContent_ptr;
class ContentItem;
typedef ContentItem* ContentItem_ptr;
class GroupContent;
typedef GroupContent* GroupContent_ptr;
class ContentRestriction;
typedef ContentRestriction* ContentRestriction_ptr;
class SimpleContentType;
typedef SimpleContentType* SimpleContentType_ptr;
class ExtendedDataElement;
typedef ExtendedDataElement* ExtendedDataElement_ptr;
class DataRelationship;
typedef DataRelationship* DataRelationship_ptr;
class MixedContent;
typedef MixedContent* MixedContent_ptr;
class ContentReference;
typedef ContentReference* ContentReference_ptr;
class DataAction;
typedef DataAction* DataAction_ptr;
class ReadsColumnSet;
typedef ReadsColumnSet* ReadsColumnSet_ptr;
class ContentAttribute;
typedef ContentAttribute* ContentAttribute_ptr;
class TypedBy;
typedef TypedBy* TypedBy_ptr;
class ReferenceTo;
typedef ReferenceTo* ReferenceTo_ptr;
class RestrictionOf;
typedef RestrictionOf* RestrictionOf_ptr;
class ExtensionTo;
typedef ExtensionTo* ExtensionTo_ptr;
class DatatypeOf;
typedef DatatypeOf* DatatypeOf_ptr;
class HasContent;
typedef HasContent* HasContent_ptr;
class WritesColumnSet;
typedef WritesColumnSet* WritesColumnSet_ptr;
class ProducesDataEvent;
typedef ProducesDataEvent* ProducesDataEvent_ptr;
class DataSegment;
typedef DataSegment* DataSegment_ptr;
class ContentElement;
typedef ContentElement* ContentElement_ptr;
class ManagesData;
typedef ManagesData* ManagesData_ptr;


// Structural features
struct DataModel__dataElement_tag;
struct AbstractDataElement__source_tag;
struct AbstractDataElement__dataRelation_tag;
struct AbstractDataElement__abstraction_tag;
struct IndexElement__implementation_tag;
struct KeyRelation__to_tag;
struct KeyRelation__from_tag;
struct DataContainer__dataElement_tag;
struct RelationalSchema__codeElement_tag;
struct ColumnSet__itemUnit_tag;
struct DataEvent__kind_tag;
struct XMLSchema__contentElement_tag;
struct ComplexContentType__contentElement_tag;
struct ContentItem__type_tag;
struct ContentItem__contentElement_tag;
struct ContentRestriction__kind_tag;
struct ContentRestriction__value_tag;
struct SimpleContentType__type_tag;
struct SimpleContentType__kind_tag;
struct DataRelationship__to_tag;
struct DataRelationship__from_tag;
struct DataAction__kind_tag;
struct DataAction__implementation_tag;
struct DataAction__dataElement_tag;
struct ReadsColumnSet__to_tag;
struct ReadsColumnSet__from_tag;
struct TypedBy__to_tag;
struct TypedBy__from_tag;
struct ReferenceTo__to_tag;
struct ReferenceTo__from_tag;
struct RestrictionOf__to_tag;
struct RestrictionOf__from_tag;
struct ExtensionTo__to_tag;
struct ExtensionTo__from_tag;
struct DatatypeOf__to_tag;
struct DatatypeOf__from_tag;
struct HasContent__to_tag;
struct HasContent__from_tag;
struct WritesColumnSet__to_tag;
struct WritesColumnSet__from_tag;
struct ProducesDataEvent__to_tag;
struct ProducesDataEvent__from_tag;
struct ManagesData__to_tag;
struct ManagesData__from_tag;


} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_FWD_HPP
