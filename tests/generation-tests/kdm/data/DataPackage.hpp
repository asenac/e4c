#ifndef EMF_CPP_KDM_DATA_PACKAGE_HPP
#define EMF_CPP_KDM_DATA_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/data/fwd.hpp>

namespace kdm
{
namespace data
{


class DataPackage : public ::ecore::EPackage
{
public:
    static const DataPackage_ptr _instance();
 
 	// Classifiers
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
 
 	// Structural features
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
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_PACKAGE_HPP
