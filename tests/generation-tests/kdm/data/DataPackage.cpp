#include "DataPackage.hpp"
#include "DataFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::data;

DataPackage::DataPackage()
{
	m_eFactoryInstance = DataFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr DataModel_ = ecoreFactory->createEClass();
	DataModel_->setName("DataModel");
	// m_eClassifiers.push_back(DataModel_);
	::ecore::EClass_ptr AbstractDataElement_ = ecoreFactory->createEClass();
	AbstractDataElement_->setName("AbstractDataElement");
	// m_eClassifiers.push_back(AbstractDataElement_);
	::ecore::EClass_ptr DataResource_ = ecoreFactory->createEClass();
	DataResource_->setName("DataResource");
	// m_eClassifiers.push_back(DataResource_);
	::ecore::EClass_ptr IndexElement_ = ecoreFactory->createEClass();
	IndexElement_->setName("IndexElement");
	// m_eClassifiers.push_back(IndexElement_);
	::ecore::EClass_ptr UniqueKey_ = ecoreFactory->createEClass();
	UniqueKey_->setName("UniqueKey");
	// m_eClassifiers.push_back(UniqueKey_);
	::ecore::EClass_ptr Index_ = ecoreFactory->createEClass();
	Index_->setName("Index");
	// m_eClassifiers.push_back(Index_);
	::ecore::EClass_ptr AbstractDataRelationship_ = ecoreFactory->createEClass();
	AbstractDataRelationship_->setName("AbstractDataRelationship");
	// m_eClassifiers.push_back(AbstractDataRelationship_);
	::ecore::EClass_ptr KeyRelation_ = ecoreFactory->createEClass();
	KeyRelation_->setName("KeyRelation");
	// m_eClassifiers.push_back(KeyRelation_);
	::ecore::EClass_ptr ReferenceKey_ = ecoreFactory->createEClass();
	ReferenceKey_->setName("ReferenceKey");
	// m_eClassifiers.push_back(ReferenceKey_);
	::ecore::EClass_ptr DataContainer_ = ecoreFactory->createEClass();
	DataContainer_->setName("DataContainer");
	// m_eClassifiers.push_back(DataContainer_);
	::ecore::EClass_ptr Catalog_ = ecoreFactory->createEClass();
	Catalog_->setName("Catalog");
	// m_eClassifiers.push_back(Catalog_);
	::ecore::EClass_ptr RelationalSchema_ = ecoreFactory->createEClass();
	RelationalSchema_->setName("RelationalSchema");
	// m_eClassifiers.push_back(RelationalSchema_);
	::ecore::EClass_ptr ColumnSet_ = ecoreFactory->createEClass();
	ColumnSet_->setName("ColumnSet");
	// m_eClassifiers.push_back(ColumnSet_);
	::ecore::EClass_ptr RelationalTable_ = ecoreFactory->createEClass();
	RelationalTable_->setName("RelationalTable");
	// m_eClassifiers.push_back(RelationalTable_);
	::ecore::EClass_ptr RelationalView_ = ecoreFactory->createEClass();
	RelationalView_->setName("RelationalView");
	// m_eClassifiers.push_back(RelationalView_);
	::ecore::EClass_ptr RecordFile_ = ecoreFactory->createEClass();
	RecordFile_->setName("RecordFile");
	// m_eClassifiers.push_back(RecordFile_);
	::ecore::EClass_ptr DataEvent_ = ecoreFactory->createEClass();
	DataEvent_->setName("DataEvent");
	// m_eClassifiers.push_back(DataEvent_);
	::ecore::EClass_ptr XMLSchema_ = ecoreFactory->createEClass();
	XMLSchema_->setName("XMLSchema");
	// m_eClassifiers.push_back(XMLSchema_);
	::ecore::EClass_ptr AbstractContentElement_ = ecoreFactory->createEClass();
	AbstractContentElement_->setName("AbstractContentElement");
	// m_eClassifiers.push_back(AbstractContentElement_);
	::ecore::EClass_ptr ComplexContentType_ = ecoreFactory->createEClass();
	ComplexContentType_->setName("ComplexContentType");
	// m_eClassifiers.push_back(ComplexContentType_);
	::ecore::EClass_ptr AllContent_ = ecoreFactory->createEClass();
	AllContent_->setName("AllContent");
	// m_eClassifiers.push_back(AllContent_);
	::ecore::EClass_ptr SeqContent_ = ecoreFactory->createEClass();
	SeqContent_->setName("SeqContent");
	// m_eClassifiers.push_back(SeqContent_);
	::ecore::EClass_ptr ChoiceContent_ = ecoreFactory->createEClass();
	ChoiceContent_->setName("ChoiceContent");
	// m_eClassifiers.push_back(ChoiceContent_);
	::ecore::EClass_ptr ContentItem_ = ecoreFactory->createEClass();
	ContentItem_->setName("ContentItem");
	// m_eClassifiers.push_back(ContentItem_);
	::ecore::EClass_ptr GroupContent_ = ecoreFactory->createEClass();
	GroupContent_->setName("GroupContent");
	// m_eClassifiers.push_back(GroupContent_);
	::ecore::EClass_ptr ContentRestriction_ = ecoreFactory->createEClass();
	ContentRestriction_->setName("ContentRestriction");
	// m_eClassifiers.push_back(ContentRestriction_);
	::ecore::EClass_ptr SimpleContentType_ = ecoreFactory->createEClass();
	SimpleContentType_->setName("SimpleContentType");
	// m_eClassifiers.push_back(SimpleContentType_);
	::ecore::EClass_ptr ExtendedDataElement_ = ecoreFactory->createEClass();
	ExtendedDataElement_->setName("ExtendedDataElement");
	// m_eClassifiers.push_back(ExtendedDataElement_);
	::ecore::EClass_ptr DataRelationship_ = ecoreFactory->createEClass();
	DataRelationship_->setName("DataRelationship");
	// m_eClassifiers.push_back(DataRelationship_);
	::ecore::EClass_ptr MixedContent_ = ecoreFactory->createEClass();
	MixedContent_->setName("MixedContent");
	// m_eClassifiers.push_back(MixedContent_);
	::ecore::EClass_ptr ContentReference_ = ecoreFactory->createEClass();
	ContentReference_->setName("ContentReference");
	// m_eClassifiers.push_back(ContentReference_);
	::ecore::EClass_ptr DataAction_ = ecoreFactory->createEClass();
	DataAction_->setName("DataAction");
	// m_eClassifiers.push_back(DataAction_);
	::ecore::EClass_ptr ReadsColumnSet_ = ecoreFactory->createEClass();
	ReadsColumnSet_->setName("ReadsColumnSet");
	// m_eClassifiers.push_back(ReadsColumnSet_);
	::ecore::EClass_ptr ContentAttribute_ = ecoreFactory->createEClass();
	ContentAttribute_->setName("ContentAttribute");
	// m_eClassifiers.push_back(ContentAttribute_);
	::ecore::EClass_ptr TypedBy_ = ecoreFactory->createEClass();
	TypedBy_->setName("TypedBy");
	// m_eClassifiers.push_back(TypedBy_);
	::ecore::EClass_ptr ReferenceTo_ = ecoreFactory->createEClass();
	ReferenceTo_->setName("ReferenceTo");
	// m_eClassifiers.push_back(ReferenceTo_);
	::ecore::EClass_ptr RestrictionOf_ = ecoreFactory->createEClass();
	RestrictionOf_->setName("RestrictionOf");
	// m_eClassifiers.push_back(RestrictionOf_);
	::ecore::EClass_ptr ExtensionTo_ = ecoreFactory->createEClass();
	ExtensionTo_->setName("ExtensionTo");
	// m_eClassifiers.push_back(ExtensionTo_);
	::ecore::EClass_ptr DatatypeOf_ = ecoreFactory->createEClass();
	DatatypeOf_->setName("DatatypeOf");
	// m_eClassifiers.push_back(DatatypeOf_);
	::ecore::EClass_ptr HasContent_ = ecoreFactory->createEClass();
	HasContent_->setName("HasContent");
	// m_eClassifiers.push_back(HasContent_);
	::ecore::EClass_ptr WritesColumnSet_ = ecoreFactory->createEClass();
	WritesColumnSet_->setName("WritesColumnSet");
	// m_eClassifiers.push_back(WritesColumnSet_);
	::ecore::EClass_ptr ProducesDataEvent_ = ecoreFactory->createEClass();
	ProducesDataEvent_->setName("ProducesDataEvent");
	// m_eClassifiers.push_back(ProducesDataEvent_);
	::ecore::EClass_ptr DataSegment_ = ecoreFactory->createEClass();
	DataSegment_->setName("DataSegment");
	// m_eClassifiers.push_back(DataSegment_);
	::ecore::EClass_ptr ContentElement_ = ecoreFactory->createEClass();
	ContentElement_->setName("ContentElement");
	// m_eClassifiers.push_back(ContentElement_);
	::ecore::EClass_ptr ManagesData_ = ecoreFactory->createEClass();
	ManagesData_->setName("ManagesData");
	// m_eClassifiers.push_back(ManagesData_);
	
	
	// DataModel_->addESuperType(KDMModel_);
	// AbstractDataElement_->addESuperType(KDMEntity_);
	// DataResource_->addESuperType(AbstractDataElement_);
	// IndexElement_->addESuperType(DataResource_);
	// UniqueKey_->addESuperType(IndexElement_);
	// Index_->addESuperType(IndexElement_);
	// AbstractDataRelationship_->addESuperType(KDMRelationship_);
	// KeyRelation_->addESuperType(AbstractDataRelationship_);
	// ReferenceKey_->addESuperType(IndexElement_);
	// DataContainer_->addESuperType(DataResource_);
	// Catalog_->addESuperType(DataContainer_);
	// RelationalSchema_->addESuperType(DataContainer_);
	// ColumnSet_->addESuperType(DataContainer_);
	// RelationalTable_->addESuperType(ColumnSet_);
	// RelationalView_->addESuperType(ColumnSet_);
	// RecordFile_->addESuperType(ColumnSet_);
	// DataEvent_->addESuperType(DataResource_);
	// XMLSchema_->addESuperType(AbstractDataElement_);
	// AbstractContentElement_->addESuperType(AbstractDataElement_);
	// ComplexContentType_->addESuperType(AbstractContentElement_);
	// AllContent_->addESuperType(ComplexContentType_);
	// SeqContent_->addESuperType(ComplexContentType_);
	// ChoiceContent_->addESuperType(ComplexContentType_);
	// ContentItem_->addESuperType(AbstractContentElement_);
	// GroupContent_->addESuperType(ContentItem_);
	// ContentRestriction_->addESuperType(AbstractContentElement_);
	// SimpleContentType_->addESuperType(ComplexContentType_);
	// ExtendedDataElement_->addESuperType(AbstractDataElement_);
	// DataRelationship_->addESuperType(AbstractDataRelationship_);
	// MixedContent_->addESuperType(ComplexContentType_);
	// ContentReference_->addESuperType(ContentItem_);
	// DataAction_->addESuperType(AbstractDataElement_);
	// ReadsColumnSet_->addESuperType(AbstractActionRelationship_);
	// ContentAttribute_->addESuperType(ContentItem_);
	// TypedBy_->addESuperType(AbstractDataRelationship_);
	// ReferenceTo_->addESuperType(AbstractDataRelationship_);
	// RestrictionOf_->addESuperType(AbstractDataRelationship_);
	// ExtensionTo_->addESuperType(AbstractDataRelationship_);
	// DatatypeOf_->addESuperType(AbstractDataRelationship_);
	// HasContent_->addESuperType(AbstractActionRelationship_);
	// WritesColumnSet_->addESuperType(AbstractActionRelationship_);
	// ProducesDataEvent_->addESuperType(AbstractActionRelationship_);
	// DataSegment_->addESuperType(ColumnSet_);
	// ContentElement_->addESuperType(ContentItem_);
	// ManagesData_->addESuperType(AbstractActionRelationship_);
	
	
	
	
}

