#include "DataPackage.hpp"
#include "include.hpp"
#include <emf4cpp2/tag.ipp>

using namespace kdm::data;

DataPackage::DataPackage()
{
}

DataPackage_ptr DataPackage::_instance()
{
	static DataPackage __instance;
	return &__instance;
}

e4c::tag_t DataPackage::getTag_DataModel()
{
	return e4c::tag< DataModel >::get();
}
 
e4c::tag_t DataPackage::getTag_AbstractDataElement()
{
	return e4c::tag< AbstractDataElement >::get();
}
 
e4c::tag_t DataPackage::getTag_DataResource()
{
	return e4c::tag< DataResource >::get();
}
 
e4c::tag_t DataPackage::getTag_IndexElement()
{
	return e4c::tag< IndexElement >::get();
}
 
e4c::tag_t DataPackage::getTag_UniqueKey()
{
	return e4c::tag< UniqueKey >::get();
}
 
e4c::tag_t DataPackage::getTag_Index()
{
	return e4c::tag< Index >::get();
}
 
e4c::tag_t DataPackage::getTag_AbstractDataRelationship()
{
	return e4c::tag< AbstractDataRelationship >::get();
}
 
e4c::tag_t DataPackage::getTag_KeyRelation()
{
	return e4c::tag< KeyRelation >::get();
}
 
e4c::tag_t DataPackage::getTag_ReferenceKey()
{
	return e4c::tag< ReferenceKey >::get();
}
 
e4c::tag_t DataPackage::getTag_DataContainer()
{
	return e4c::tag< DataContainer >::get();
}
 
e4c::tag_t DataPackage::getTag_Catalog()
{
	return e4c::tag< Catalog >::get();
}
 
e4c::tag_t DataPackage::getTag_RelationalSchema()
{
	return e4c::tag< RelationalSchema >::get();
}
 
e4c::tag_t DataPackage::getTag_ColumnSet()
{
	return e4c::tag< ColumnSet >::get();
}
 
e4c::tag_t DataPackage::getTag_RelationalTable()
{
	return e4c::tag< RelationalTable >::get();
}
 
e4c::tag_t DataPackage::getTag_RelationalView()
{
	return e4c::tag< RelationalView >::get();
}
 
e4c::tag_t DataPackage::getTag_RecordFile()
{
	return e4c::tag< RecordFile >::get();
}
 
e4c::tag_t DataPackage::getTag_DataEvent()
{
	return e4c::tag< DataEvent >::get();
}
 
e4c::tag_t DataPackage::getTag_XMLSchema()
{
	return e4c::tag< XMLSchema >::get();
}
 
e4c::tag_t DataPackage::getTag_AbstractContentElement()
{
	return e4c::tag< AbstractContentElement >::get();
}
 
e4c::tag_t DataPackage::getTag_ComplexContentType()
{
	return e4c::tag< ComplexContentType >::get();
}
 
e4c::tag_t DataPackage::getTag_AllContent()
{
	return e4c::tag< AllContent >::get();
}
 
e4c::tag_t DataPackage::getTag_SeqContent()
{
	return e4c::tag< SeqContent >::get();
}
 
e4c::tag_t DataPackage::getTag_ChoiceContent()
{
	return e4c::tag< ChoiceContent >::get();
}
 
e4c::tag_t DataPackage::getTag_ContentItem()
{
	return e4c::tag< ContentItem >::get();
}
 
e4c::tag_t DataPackage::getTag_GroupContent()
{
	return e4c::tag< GroupContent >::get();
}
 
e4c::tag_t DataPackage::getTag_ContentRestriction()
{
	return e4c::tag< ContentRestriction >::get();
}
 
e4c::tag_t DataPackage::getTag_SimpleContentType()
{
	return e4c::tag< SimpleContentType >::get();
}
 
e4c::tag_t DataPackage::getTag_ExtendedDataElement()
{
	return e4c::tag< ExtendedDataElement >::get();
}
 
e4c::tag_t DataPackage::getTag_DataRelationship()
{
	return e4c::tag< DataRelationship >::get();
}
 
e4c::tag_t DataPackage::getTag_MixedContent()
{
	return e4c::tag< MixedContent >::get();
}
 
e4c::tag_t DataPackage::getTag_ContentReference()
{
	return e4c::tag< ContentReference >::get();
}
 
e4c::tag_t DataPackage::getTag_DataAction()
{
	return e4c::tag< DataAction >::get();
}
 
e4c::tag_t DataPackage::getTag_ReadsColumnSet()
{
	return e4c::tag< ReadsColumnSet >::get();
}
 
e4c::tag_t DataPackage::getTag_ContentAttribute()
{
	return e4c::tag< ContentAttribute >::get();
}
 
e4c::tag_t DataPackage::getTag_TypedBy()
{
	return e4c::tag< TypedBy >::get();
}
 
e4c::tag_t DataPackage::getTag_ReferenceTo()
{
	return e4c::tag< ReferenceTo >::get();
}
 
e4c::tag_t DataPackage::getTag_RestrictionOf()
{
	return e4c::tag< RestrictionOf >::get();
}
 
e4c::tag_t DataPackage::getTag_ExtensionTo()
{
	return e4c::tag< ExtensionTo >::get();
}
 
e4c::tag_t DataPackage::getTag_DatatypeOf()
{
	return e4c::tag< DatatypeOf >::get();
}
 
