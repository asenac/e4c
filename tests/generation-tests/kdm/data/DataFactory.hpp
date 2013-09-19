#ifndef EMF_CPP_KDM_DATA_FACTORY_HPP
#define EMF_CPP_KDM_DATA_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <kdm/data/fwd.hpp>

namespace kdm
{
namespace data
{


class DataFactory : public ::ecore::EFactory
{
public:

    static const DataFactory_ptr _instance();

    DataModel_ptr createDataModel() const;
    DataResource_ptr createDataResource() const;
    IndexElement_ptr createIndexElement() const;
    UniqueKey_ptr createUniqueKey() const;
    Index_ptr createIndex() const;
    KeyRelation_ptr createKeyRelation() const;
    ReferenceKey_ptr createReferenceKey() const;
    DataContainer_ptr createDataContainer() const;
    Catalog_ptr createCatalog() const;
    RelationalSchema_ptr createRelationalSchema() const;
    ColumnSet_ptr createColumnSet() const;
    RelationalTable_ptr createRelationalTable() const;
    RelationalView_ptr createRelationalView() const;
    RecordFile_ptr createRecordFile() const;
    DataEvent_ptr createDataEvent() const;
    XMLSchema_ptr createXMLSchema() const;
    ComplexContentType_ptr createComplexContentType() const;
    AllContent_ptr createAllContent() const;
    SeqContent_ptr createSeqContent() const;
    ChoiceContent_ptr createChoiceContent() const;
    ContentItem_ptr createContentItem() const;
    GroupContent_ptr createGroupContent() const;
    ContentRestriction_ptr createContentRestriction() const;
    SimpleContentType_ptr createSimpleContentType() const;
    ExtendedDataElement_ptr createExtendedDataElement() const;
    DataRelationship_ptr createDataRelationship() const;
    MixedContent_ptr createMixedContent() const;
    ContentReference_ptr createContentReference() const;
    DataAction_ptr createDataAction() const;
    ReadsColumnSet_ptr createReadsColumnSet() const;
    ContentAttribute_ptr createContentAttribute() const;
    TypedBy_ptr createTypedBy() const;
    ReferenceTo_ptr createReferenceTo() const;
    RestrictionOf_ptr createRestrictionOf() const;
    ExtensionTo_ptr createExtensionTo() const;
    DatatypeOf_ptr createDatatypeOf() const;
    HasContent_ptr createHasContent() const;
    WritesColumnSet_ptr createWritesColumnSet() const;
    ProducesDataEvent_ptr createProducesDataEvent() const;
    DataSegment_ptr createDataSegment() const;
    ContentElement_ptr createContentElement() const;
    ManagesData_ptr createManagesData() const;

protected:

    DataFactory();
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_FACTORY_HPP