const DataPackage_ptr DataPackage::_instance()
{
	static DataPackage __instance;
	return &__instance;
}

e4c::tag_t DataPackage::getTag_DataModel() const
{
	return e4c::tag< DataModel >::get();
}
 
e4c::tag_t DataPackage::getTag_AbstractDataElement() const
{
	return e4c::tag< AbstractDataElement >::get();
}
 
e4c::tag_t DataPackage::getTag_DataResource() const
{
	return e4c::tag< DataResource >::get();
}
 
e4c::tag_t DataPackage::getTag_IndexElement() const
{
	return e4c::tag< IndexElement >::get();
}
 
e4c::tag_t DataPackage::getTag_UniqueKey() const
{
	return e4c::tag< UniqueKey >::get();
}
 
e4c::tag_t DataPackage::getTag_Index() const
{
	return e4c::tag< Index >::get();
}
 
e4c::tag_t DataPackage::getTag_AbstractDataRelationship() const
{
	return e4c::tag< AbstractDataRelationship >::get();
}
 
e4c::tag_t DataPackage::getTag_KeyRelation() const
{
	return e4c::tag< KeyRelation >::get();
}
 
e4c::tag_t DataPackage::getTag_ReferenceKey() const
{
	return e4c::tag< ReferenceKey >::get();
}
 