e4c::tag_t DataPackage::getTag_HasContent()
{
	return e4c::tag< HasContent >::get();
}
 
e4c::tag_t DataPackage::getTag_WritesColumnSet()
{
	return e4c::tag< WritesColumnSet >::get();
}
 
e4c::tag_t DataPackage::getTag_ProducesDataEvent()
{
	return e4c::tag< ProducesDataEvent >::get();
}
 
e4c::tag_t DataPackage::getTag_DataSegment()
{
	return e4c::tag< DataSegment >::get();
}
 
e4c::tag_t DataPackage::getTag_ContentElement()
{
	return e4c::tag< ContentElement >::get();
}
 
e4c::tag_t DataPackage::getTag_ManagesData()
{
	return e4c::tag< ManagesData >::get();
}
 
e4c::tag_t DataPackage::getTag_DataModel__dataElement()
{
	return e4c::tag< DataModel__dataElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_AbstractDataElement__source()
{
	return e4c::tag< AbstractDataElement__source_tag >::get();
}

e4c::tag_t DataPackage::getTag_AbstractDataElement__dataRelation()
{
	return e4c::tag< AbstractDataElement__dataRelation_tag >::get();
}

e4c::tag_t DataPackage::getTag_AbstractDataElement__abstraction()
{
	return e4c::tag< AbstractDataElement__abstraction_tag >::get();
}

e4c::tag_t DataPackage::getTag_IndexElement__implementation()
{
	return e4c::tag< IndexElement__implementation_tag >::get();
}

e4c::tag_t DataPackage::getTag_KeyRelation__to()
{
	return e4c::tag< KeyRelation__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_KeyRelation__from()
{
	return e4c::tag< KeyRelation__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataContainer__dataElement()
{
	return e4c::tag< DataContainer__dataElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_RelationalSchema__codeElement()
{
	return e4c::tag< RelationalSchema__codeElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_ColumnSet__itemUnit()
{
	return e4c::tag< ColumnSet__itemUnit_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataEvent__kind()
{
	return e4c::tag< DataEvent__kind_tag >::get();
}

e4c::tag_t DataPackage::getTag_XMLSchema__contentElement()
{
	return e4c::tag< XMLSchema__contentElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_ComplexContentType__contentElement()
{
	return e4c::tag< ComplexContentType__contentElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_ContentItem__type()
{
	return e4c::tag< ContentItem__type_tag >::get();
}

e4c::tag_t DataPackage::getTag_ContentItem__contentElement()
{
	return e4c::tag< ContentItem__contentElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_ContentRestriction__kind()
{
	return e4c::tag< ContentRestriction__kind_tag >::get();
}

e4c::tag_t DataPackage::getTag_ContentRestriction__value()
{
	return e4c::tag< ContentRestriction__value_tag >::get();
}

e4c::tag_t DataPackage::getTag_SimpleContentType__type()
{
	return e4c::tag< SimpleContentType__type_tag >::get();
}

e4c::tag_t DataPackage::getTag_SimpleContentType__kind()
{
	return e4c::tag< SimpleContentType__kind_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataRelationship__to()
{
	return e4c::tag< DataRelationship__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataRelationship__from()
{
	return e4c::tag< DataRelationship__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataAction__kind()
{
	return e4c::tag< DataAction__kind_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataAction__implementation()
{
	return e4c::tag< DataAction__implementation_tag >::get();
}

e4c::tag_t DataPackage::getTag_DataAction__dataElement()
{
	return e4c::tag< DataAction__dataElement_tag >::get();
}

e4c::tag_t DataPackage::getTag_ReadsColumnSet__to()
{
	return e4c::tag< ReadsColumnSet__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_ReadsColumnSet__from()
{
	return e4c::tag< ReadsColumnSet__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_TypedBy__to()
{
	return e4c::tag< TypedBy__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_TypedBy__from()
{
	return e4c::tag< TypedBy__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_ReferenceTo__to()
{
	return e4c::tag< ReferenceTo__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_ReferenceTo__from()
{
	return e4c::tag< ReferenceTo__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_RestrictionOf__to()
{
	return e4c::tag< RestrictionOf__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_RestrictionOf__from()
{
	return e4c::tag< RestrictionOf__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_ExtensionTo__to()
{
	return e4c::tag< ExtensionTo__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_ExtensionTo__from()
{
	return e4c::tag< ExtensionTo__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_DatatypeOf__to()
{
	return e4c::tag< DatatypeOf__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_DatatypeOf__from()
{
	return e4c::tag< DatatypeOf__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_HasContent__to()
{
	return e4c::tag< HasContent__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_HasContent__from()
{
	return e4c::tag< HasContent__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_WritesColumnSet__to()
{
	return e4c::tag< WritesColumnSet__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_WritesColumnSet__from()
{
	return e4c::tag< WritesColumnSet__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_ProducesDataEvent__to()
{
	return e4c::tag< ProducesDataEvent__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_ProducesDataEvent__from()
{
	return e4c::tag< ProducesDataEvent__from_tag >::get();
}

e4c::tag_t DataPackage::getTag_ManagesData__to()
{
	return e4c::tag< ManagesData__to_tag >::get();
}

e4c::tag_t DataPackage::getTag_ManagesData__from()
{
	return e4c::tag< ManagesData__from_tag >::get();
}

extern "C" ::ecore::EPackage_ptr e4c_kdm_data()
{
	return ::kdm::data::DataPackage::_instance();
}
