#include "DataPackage.hpp"
#include "DataFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace kdm::data;

DataPackage::DataPackage()
{
	m_eFactoryInstance = DataFactory::_instance();
	::ecore::EcoreFactor_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
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