e4c::tag_t DataPackage::getTag_DataContainer() const
{
	return e4c::tag< DataContainer >::get();
}
 
e4c::tag_t DataPackage::getTag_Catalog() const
{
	return e4c::tag< Catalog >::get();
}
 
e4c::tag_t DataPackage::getTag_RelationalSchema() const
{
	return e4c::tag< RelationalSchema >::get();
}
 
e4c::tag_t DataPackage::getTag_ColumnSet() const
{
	return e4c::tag< ColumnSet >::get();
}
 
e4c::tag_t DataPackage::getTag_RelationalTable() const
{
	return e4c::tag< RelationalTable >::get();
}
 
e4c::tag_t DataPackage::getTag_RelationalView() const
{
	return e4c::tag< RelationalView >::get();
}
 
e4c::tag_t DataPackage::getTag_RecordFile() const
{
	return e4c::tag< RecordFile >::get();
}
 
e4c::tag_t DataPackage::getTag_DataEvent() const
{
	return e4c::tag< DataEvent >::get();
}
 
e4c::tag_t DataPackage::getTag_XMLSchema() const
{
	return e4c::tag< XMLSchema >::get();
}
 
e4c::tag_t DataPackage::getTag_AbstractContentElement() const
{
	return e4c::tag< AbstractContentElement >::get();
}
 
