#include "DataFactory.hpp"
#include "DataPackage.hpp"
#include "include.hpp"

using namespace kdm::data;

DataFactory::DataFactory()
{
	// m_ePackage = DataPackage::_instance();
	// std::bind(&DataFactory::createDataModel, this);
	// m_ePackage->getTag_DataModel();
	// std::bind(&DataFactory::createDataResource, this);
	// m_ePackage->getTag_DataResource();
	// std::bind(&DataFactory::createIndexElement, this);
	// m_ePackage->getTag_IndexElement();
	// std::bind(&DataFactory::createUniqueKey, this);
	// m_ePackage->getTag_UniqueKey();
	// std::bind(&DataFactory::createIndex, this);
	// m_ePackage->getTag_Index();
	// std::bind(&DataFactory::createKeyRelation, this);
	// m_ePackage->getTag_KeyRelation();
	// std::bind(&DataFactory::createReferenceKey, this);
	// m_ePackage->getTag_ReferenceKey();
	// std::bind(&DataFactory::createDataContainer, this);
	// m_ePackage->getTag_DataContainer();
	// std::bind(&DataFactory::createCatalog, this);
	// m_ePackage->getTag_Catalog();
	// std::bind(&DataFactory::createRelationalSchema, this);
	// m_ePackage->getTag_RelationalSchema();
	// std::bind(&DataFactory::createColumnSet, this);
	// m_ePackage->getTag_ColumnSet();
	// std::bind(&DataFactory::createRelationalTable, this);
	// m_ePackage->getTag_RelationalTable();
	// std::bind(&DataFactory::createRelationalView, this);
	// m_ePackage->getTag_RelationalView();
	// std::bind(&DataFactory::createRecordFile, this);
	// m_ePackage->getTag_RecordFile();
	// std::bind(&DataFactory::createDataEvent, this);
	// m_ePackage->getTag_DataEvent();
	// std::bind(&DataFactory::createXMLSchema, this);
	// m_ePackage->getTag_XMLSchema();
	// std::bind(&DataFactory::createComplexContentType, this);
	// m_ePackage->getTag_ComplexContentType();
	// std::bind(&DataFactory::createAllContent, this);
	// m_ePackage->getTag_AllContent();
	// std::bind(&DataFactory::createSeqContent, this);
	// m_ePackage->getTag_SeqContent();
	// std::bind(&DataFactory::createChoiceContent, this);
	// m_ePackage->getTag_ChoiceContent();
	// std::bind(&DataFactory::createContentItem, this);
	// m_ePackage->getTag_ContentItem();
	// std::bind(&DataFactory::createGroupContent, this);
	// m_ePackage->getTag_GroupContent();
	// std::bind(&DataFactory::createContentRestriction, this);
	// m_ePackage->getTag_ContentRestriction();
	// std::bind(&DataFactory::createSimpleContentType, this);
	// m_ePackage->getTag_SimpleContentType();
	// std::bind(&DataFactory::createExtendedDataElement, this);
	// m_ePackage->getTag_ExtendedDataElement();
	// std::bind(&DataFactory::createDataRelationship, this);
	// m_ePackage->getTag_DataRelationship();
	// std::bind(&DataFactory::createMixedContent, this);
	// m_ePackage->getTag_MixedContent();
	// std::bind(&DataFactory::createContentReference, this);
	// m_ePackage->getTag_ContentReference();
	// std::bind(&DataFactory::createDataAction, this);
	// m_ePackage->getTag_DataAction();
	// std::bind(&DataFactory::createReadsColumnSet, this);
	// m_ePackage->getTag_ReadsColumnSet();
	// std::bind(&DataFactory::createContentAttribute, this);
	// m_ePackage->getTag_ContentAttribute();
	// std::bind(&DataFactory::createTypedBy, this);
	// m_ePackage->getTag_TypedBy();
	// std::bind(&DataFactory::createReferenceTo, this);
	// m_ePackage->getTag_ReferenceTo();
	// std::bind(&DataFactory::createRestrictionOf, this);
	// m_ePackage->getTag_RestrictionOf();
	// std::bind(&DataFactory::createExtensionTo, this);
	// m_ePackage->getTag_ExtensionTo();
	// std::bind(&DataFactory::createDatatypeOf, this);
	// m_ePackage->getTag_DatatypeOf();
	// std::bind(&DataFactory::createHasContent, this);
	// m_ePackage->getTag_HasContent();
	// std::bind(&DataFactory::createWritesColumnSet, this);
	// m_ePackage->getTag_WritesColumnSet();
	// std::bind(&DataFactory::createProducesDataEvent, this);
	// m_ePackage->getTag_ProducesDataEvent();
	// std::bind(&DataFactory::createDataSegment, this);
	// m_ePackage->getTag_DataSegment();
	// std::bind(&DataFactory::createContentElement, this);
	// m_ePackage->getTag_ContentElement();
	// std::bind(&DataFactory::createManagesData, this);
	// m_ePackage->getTag_ManagesData();
}

