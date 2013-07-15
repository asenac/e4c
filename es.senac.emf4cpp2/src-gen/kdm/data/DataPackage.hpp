#ifndef EMF_CPP_KDM_DATA_PACKAGE_HPP
#define EMF_CPP_KDM_DATA_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <kdm/data/fwd.hpp>

namespace kdm
{
namespace data
{


class DataPackage : public ::ecore::EPackage
{
public:
    static DataPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_DataModel();
 	e4c::tag_t getTag_AbstractDataElement();
 	e4c::tag_t getTag_DataResource();
 	e4c::tag_t getTag_IndexElement();
 	e4c::tag_t getTag_UniqueKey();
 	e4c::tag_t getTag_Index();
 	e4c::tag_t getTag_AbstractDataRelationship();
 	e4c::tag_t getTag_KeyRelation();
 	e4c::tag_t getTag_ReferenceKey();
 	e4c::tag_t getTag_DataContainer();
 	e4c::tag_t getTag_Catalog();
 	e4c::tag_t getTag_RelationalSchema();
 	e4c::tag_t getTag_ColumnSet();
 	e4c::tag_t getTag_RelationalTable();
 	e4c::tag_t getTag_RelationalView();
 	e4c::tag_t getTag_RecordFile();
 	e4c::tag_t getTag_DataEvent();
 	e4c::tag_t getTag_XMLSchema();
 	e4c::tag_t getTag_AbstractContentElement();
 	e4c::tag_t getTag_ComplexContentType();
 	e4c::tag_t getTag_AllContent();
 	e4c::tag_t getTag_SeqContent();
 	e4c::tag_t getTag_ChoiceContent();
 	e4c::tag_t getTag_ContentItem();
 	e4c::tag_t getTag_GroupContent();
 	e4c::tag_t getTag_ContentRestriction();
 	e4c::tag_t getTag_SimpleContentType();
 	e4c::tag_t getTag_ExtendedDataElement();
 	e4c::tag_t getTag_DataRelationship();
 	e4c::tag_t getTag_MixedContent();
 	e4c::tag_t getTag_ContentReference();
 	e4c::tag_t getTag_DataAction();
 	e4c::tag_t getTag_ReadsColumnSet();
 	e4c::tag_t getTag_ContentAttribute();
 	e4c::tag_t getTag_TypedBy();
 	e4c::tag_t getTag_ReferenceTo();
 	e4c::tag_t getTag_RestrictionOf();
 	e4c::tag_t getTag_ExtensionTo();
 	e4c::tag_t getTag_DatatypeOf();
 	e4c::tag_t getTag_HasContent();
 	e4c::tag_t getTag_WritesColumnSet();
 	e4c::tag_t getTag_ProducesDataEvent();
 	e4c::tag_t getTag_DataSegment();
 	e4c::tag_t getTag_ContentElement();
 	e4c::tag_t getTag_ManagesData();
 
 	// Structural features
 	e4c::tag_t getTag_DataModel__dataElement();
 	e4c::tag_t getTag_AbstractDataElement__source();
 	e4c::tag_t getTag_AbstractDataElement__dataRelation();
 	e4c::tag_t getTag_AbstractDataElement__abstraction();
 	e4c::tag_t getTag_IndexElement__implementation();
 	e4c::tag_t getTag_KeyRelation__to();
 	e4c::tag_t getTag_KeyRelation__from();
 	e4c::tag_t getTag_DataContainer__dataElement();
 	e4c::tag_t getTag_RelationalSchema__codeElement();
 	e4c::tag_t getTag_ColumnSet__itemUnit();
 	e4c::tag_t getTag_DataEvent__kind();
 	e4c::tag_t getTag_XMLSchema__contentElement();
 	e4c::tag_t getTag_ComplexContentType__contentElement();
 	e4c::tag_t getTag_ContentItem__type();
 	e4c::tag_t getTag_ContentItem__contentElement();
 	e4c::tag_t getTag_ContentRestriction__kind();
 	e4c::tag_t getTag_ContentRestriction__value();
 	e4c::tag_t getTag_SimpleContentType__type();
 	e4c::tag_t getTag_SimpleContentType__kind();
 	e4c::tag_t getTag_DataRelationship__to();
 	e4c::tag_t getTag_DataRelationship__from();
 	e4c::tag_t getTag_DataAction__kind();
 	e4c::tag_t getTag_DataAction__implementation();
 	e4c::tag_t getTag_DataAction__dataElement();
 	e4c::tag_t getTag_ReadsColumnSet__to();
 	e4c::tag_t getTag_ReadsColumnSet__from();
 	e4c::tag_t getTag_TypedBy__to();
 	e4c::tag_t getTag_TypedBy__from();
 	e4c::tag_t getTag_ReferenceTo__to();
 	e4c::tag_t getTag_ReferenceTo__from();
 	e4c::tag_t getTag_RestrictionOf__to();
 	e4c::tag_t getTag_RestrictionOf__from();
 	e4c::tag_t getTag_ExtensionTo__to();
 	e4c::tag_t getTag_ExtensionTo__from();
 	e4c::tag_t getTag_DatatypeOf__to();
 	e4c::tag_t getTag_DatatypeOf__from();
 	e4c::tag_t getTag_HasContent__to();
 	e4c::tag_t getTag_HasContent__from();
 	e4c::tag_t getTag_WritesColumnSet__to();
 	e4c::tag_t getTag_WritesColumnSet__from();
 	e4c::tag_t getTag_ProducesDataEvent__to();
 	e4c::tag_t getTag_ProducesDataEvent__from();
 	e4c::tag_t getTag_ManagesData__to();
 	e4c::tag_t getTag_ManagesData__from();

protected:
    DataPackage();
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_PACKAGE_HPP