e4c::tag_t DataPackage::getTag_ComplexContentType() const
{
	return e4c::tag< ComplexContentType >::get();
}
 
e4c::tag_t DataPackage::getTag_AllContent() const
{
	return e4c::tag< AllContent >::get();
}
 
e4c::tag_t DataPackage::getTag_SeqContent() const
{
	return e4c::tag< SeqContent >::get();
}
 
e4c::tag_t DataPackage::getTag_ChoiceContent() const
{
	return e4c::tag< ChoiceContent >::get();
}
 
e4c::tag_t DataPackage::getTag_ContentItem() const
{
	return e4c::tag< ContentItem >::get();
}
 
e4c::tag_t DataPackage::getTag_GroupContent() const
{
	return e4c::tag< GroupContent >::get();
}
 
e4c::tag_t DataPackage::getTag_ContentRestriction() const
{
	return e4c::tag< ContentRestriction >::get();
}
 
e4c::tag_t DataPackage::getTag_SimpleContentType() const
{
	return e4c::tag< SimpleContentType >::get();
}
 
e4c::tag_t DataPackage::getTag_ExtendedDataElement() const
{
	return e4c::tag< ExtendedDataElement >::get();
}
 
e4c::tag_t DataPackage::getTag_DataRelationship() const
{
	return e4c::tag< DataRelationship >::get();
}
 
e4c::tag_t DataPackage::getTag_MixedContent() const
{
	return e4c::tag< MixedContent >::get();
}
 
e4c::tag_t DataPackage::getTag_ContentReference() const
{
	return e4c::tag< ContentReference >::get();
}
 
e4c::tag_t DataPackage::getTag_DataAction() const
{
	return e4c::tag< DataAction >::get();
}
 
e4c::tag_t DataPackage::getTag_ReadsColumnSet() const
{
	return e4c::tag< ReadsColumnSet >::get();
}
 
e4c::tag_t DataPackage::getTag_ContentAttribute() const
{
	return e4c::tag< ContentAttribute >::get();
}
 
e4c::tag_t DataPackage::getTag_TypedBy() const
{
	return e4c::tag< TypedBy >::get();
}
 
e4c::tag_t DataPackage::getTag_ReferenceTo() const
{
	return e4c::tag< ReferenceTo >::get();
}
 
e4c::tag_t DataPackage::getTag_RestrictionOf() const
{
	return e4c::tag< RestrictionOf >::get();
}
 
e4c::tag_t DataPackage::getTag_ExtensionTo() const
{
	return e4c::tag< ExtensionTo >::get();
}
 
e4c::tag_t DataPackage::getTag_DatatypeOf() const
{
	return e4c::tag< DatatypeOf >::get();
}
 
e4c::tag_t DataPackage::getTag_HasContent() const
{
	return e4c::tag< HasContent >::get();
}
 
e4c::tag_t DataPackage::getTag_WritesColumnSet() const
{
	return e4c::tag< WritesColumnSet >::get();
}
 
e4c::tag_t DataPackage::getTag_ProducesDataEvent() const
{
	return e4c::tag< ProducesDataEvent >::get();
}
 
e4c::tag_t DataPackage::getTag_DataSegment() const
{
	return e4c::tag< DataSegment >::get();
}
 
e4c::tag_t DataPackage::getTag_ContentElement() const
{
	return e4c::tag< ContentElement >::get();
}
 
