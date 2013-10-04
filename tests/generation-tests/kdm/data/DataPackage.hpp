#ifndef EMF_CPP_KDM_DATA_PACKAGE_HPP
#define EMF_CPP_KDM_DATA_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/data/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace kdm
{
namespace data
{


class DataPackage : public ::ecore::EPackage
{
public:
    static const DataPackage_ptr _instance();

 	::ecore::EClass_ptr getDataModel() const;
 	::ecore::EClass_ptr getAbstractDataElement() const;
 	::ecore::EClass_ptr getDataResource() const;
 	::ecore::EClass_ptr getIndexElement() const;
 	::ecore::EClass_ptr getUniqueKey() const;
 	::ecore::EClass_ptr getIndex() const;
 	::ecore::EClass_ptr getAbstractDataRelationship() const;
 	::ecore::EClass_ptr getKeyRelation() const;
 	::ecore::EClass_ptr getReferenceKey() const;
 	::ecore::EClass_ptr getDataContainer() const;
 	::ecore::EClass_ptr getCatalog() const;
 	::ecore::EClass_ptr getRelationalSchema() const;
 	::ecore::EClass_ptr getColumnSet() const;
 	::ecore::EClass_ptr getRelationalTable() const;
 	::ecore::EClass_ptr getRelationalView() const;
 	::ecore::EClass_ptr getRecordFile() const;
 	::ecore::EClass_ptr getDataEvent() const;
 	::ecore::EClass_ptr getXMLSchema() const;
 	::ecore::EClass_ptr getAbstractContentElement() const;
 	::ecore::EClass_ptr getComplexContentType() const;
 	::ecore::EClass_ptr getAllContent() const;
 	::ecore::EClass_ptr getSeqContent() const;
 	::ecore::EClass_ptr getChoiceContent() const;
 	::ecore::EClass_ptr getContentItem() const;
 	::ecore::EClass_ptr getGroupContent() const;
 	::ecore::EClass_ptr getContentRestriction() const;
 	::ecore::EClass_ptr getSimpleContentType() const;
 	::ecore::EClass_ptr getExtendedDataElement() const;
 	::ecore::EClass_ptr getDataRelationship() const;
 	::ecore::EClass_ptr getMixedContent() const;
 	::ecore::EClass_ptr getContentReference() const;
 	::ecore::EClass_ptr getDataAction() const;
 	::ecore::EClass_ptr getReadsColumnSet() const;
 	::ecore::EClass_ptr getContentAttribute() const;
 	::ecore::EClass_ptr getTypedBy() const;
 	::ecore::EClass_ptr getReferenceTo() const;
 	::ecore::EClass_ptr getRestrictionOf() const;
 	::ecore::EClass_ptr getExtensionTo() const;
 	::ecore::EClass_ptr getDatatypeOf() const;
 	::ecore::EClass_ptr getHasContent() const;
 	::ecore::EClass_ptr getWritesColumnSet() const;
 	::ecore::EClass_ptr getProducesDataEvent() const;
 	::ecore::EClass_ptr getDataSegment() const;
 	::ecore::EClass_ptr getContentElement() const;
 	::ecore::EClass_ptr getManagesData() const;
 	
 	::ecore::EReference_ptr getDataModel__dataElement() const;
 	::ecore::EReference_ptr getAbstractDataElement__source() const;
 	::ecore::EReference_ptr getAbstractDataElement__dataRelation() const;
 	::ecore::EReference_ptr getAbstractDataElement__abstraction() const;
 	::ecore::EReference_ptr getIndexElement__implementation() const;
 	::ecore::EReference_ptr getKeyRelation__to() const;
 	::ecore::EReference_ptr getKeyRelation__from() const;
 	::ecore::EReference_ptr getDataContainer__dataElement() const;
 	::ecore::EReference_ptr getRelationalSchema__codeElement() const;
 	::ecore::EReference_ptr getColumnSet__itemUnit() const;
 	::ecore::EAttribute_ptr getDataEvent__kind() const;
 	::ecore::EReference_ptr getXMLSchema__contentElement() const;
 	::ecore::EReference_ptr getComplexContentType__contentElement() const;
 	::ecore::EReference_ptr getContentItem__type() const;
 	::ecore::EReference_ptr getContentItem__contentElement() const;
 	::ecore::EAttribute_ptr getContentRestriction__kind() const;
 	::ecore::EAttribute_ptr getContentRestriction__value() const;
 	::ecore::EReference_ptr getSimpleContentType__type() const;
 	::ecore::EAttribute_ptr getSimpleContentType__kind() const;
 	::ecore::EReference_ptr getDataRelationship__to() const;
 	::ecore::EReference_ptr getDataRelationship__from() const;
 	::ecore::EAttribute_ptr getDataAction__kind() const;
 	::ecore::EReference_ptr getDataAction__implementation() const;
 	::ecore::EReference_ptr getDataAction__dataElement() const;
 	::ecore::EReference_ptr getReadsColumnSet__to() const;
 	::ecore::EReference_ptr getReadsColumnSet__from() const;
 	::ecore::EReference_ptr getTypedBy__to() const;
 	::ecore::EReference_ptr getTypedBy__from() const;
 	::ecore::EReference_ptr getReferenceTo__to() const;
 	::ecore::EReference_ptr getReferenceTo__from() const;
 	::ecore::EReference_ptr getRestrictionOf__to() const;
 	::ecore::EReference_ptr getRestrictionOf__from() const;
 	::ecore::EReference_ptr getExtensionTo__to() const;
 	::ecore::EReference_ptr getExtensionTo__from() const;
 	::ecore::EReference_ptr getDatatypeOf__to() const;
 	::ecore::EReference_ptr getDatatypeOf__from() const;
 	::ecore::EReference_ptr getHasContent__to() const;
 	::ecore::EReference_ptr getHasContent__from() const;
 	::ecore::EReference_ptr getWritesColumnSet__to() const;
 	::ecore::EReference_ptr getWritesColumnSet__from() const;
 	::ecore::EReference_ptr getProducesDataEvent__to() const;
 	::ecore::EReference_ptr getProducesDataEvent__from() const;
 	::ecore::EReference_ptr getManagesData__to() const;
 	::ecore::EReference_ptr getManagesData__from() const;

 	e4c::tag_t getTag_DataModel() const;
 	e4c::tag_t getTag_AbstractDataElement() const;
 	e4c::tag_t getTag_DataResource() const;
 	e4c::tag_t getTag_IndexElement() const;
 	e4c::tag_t getTag_UniqueKey() const;
 	e4c::tag_t getTag_Index() const;
 	e4c::tag_t getTag_AbstractDataRelationship() const;
 	e4c::tag_t getTag_KeyRelation() const;
 	e4c::tag_t getTag_ReferenceKey() const;
 	e4c::tag_t getTag_DataContainer() const;
 	e4c::tag_t getTag_Catalog() const;
 	e4c::tag_t getTag_RelationalSchema() const;
 	e4c::tag_t getTag_ColumnSet() const;
 	e4c::tag_t getTag_RelationalTable() const;
 	e4c::tag_t getTag_RelationalView() const;
 	e4c::tag_t getTag_RecordFile() const;
 	e4c::tag_t getTag_DataEvent() const;
 	e4c::tag_t getTag_XMLSchema() const;
 	e4c::tag_t getTag_AbstractContentElement() const;
 	e4c::tag_t getTag_ComplexContentType() const;
 	e4c::tag_t getTag_AllContent() const;
 	e4c::tag_t getTag_SeqContent() const;
 	e4c::tag_t getTag_ChoiceContent() const;
 	e4c::tag_t getTag_ContentItem() const;
 	e4c::tag_t getTag_GroupContent() const;
 	e4c::tag_t getTag_ContentRestriction() const;
 	e4c::tag_t getTag_SimpleContentType() const;
 	e4c::tag_t getTag_ExtendedDataElement() const;
 	e4c::tag_t getTag_DataRelationship() const;
 	e4c::tag_t getTag_MixedContent() const;
 	e4c::tag_t getTag_ContentReference() const;
 	e4c::tag_t getTag_DataAction() const;
 	e4c::tag_t getTag_ReadsColumnSet() const;
 	e4c::tag_t getTag_ContentAttribute() const;
 	e4c::tag_t getTag_TypedBy() const;
 	e4c::tag_t getTag_ReferenceTo() const;
 	e4c::tag_t getTag_RestrictionOf() const;
 	e4c::tag_t getTag_ExtensionTo() const;
 	e4c::tag_t getTag_DatatypeOf() const;
 	e4c::tag_t getTag_HasContent() const;
 	e4c::tag_t getTag_WritesColumnSet() const;
 	e4c::tag_t getTag_ProducesDataEvent() const;
 	e4c::tag_t getTag_DataSegment() const;
 	e4c::tag_t getTag_ContentElement() const;
 	e4c::tag_t getTag_ManagesData() const;
 
 	e4c::tag_t getTag_DataModel__dataElement() const;
 	e4c::tag_t getTag_AbstractDataElement__source() const;
 	e4c::tag_t getTag_AbstractDataElement__dataRelation() const;
 	e4c::tag_t getTag_AbstractDataElement__abstraction() const;
 	e4c::tag_t getTag_IndexElement__implementation() const;
 	e4c::tag_t getTag_KeyRelation__to() const;
 	e4c::tag_t getTag_KeyRelation__from() const;
 	e4c::tag_t getTag_DataContainer__dataElement() const;
 	e4c::tag_t getTag_RelationalSchema__codeElement() const;
 	e4c::tag_t getTag_ColumnSet__itemUnit() const;
 	e4c::tag_t getTag_DataEvent__kind() const;
 	e4c::tag_t getTag_XMLSchema__contentElement() const;
 	e4c::tag_t getTag_ComplexContentType__contentElement() const;
 	e4c::tag_t getTag_ContentItem__type() const;
 	e4c::tag_t getTag_ContentItem__contentElement() const;
 	e4c::tag_t getTag_ContentRestriction__kind() const;
 	e4c::tag_t getTag_ContentRestriction__value() const;
 	e4c::tag_t getTag_SimpleContentType__type() const;
 	e4c::tag_t getTag_SimpleContentType__kind() const;
 	e4c::tag_t getTag_DataRelationship__to() const;
 	e4c::tag_t getTag_DataRelationship__from() const;
 	e4c::tag_t getTag_DataAction__kind() const;
 	e4c::tag_t getTag_DataAction__implementation() const;
 	e4c::tag_t getTag_DataAction__dataElement() const;
 	e4c::tag_t getTag_ReadsColumnSet__to() const;
 	e4c::tag_t getTag_ReadsColumnSet__from() const;
 	e4c::tag_t getTag_TypedBy__to() const;
 	e4c::tag_t getTag_TypedBy__from() const;
 	e4c::tag_t getTag_ReferenceTo__to() const;
 	e4c::tag_t getTag_ReferenceTo__from() const;
 	e4c::tag_t getTag_RestrictionOf__to() const;
 	e4c::tag_t getTag_RestrictionOf__from() const;
 	e4c::tag_t getTag_ExtensionTo__to() const;
 	e4c::tag_t getTag_ExtensionTo__from() const;
 	e4c::tag_t getTag_DatatypeOf__to() const;
 	e4c::tag_t getTag_DatatypeOf__from() const;
 	e4c::tag_t getTag_HasContent__to() const;
 	e4c::tag_t getTag_HasContent__from() const;
 	e4c::tag_t getTag_WritesColumnSet__to() const;
 	e4c::tag_t getTag_WritesColumnSet__from() const;
 	e4c::tag_t getTag_ProducesDataEvent__to() const;
 	e4c::tag_t getTag_ProducesDataEvent__from() const;
 	e4c::tag_t getTag_ManagesData__to() const;
 	e4c::tag_t getTag_ManagesData__from() const;

protected:
    DataPackage();
    
 	::ecore::EClass_ptr m_DataModel;
 	::ecore::EClass_ptr m_AbstractDataElement;
 	::ecore::EClass_ptr m_DataResource;
 	::ecore::EClass_ptr m_IndexElement;
 	::ecore::EClass_ptr m_UniqueKey;
 	::ecore::EClass_ptr m_Index;
 	::ecore::EClass_ptr m_AbstractDataRelationship;
 	::ecore::EClass_ptr m_KeyRelation;
 	::ecore::EClass_ptr m_ReferenceKey;
 	::ecore::EClass_ptr m_DataContainer;
 	::ecore::EClass_ptr m_Catalog;
 	::ecore::EClass_ptr m_RelationalSchema;
 	::ecore::EClass_ptr m_ColumnSet;
 	::ecore::EClass_ptr m_RelationalTable;
 	::ecore::EClass_ptr m_RelationalView;
 	::ecore::EClass_ptr m_RecordFile;
 	::ecore::EClass_ptr m_DataEvent;
 	::ecore::EClass_ptr m_XMLSchema;
 	::ecore::EClass_ptr m_AbstractContentElement;
 	::ecore::EClass_ptr m_ComplexContentType;
 	::ecore::EClass_ptr m_AllContent;
 	::ecore::EClass_ptr m_SeqContent;
 	::ecore::EClass_ptr m_ChoiceContent;
 	::ecore::EClass_ptr m_ContentItem;
 	::ecore::EClass_ptr m_GroupContent;
 	::ecore::EClass_ptr m_ContentRestriction;
 	::ecore::EClass_ptr m_SimpleContentType;
 	::ecore::EClass_ptr m_ExtendedDataElement;
 	::ecore::EClass_ptr m_DataRelationship;
 	::ecore::EClass_ptr m_MixedContent;
 	::ecore::EClass_ptr m_ContentReference;
 	::ecore::EClass_ptr m_DataAction;
 	::ecore::EClass_ptr m_ReadsColumnSet;
 	::ecore::EClass_ptr m_ContentAttribute;
 	::ecore::EClass_ptr m_TypedBy;
 	::ecore::EClass_ptr m_ReferenceTo;
 	::ecore::EClass_ptr m_RestrictionOf;
 	::ecore::EClass_ptr m_ExtensionTo;
 	::ecore::EClass_ptr m_DatatypeOf;
 	::ecore::EClass_ptr m_HasContent;
 	::ecore::EClass_ptr m_WritesColumnSet;
 	::ecore::EClass_ptr m_ProducesDataEvent;
 	::ecore::EClass_ptr m_DataSegment;
 	::ecore::EClass_ptr m_ContentElement;
 	::ecore::EClass_ptr m_ManagesData;
 	::ecore::EReference_ptr m_DataModel__dataElement;
 	::ecore::EReference_ptr m_AbstractDataElement__source;
 	::ecore::EReference_ptr m_AbstractDataElement__dataRelation;
 	::ecore::EReference_ptr m_AbstractDataElement__abstraction;
 	::ecore::EReference_ptr m_IndexElement__implementation;
 	::ecore::EReference_ptr m_KeyRelation__to;
 	::ecore::EReference_ptr m_KeyRelation__from;
 	::ecore::EReference_ptr m_DataContainer__dataElement;
 	::ecore::EReference_ptr m_RelationalSchema__codeElement;
 	::ecore::EReference_ptr m_ColumnSet__itemUnit;
 	::ecore::EAttribute_ptr m_DataEvent__kind;
 	::ecore::EReference_ptr m_XMLSchema__contentElement;
 	::ecore::EReference_ptr m_ComplexContentType__contentElement;
 	::ecore::EReference_ptr m_ContentItem__type;
 	::ecore::EReference_ptr m_ContentItem__contentElement;
 	::ecore::EAttribute_ptr m_ContentRestriction__kind;
 	::ecore::EAttribute_ptr m_ContentRestriction__value;
 	::ecore::EReference_ptr m_SimpleContentType__type;
 	::ecore::EAttribute_ptr m_SimpleContentType__kind;
 	::ecore::EReference_ptr m_DataRelationship__to;
 	::ecore::EReference_ptr m_DataRelationship__from;
 	::ecore::EAttribute_ptr m_DataAction__kind;
 	::ecore::EReference_ptr m_DataAction__implementation;
 	::ecore::EReference_ptr m_DataAction__dataElement;
 	::ecore::EReference_ptr m_ReadsColumnSet__to;
 	::ecore::EReference_ptr m_ReadsColumnSet__from;
 	::ecore::EReference_ptr m_TypedBy__to;
 	::ecore::EReference_ptr m_TypedBy__from;
 	::ecore::EReference_ptr m_ReferenceTo__to;
 	::ecore::EReference_ptr m_ReferenceTo__from;
 	::ecore::EReference_ptr m_RestrictionOf__to;
 	::ecore::EReference_ptr m_RestrictionOf__from;
 	::ecore::EReference_ptr m_ExtensionTo__to;
 	::ecore::EReference_ptr m_ExtensionTo__from;
 	::ecore::EReference_ptr m_DatatypeOf__to;
 	::ecore::EReference_ptr m_DatatypeOf__from;
 	::ecore::EReference_ptr m_HasContent__to;
 	::ecore::EReference_ptr m_HasContent__from;
 	::ecore::EReference_ptr m_WritesColumnSet__to;
 	::ecore::EReference_ptr m_WritesColumnSet__from;
 	::ecore::EReference_ptr m_ProducesDataEvent__to;
 	::ecore::EReference_ptr m_ProducesDataEvent__from;
 	::ecore::EReference_ptr m_ManagesData__to;
 	::ecore::EReference_ptr m_ManagesData__from;
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_PACKAGE_HPP