const DataFactory_ptr DataFactory::_instance()
{
	static DataFactory __instance;
	return &__instance;
}

DataModel_ptr DataFactory::createDataModel() const
{
	return new DataModel();
}

DataResource_ptr DataFactory::createDataResource() const
{
	return new DataResource();
}

IndexElement_ptr DataFactory::createIndexElement() const
{
	return new IndexElement();
}

UniqueKey_ptr DataFactory::createUniqueKey() const
{
	return new UniqueKey();
}

Index_ptr DataFactory::createIndex() const
{
	return new Index();
}

KeyRelation_ptr DataFactory::createKeyRelation() const
{
	return new KeyRelation();
}

ReferenceKey_ptr DataFactory::createReferenceKey() const
{
	return new ReferenceKey();
}

DataContainer_ptr DataFactory::createDataContainer() const
{
	return new DataContainer();
}

Catalog_ptr DataFactory::createCatalog() const
{
	return new Catalog();
}

RelationalSchema_ptr DataFactory::createRelationalSchema() const
{
	return new RelationalSchema();
}

ColumnSet_ptr DataFactory::createColumnSet() const
{
	return new ColumnSet();
}

RelationalTable_ptr DataFactory::createRelationalTable() const
{
	return new RelationalTable();
}

RelationalView_ptr DataFactory::createRelationalView() const
{
	return new RelationalView();
}

RecordFile_ptr DataFactory::createRecordFile() const
{
	return new RecordFile();
}

DataEvent_ptr DataFactory::createDataEvent() const
{
	return new DataEvent();
}

XMLSchema_ptr DataFactory::createXMLSchema() const
{
	return new XMLSchema();
}

ComplexContentType_ptr DataFactory::createComplexContentType() const
{
	return new ComplexContentType();
}

AllContent_ptr DataFactory::createAllContent() const
{
	return new AllContent();
}

SeqContent_ptr DataFactory::createSeqContent() const
{
	return new SeqContent();
}

ChoiceContent_ptr DataFactory::createChoiceContent() const
{
	return new ChoiceContent();
}

ContentItem_ptr DataFactory::createContentItem() const
{
	return new ContentItem();
}

GroupContent_ptr DataFactory::createGroupContent() const
{
	return new GroupContent();
}

ContentRestriction_ptr DataFactory::createContentRestriction() const
{
	return new ContentRestriction();
}

SimpleContentType_ptr DataFactory::createSimpleContentType() const
{
	return new SimpleContentType();
}

ExtendedDataElement_ptr DataFactory::createExtendedDataElement() const
{
	return new ExtendedDataElement();
}

DataRelationship_ptr DataFactory::createDataRelationship() const
{
	return new DataRelationship();
}

MixedContent_ptr DataFactory::createMixedContent() const
{
	return new MixedContent();
}

ContentReference_ptr DataFactory::createContentReference() const
{
	return new ContentReference();
}

DataAction_ptr DataFactory::createDataAction() const
{
	return new DataAction();
}

ReadsColumnSet_ptr DataFactory::createReadsColumnSet() const
{
	return new ReadsColumnSet();
}

ContentAttribute_ptr DataFactory::createContentAttribute() const
{
	return new ContentAttribute();
}

TypedBy_ptr DataFactory::createTypedBy() const
{
	return new TypedBy();
}

ReferenceTo_ptr DataFactory::createReferenceTo() const
{
	return new ReferenceTo();
}

RestrictionOf_ptr DataFactory::createRestrictionOf() const
{
	return new RestrictionOf();
}

ExtensionTo_ptr DataFactory::createExtensionTo() const
{
	return new ExtensionTo();
}

DatatypeOf_ptr DataFactory::createDatatypeOf() const
{
	return new DatatypeOf();
}

HasContent_ptr DataFactory::createHasContent() const
{
	return new HasContent();
}

WritesColumnSet_ptr DataFactory::createWritesColumnSet() const
{
	return new WritesColumnSet();
}

ProducesDataEvent_ptr DataFactory::createProducesDataEvent() const
{
	return new ProducesDataEvent();
}

DataSegment_ptr DataFactory::createDataSegment() const
{
	return new DataSegment();
}

ContentElement_ptr DataFactory::createContentElement() const
{
	return new ContentElement();
}

ManagesData_ptr DataFactory::createManagesData() const
{
	return new ManagesData();
}