e4c::tag_t DataPackage::getTag_ManagesData() const
{
	return e4c::tag< ManagesData >::get();
}
 
e4c::tag_t DataPackage::getTag_DataModel__dataElement() const
{
	return e4c::tag< DataModel__dataElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_AbstractDataElement__source() const
{
	return e4c::tag< AbstractDataElement__source_tag >::get();
}

e4c::tag_t DataPackage::getTag_AbstractDataElement__dataRelation() const
{
	return e4c::tag< AbstractDataElement__dataRelation_tag >::get();
}

e4c::tag_t DataPackage::getTag_AbstractDataElement__abstraction() const
{
	return e4c::tag< AbstractDataElement__abstraction_tag >::get();
}

e4c::tag_t DataPackage::getTag_IndexElement__implementation() const
{
	return e4c::tag< IndexElement__implementation_tag >::get();
}

e4c::tag_t DataPackage::getTag_KeyRelation__to() const
{
	return e4c::tag< KeyRelation__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_KeyRelation__from() const
{
	return e4c::tag< KeyRelation__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataContainer__dataElement() const
{
	return e4c::tag< DataContainer__dataElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_RelationalSchema__codeElement() const
{
	return e4c::tag< RelationalSchema__codeElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_ColumnSet__itemUnit() const
{
	return e4c::tag< ColumnSet__itemUnit_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataEvent__kind() const
{
	return e4c::tag< DataEvent__kind_tag >::get();
}

e4c::tag_t DataPackage::getTag_XMLSchema__contentElement() const
{
	return e4c::tag< XMLSchema__contentElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_ComplexContentType__contentElement() const
{
	return e4c::tag< ComplexContentType__contentElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_ContentItem__type() const
{
	return e4c::tag< ContentItem__type_tag >::get();
}

e4c::tag_t DataPackage::getTag_ContentItem__contentElement() const
{
	return e4c::tag< ContentItem__contentElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_ContentRestriction__kind() const
{
	return e4c::tag< ContentRestriction__kind_tag >::get();
}

e4c::tag_t DataPackage::getTag_ContentRestriction__value() const
{
	return e4c::tag< ContentRestriction__value_tag >::get();
}

e4c::tag_t DataPackage::getTag_SimpleContentType__type() const
{
	return e4c::tag< SimpleContentType__type_tag >::get();
}

e4c::tag_t DataPackage::getTag_SimpleContentType__kind() const
{
	return e4c::tag< SimpleContentType__kind_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataRelationship__to() const
{
	return e4c::tag< DataRelationship__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataRelationship__from() const
{
	return e4c::tag< DataRelationship__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataAction__kind() const
{
	return e4c::tag< DataAction__kind_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataAction__implementation() const
{
	return e4c::tag< DataAction__implementation_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataAction__dataElement() const
{
	return e4c::tag< DataAction__dataElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_ReadsColumnSet__to() const
{
	return e4c::tag< ReadsColumnSet__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_ReadsColumnSet__from() const
{
	return e4c::tag< ReadsColumnSet__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_TypedBy__to() const
{
	return e4c::tag< TypedBy__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_TypedBy__from() const
{
	return e4c::tag< TypedBy__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_ReferenceTo__to() const
{
	return e4c::tag< ReferenceTo__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_ReferenceTo__from() const
{
	return e4c::tag< ReferenceTo__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_RestrictionOf__to() const
{
	return e4c::tag< RestrictionOf__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_RestrictionOf__from() const
{
	return e4c::tag< RestrictionOf__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_ExtensionTo__to() const
{
	return e4c::tag< ExtensionTo__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_ExtensionTo__from() const
{
	return e4c::tag< ExtensionTo__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_DatatypeOf__to() const
{
	return e4c::tag< DatatypeOf__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_DatatypeOf__from() const
{
	return e4c::tag< DatatypeOf__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_HasContent__to() const
{
	return e4c::tag< HasContent__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_HasContent__from() const
{
	return e4c::tag< HasContent__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_WritesColumnSet__to() const
{
	return e4c::tag< WritesColumnSet__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_WritesColumnSet__from() const
{
	return e4c::tag< WritesColumnSet__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_ProducesDataEvent__to() const
{
	return e4c::tag< ProducesDataEvent__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_ProducesDataEvent__from() const
{
	return e4c::tag< ProducesDataEvent__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_ManagesData__to() const
{
	return e4c::tag< ManagesData__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_ManagesData__from() const
{
	return e4c::tag< ManagesData__from_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_data()
{
	return ::kdm::data::DataPackage::_instance();
}
