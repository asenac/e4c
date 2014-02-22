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



    m_DataModel = ecoreFactory->createEClass();
    m_DataModel->setName("DataModel");
    addEClassifiers(m_DataModel);
    m_AbstractDataElement = ecoreFactory->createEClass();
    m_AbstractDataElement->setName("AbstractDataElement");
    addEClassifiers(m_AbstractDataElement);
    m_DataResource = ecoreFactory->createEClass();
    m_DataResource->setName("DataResource");
    addEClassifiers(m_DataResource);
    m_IndexElement = ecoreFactory->createEClass();
    m_IndexElement->setName("IndexElement");
    addEClassifiers(m_IndexElement);
    m_UniqueKey = ecoreFactory->createEClass();
    m_UniqueKey->setName("UniqueKey");
    addEClassifiers(m_UniqueKey);
    m_Index = ecoreFactory->createEClass();
    m_Index->setName("Index");
    addEClassifiers(m_Index);
    m_AbstractDataRelationship = ecoreFactory->createEClass();
    m_AbstractDataRelationship->setName("AbstractDataRelationship");
    addEClassifiers(m_AbstractDataRelationship);
    m_KeyRelation = ecoreFactory->createEClass();
    m_KeyRelation->setName("KeyRelation");
    addEClassifiers(m_KeyRelation);
    m_ReferenceKey = ecoreFactory->createEClass();
    m_ReferenceKey->setName("ReferenceKey");
    addEClassifiers(m_ReferenceKey);
    m_DataContainer = ecoreFactory->createEClass();
    m_DataContainer->setName("DataContainer");
    addEClassifiers(m_DataContainer);
    m_Catalog = ecoreFactory->createEClass();
    m_Catalog->setName("Catalog");
    addEClassifiers(m_Catalog);
    m_RelationalSchema = ecoreFactory->createEClass();
    m_RelationalSchema->setName("RelationalSchema");
    addEClassifiers(m_RelationalSchema);
    m_ColumnSet = ecoreFactory->createEClass();
    m_ColumnSet->setName("ColumnSet");
    addEClassifiers(m_ColumnSet);
    m_RelationalTable = ecoreFactory->createEClass();
    m_RelationalTable->setName("RelationalTable");
    addEClassifiers(m_RelationalTable);
    m_RelationalView = ecoreFactory->createEClass();
    m_RelationalView->setName("RelationalView");
    addEClassifiers(m_RelationalView);
    m_RecordFile = ecoreFactory->createEClass();
    m_RecordFile->setName("RecordFile");
    addEClassifiers(m_RecordFile);
    m_DataEvent = ecoreFactory->createEClass();
    m_DataEvent->setName("DataEvent");
    addEClassifiers(m_DataEvent);
    m_XMLSchema = ecoreFactory->createEClass();
    m_XMLSchema->setName("XMLSchema");
    addEClassifiers(m_XMLSchema);
    m_AbstractContentElement = ecoreFactory->createEClass();
    m_AbstractContentElement->setName("AbstractContentElement");
    addEClassifiers(m_AbstractContentElement);
    m_ComplexContentType = ecoreFactory->createEClass();
    m_ComplexContentType->setName("ComplexContentType");
    addEClassifiers(m_ComplexContentType);
    m_AllContent = ecoreFactory->createEClass();
    m_AllContent->setName("AllContent");
    addEClassifiers(m_AllContent);
    m_SeqContent = ecoreFactory->createEClass();
    m_SeqContent->setName("SeqContent");
    addEClassifiers(m_SeqContent);
    m_ChoiceContent = ecoreFactory->createEClass();
    m_ChoiceContent->setName("ChoiceContent");
    addEClassifiers(m_ChoiceContent);
    m_ContentItem = ecoreFactory->createEClass();
    m_ContentItem->setName("ContentItem");
    addEClassifiers(m_ContentItem);
    m_GroupContent = ecoreFactory->createEClass();
    m_GroupContent->setName("GroupContent");
    addEClassifiers(m_GroupContent);
    m_ContentRestriction = ecoreFactory->createEClass();
    m_ContentRestriction->setName("ContentRestriction");
    addEClassifiers(m_ContentRestriction);
    m_SimpleContentType = ecoreFactory->createEClass();
    m_SimpleContentType->setName("SimpleContentType");
    addEClassifiers(m_SimpleContentType);
    m_ExtendedDataElement = ecoreFactory->createEClass();
    m_ExtendedDataElement->setName("ExtendedDataElement");
    addEClassifiers(m_ExtendedDataElement);
    m_DataRelationship = ecoreFactory->createEClass();
    m_DataRelationship->setName("DataRelationship");
    addEClassifiers(m_DataRelationship);
    m_MixedContent = ecoreFactory->createEClass();
    m_MixedContent->setName("MixedContent");
    addEClassifiers(m_MixedContent);
    m_ContentReference = ecoreFactory->createEClass();
    m_ContentReference->setName("ContentReference");
    addEClassifiers(m_ContentReference);
    m_DataAction = ecoreFactory->createEClass();
    m_DataAction->setName("DataAction");
    addEClassifiers(m_DataAction);
    m_ReadsColumnSet = ecoreFactory->createEClass();
    m_ReadsColumnSet->setName("ReadsColumnSet");
    addEClassifiers(m_ReadsColumnSet);
    m_ContentAttribute = ecoreFactory->createEClass();
    m_ContentAttribute->setName("ContentAttribute");
    addEClassifiers(m_ContentAttribute);
    m_TypedBy = ecoreFactory->createEClass();
    m_TypedBy->setName("TypedBy");
    addEClassifiers(m_TypedBy);
    m_ReferenceTo = ecoreFactory->createEClass();
    m_ReferenceTo->setName("ReferenceTo");
    addEClassifiers(m_ReferenceTo);
    m_RestrictionOf = ecoreFactory->createEClass();
    m_RestrictionOf->setName("RestrictionOf");
    addEClassifiers(m_RestrictionOf);
    m_ExtensionTo = ecoreFactory->createEClass();
    m_ExtensionTo->setName("ExtensionTo");
    addEClassifiers(m_ExtensionTo);
    m_DatatypeOf = ecoreFactory->createEClass();
    m_DatatypeOf->setName("DatatypeOf");
    addEClassifiers(m_DatatypeOf);
    m_HasContent = ecoreFactory->createEClass();
    m_HasContent->setName("HasContent");
    addEClassifiers(m_HasContent);
    m_WritesColumnSet = ecoreFactory->createEClass();
    m_WritesColumnSet->setName("WritesColumnSet");
    addEClassifiers(m_WritesColumnSet);
    m_ProducesDataEvent = ecoreFactory->createEClass();
    m_ProducesDataEvent->setName("ProducesDataEvent");
    addEClassifiers(m_ProducesDataEvent);
    m_DataSegment = ecoreFactory->createEClass();
    m_DataSegment->setName("DataSegment");
    addEClassifiers(m_DataSegment);
    m_ContentElement = ecoreFactory->createEClass();
    m_ContentElement->setName("ContentElement");
    addEClassifiers(m_ContentElement);
    m_ManagesData = ecoreFactory->createEClass();
    m_ManagesData->setName("ManagesData");
    addEClassifiers(m_ManagesData);


    {
        m_DataModel__dataElement = ecoreFactory->createEReference();
        m_DataModel__dataElement->setName("dataElement");
        m_DataModel->addEStructuralFeatures(m_DataModel__dataElement);
        m_DataModel->addEAllStructuralFeatures(m_DataModel__dataElement);
        m_DataModel->addEReferences(m_DataModel__dataElement);
        m_DataModel->addEAllReferences(m_DataModel__dataElement);
    }
    {
        m_AbstractDataElement__source = ecoreFactory->createEReference();
        m_AbstractDataElement__source->setName("source");
        m_AbstractDataElement->addEStructuralFeatures(m_AbstractDataElement__source);
        m_AbstractDataElement->addEAllStructuralFeatures(m_AbstractDataElement__source);
        m_AbstractDataElement->addEReferences(m_AbstractDataElement__source);
        m_AbstractDataElement->addEAllReferences(m_AbstractDataElement__source);
    }
    {
        m_AbstractDataElement__dataRelation = ecoreFactory->createEReference();
        m_AbstractDataElement__dataRelation->setName("dataRelation");
        m_AbstractDataElement->addEStructuralFeatures(m_AbstractDataElement__dataRelation);
        m_AbstractDataElement->addEAllStructuralFeatures(m_AbstractDataElement__dataRelation);
        m_AbstractDataElement->addEReferences(m_AbstractDataElement__dataRelation);
        m_AbstractDataElement->addEAllReferences(m_AbstractDataElement__dataRelation);
    }
    {
        m_AbstractDataElement__abstraction = ecoreFactory->createEReference();
        m_AbstractDataElement__abstraction->setName("abstraction");
        m_AbstractDataElement->addEStructuralFeatures(m_AbstractDataElement__abstraction);
        m_AbstractDataElement->addEAllStructuralFeatures(m_AbstractDataElement__abstraction);
        m_AbstractDataElement->addEReferences(m_AbstractDataElement__abstraction);
        m_AbstractDataElement->addEAllReferences(m_AbstractDataElement__abstraction);
    }
    {
        m_IndexElement__implementation = ecoreFactory->createEReference();
        m_IndexElement__implementation->setName("implementation");
        m_IndexElement->addEStructuralFeatures(m_IndexElement__implementation);
        m_IndexElement->addEAllStructuralFeatures(m_IndexElement__implementation);
        m_IndexElement->addEReferences(m_IndexElement__implementation);
        m_IndexElement->addEAllReferences(m_IndexElement__implementation);
    }
    {
        m_KeyRelation__to = ecoreFactory->createEReference();
        m_KeyRelation__to->setName("to");
        m_KeyRelation->addEStructuralFeatures(m_KeyRelation__to);
        m_KeyRelation->addEAllStructuralFeatures(m_KeyRelation__to);
        m_KeyRelation->addEReferences(m_KeyRelation__to);
        m_KeyRelation->addEAllReferences(m_KeyRelation__to);
    }
    {
        m_KeyRelation__from = ecoreFactory->createEReference();
        m_KeyRelation__from->setName("from");
        m_KeyRelation->addEStructuralFeatures(m_KeyRelation__from);
        m_KeyRelation->addEAllStructuralFeatures(m_KeyRelation__from);
        m_KeyRelation->addEReferences(m_KeyRelation__from);
        m_KeyRelation->addEAllReferences(m_KeyRelation__from);
    }
    {
        m_DataContainer__dataElement = ecoreFactory->createEReference();
        m_DataContainer__dataElement->setName("dataElement");
        m_DataContainer->addEStructuralFeatures(m_DataContainer__dataElement);
        m_DataContainer->addEAllStructuralFeatures(m_DataContainer__dataElement);
        m_DataContainer->addEReferences(m_DataContainer__dataElement);
        m_DataContainer->addEAllReferences(m_DataContainer__dataElement);
    }
    {
        m_RelationalSchema__codeElement = ecoreFactory->createEReference();
        m_RelationalSchema__codeElement->setName("codeElement");
        m_RelationalSchema->addEStructuralFeatures(m_RelationalSchema__codeElement);
        m_RelationalSchema->addEAllStructuralFeatures(m_RelationalSchema__codeElement);
        m_RelationalSchema->addEReferences(m_RelationalSchema__codeElement);
        m_RelationalSchema->addEAllReferences(m_RelationalSchema__codeElement);
    }
    {
        m_ColumnSet__itemUnit = ecoreFactory->createEReference();
        m_ColumnSet__itemUnit->setName("itemUnit");
        m_ColumnSet->addEStructuralFeatures(m_ColumnSet__itemUnit);
        m_ColumnSet->addEAllStructuralFeatures(m_ColumnSet__itemUnit);
        m_ColumnSet->addEReferences(m_ColumnSet__itemUnit);
        m_ColumnSet->addEAllReferences(m_ColumnSet__itemUnit);
    }
    {
        m_DataEvent__kind = ecoreFactory->createEAttribute();
        m_DataEvent__kind->setName("kind");
        m_DataEvent->addEStructuralFeatures(m_DataEvent__kind);
        m_DataEvent->addEAllStructuralFeatures(m_DataEvent__kind);
        m_DataEvent->addEAttributes(m_DataEvent__kind);
        m_DataEvent->addEAllAttributes(m_DataEvent__kind);
    }
    {
        m_XMLSchema__contentElement = ecoreFactory->createEReference();
        m_XMLSchema__contentElement->setName("contentElement");
        m_XMLSchema->addEStructuralFeatures(m_XMLSchema__contentElement);
        m_XMLSchema->addEAllStructuralFeatures(m_XMLSchema__contentElement);
        m_XMLSchema->addEReferences(m_XMLSchema__contentElement);
        m_XMLSchema->addEAllReferences(m_XMLSchema__contentElement);
    }
    {
        m_ComplexContentType__contentElement = ecoreFactory->createEReference();
        m_ComplexContentType__contentElement->setName("contentElement");
        m_ComplexContentType->addEStructuralFeatures(m_ComplexContentType__contentElement);
        m_ComplexContentType->addEAllStructuralFeatures(m_ComplexContentType__contentElement);
        m_ComplexContentType->addEReferences(m_ComplexContentType__contentElement);
        m_ComplexContentType->addEAllReferences(m_ComplexContentType__contentElement);
    }
    {
        m_ContentItem__type = ecoreFactory->createEReference();
        m_ContentItem__type->setName("type");
        m_ContentItem->addEStructuralFeatures(m_ContentItem__type);
        m_ContentItem->addEAllStructuralFeatures(m_ContentItem__type);
        m_ContentItem->addEReferences(m_ContentItem__type);
        m_ContentItem->addEAllReferences(m_ContentItem__type);
    }
    {
        m_ContentItem__contentElement = ecoreFactory->createEReference();
        m_ContentItem__contentElement->setName("contentElement");
        m_ContentItem->addEStructuralFeatures(m_ContentItem__contentElement);
        m_ContentItem->addEAllStructuralFeatures(m_ContentItem__contentElement);
        m_ContentItem->addEReferences(m_ContentItem__contentElement);
        m_ContentItem->addEAllReferences(m_ContentItem__contentElement);
    }
    {
        m_ContentRestriction__kind = ecoreFactory->createEAttribute();
        m_ContentRestriction__kind->setName("kind");
        m_ContentRestriction->addEStructuralFeatures(m_ContentRestriction__kind);
        m_ContentRestriction->addEAllStructuralFeatures(m_ContentRestriction__kind);
        m_ContentRestriction->addEAttributes(m_ContentRestriction__kind);
        m_ContentRestriction->addEAllAttributes(m_ContentRestriction__kind);
    }
    {
        m_ContentRestriction__value = ecoreFactory->createEAttribute();
        m_ContentRestriction__value->setName("value");
        m_ContentRestriction->addEStructuralFeatures(m_ContentRestriction__value);
        m_ContentRestriction->addEAllStructuralFeatures(m_ContentRestriction__value);
        m_ContentRestriction->addEAttributes(m_ContentRestriction__value);
        m_ContentRestriction->addEAllAttributes(m_ContentRestriction__value);
    }
    {
        m_SimpleContentType__type = ecoreFactory->createEReference();
        m_SimpleContentType__type->setName("type");
        m_SimpleContentType->addEStructuralFeatures(m_SimpleContentType__type);
        m_SimpleContentType->addEAllStructuralFeatures(m_SimpleContentType__type);
        m_SimpleContentType->addEReferences(m_SimpleContentType__type);
        m_SimpleContentType->addEAllReferences(m_SimpleContentType__type);
    }
    {
        m_SimpleContentType__kind = ecoreFactory->createEAttribute();
        m_SimpleContentType__kind->setName("kind");
        m_SimpleContentType->addEStructuralFeatures(m_SimpleContentType__kind);
        m_SimpleContentType->addEAllStructuralFeatures(m_SimpleContentType__kind);
        m_SimpleContentType->addEAttributes(m_SimpleContentType__kind);
        m_SimpleContentType->addEAllAttributes(m_SimpleContentType__kind);
    }
    {
        m_DataRelationship__to = ecoreFactory->createEReference();
        m_DataRelationship__to->setName("to");
        m_DataRelationship->addEStructuralFeatures(m_DataRelationship__to);
        m_DataRelationship->addEAllStructuralFeatures(m_DataRelationship__to);
        m_DataRelationship->addEReferences(m_DataRelationship__to);
        m_DataRelationship->addEAllReferences(m_DataRelationship__to);
    }
    {
        m_DataRelationship__from = ecoreFactory->createEReference();
        m_DataRelationship__from->setName("from");
        m_DataRelationship->addEStructuralFeatures(m_DataRelationship__from);
        m_DataRelationship->addEAllStructuralFeatures(m_DataRelationship__from);
        m_DataRelationship->addEReferences(m_DataRelationship__from);
        m_DataRelationship->addEAllReferences(m_DataRelationship__from);
    }
    {
        m_DataAction__kind = ecoreFactory->createEAttribute();
        m_DataAction__kind->setName("kind");
        m_DataAction->addEStructuralFeatures(m_DataAction__kind);
        m_DataAction->addEAllStructuralFeatures(m_DataAction__kind);
        m_DataAction->addEAttributes(m_DataAction__kind);
        m_DataAction->addEAllAttributes(m_DataAction__kind);
    }
    {
        m_DataAction__implementation = ecoreFactory->createEReference();
        m_DataAction__implementation->setName("implementation");
        m_DataAction->addEStructuralFeatures(m_DataAction__implementation);
        m_DataAction->addEAllStructuralFeatures(m_DataAction__implementation);
        m_DataAction->addEReferences(m_DataAction__implementation);
        m_DataAction->addEAllReferences(m_DataAction__implementation);
    }
    {
        m_DataAction__dataElement = ecoreFactory->createEReference();
        m_DataAction__dataElement->setName("dataElement");
        m_DataAction->addEStructuralFeatures(m_DataAction__dataElement);
        m_DataAction->addEAllStructuralFeatures(m_DataAction__dataElement);
        m_DataAction->addEReferences(m_DataAction__dataElement);
        m_DataAction->addEAllReferences(m_DataAction__dataElement);
    }
    {
        m_ReadsColumnSet__to = ecoreFactory->createEReference();
        m_ReadsColumnSet__to->setName("to");
        m_ReadsColumnSet->addEStructuralFeatures(m_ReadsColumnSet__to);
        m_ReadsColumnSet->addEAllStructuralFeatures(m_ReadsColumnSet__to);
        m_ReadsColumnSet->addEReferences(m_ReadsColumnSet__to);
        m_ReadsColumnSet->addEAllReferences(m_ReadsColumnSet__to);
    }
    {
        m_ReadsColumnSet__from = ecoreFactory->createEReference();
        m_ReadsColumnSet__from->setName("from");
        m_ReadsColumnSet->addEStructuralFeatures(m_ReadsColumnSet__from);
        m_ReadsColumnSet->addEAllStructuralFeatures(m_ReadsColumnSet__from);
        m_ReadsColumnSet->addEReferences(m_ReadsColumnSet__from);
        m_ReadsColumnSet->addEAllReferences(m_ReadsColumnSet__from);
    }
    {
        m_TypedBy__to = ecoreFactory->createEReference();
        m_TypedBy__to->setName("to");
        m_TypedBy->addEStructuralFeatures(m_TypedBy__to);
        m_TypedBy->addEAllStructuralFeatures(m_TypedBy__to);
        m_TypedBy->addEReferences(m_TypedBy__to);
        m_TypedBy->addEAllReferences(m_TypedBy__to);
    }
    {
        m_TypedBy__from = ecoreFactory->createEReference();
        m_TypedBy__from->setName("from");
        m_TypedBy->addEStructuralFeatures(m_TypedBy__from);
        m_TypedBy->addEAllStructuralFeatures(m_TypedBy__from);
        m_TypedBy->addEReferences(m_TypedBy__from);
        m_TypedBy->addEAllReferences(m_TypedBy__from);
    }
    {
        m_ReferenceTo__to = ecoreFactory->createEReference();
        m_ReferenceTo__to->setName("to");
        m_ReferenceTo->addEStructuralFeatures(m_ReferenceTo__to);
        m_ReferenceTo->addEAllStructuralFeatures(m_ReferenceTo__to);
        m_ReferenceTo->addEReferences(m_ReferenceTo__to);
        m_ReferenceTo->addEAllReferences(m_ReferenceTo__to);
    }
    {
        m_ReferenceTo__from = ecoreFactory->createEReference();
        m_ReferenceTo__from->setName("from");
        m_ReferenceTo->addEStructuralFeatures(m_ReferenceTo__from);
        m_ReferenceTo->addEAllStructuralFeatures(m_ReferenceTo__from);
        m_ReferenceTo->addEReferences(m_ReferenceTo__from);
        m_ReferenceTo->addEAllReferences(m_ReferenceTo__from);
    }
    {
        m_RestrictionOf__to = ecoreFactory->createEReference();
        m_RestrictionOf__to->setName("to");
        m_RestrictionOf->addEStructuralFeatures(m_RestrictionOf__to);
        m_RestrictionOf->addEAllStructuralFeatures(m_RestrictionOf__to);
        m_RestrictionOf->addEReferences(m_RestrictionOf__to);
        m_RestrictionOf->addEAllReferences(m_RestrictionOf__to);
    }
    {
        m_RestrictionOf__from = ecoreFactory->createEReference();
        m_RestrictionOf__from->setName("from");
        m_RestrictionOf->addEStructuralFeatures(m_RestrictionOf__from);
        m_RestrictionOf->addEAllStructuralFeatures(m_RestrictionOf__from);
        m_RestrictionOf->addEReferences(m_RestrictionOf__from);
        m_RestrictionOf->addEAllReferences(m_RestrictionOf__from);
    }
    {
        m_ExtensionTo__to = ecoreFactory->createEReference();
        m_ExtensionTo__to->setName("to");
        m_ExtensionTo->addEStructuralFeatures(m_ExtensionTo__to);
        m_ExtensionTo->addEAllStructuralFeatures(m_ExtensionTo__to);
        m_ExtensionTo->addEReferences(m_ExtensionTo__to);
        m_ExtensionTo->addEAllReferences(m_ExtensionTo__to);
    }
    {
        m_ExtensionTo__from = ecoreFactory->createEReference();
        m_ExtensionTo__from->setName("from");
        m_ExtensionTo->addEStructuralFeatures(m_ExtensionTo__from);
        m_ExtensionTo->addEAllStructuralFeatures(m_ExtensionTo__from);
        m_ExtensionTo->addEReferences(m_ExtensionTo__from);
        m_ExtensionTo->addEAllReferences(m_ExtensionTo__from);
    }
    {
        m_DatatypeOf__to = ecoreFactory->createEReference();
        m_DatatypeOf__to->setName("to");
        m_DatatypeOf->addEStructuralFeatures(m_DatatypeOf__to);
        m_DatatypeOf->addEAllStructuralFeatures(m_DatatypeOf__to);
        m_DatatypeOf->addEReferences(m_DatatypeOf__to);
        m_DatatypeOf->addEAllReferences(m_DatatypeOf__to);
    }
    {
        m_DatatypeOf__from = ecoreFactory->createEReference();
        m_DatatypeOf__from->setName("from");
        m_DatatypeOf->addEStructuralFeatures(m_DatatypeOf__from);
        m_DatatypeOf->addEAllStructuralFeatures(m_DatatypeOf__from);
        m_DatatypeOf->addEReferences(m_DatatypeOf__from);
        m_DatatypeOf->addEAllReferences(m_DatatypeOf__from);
    }
    {
        m_HasContent__to = ecoreFactory->createEReference();
        m_HasContent__to->setName("to");
        m_HasContent->addEStructuralFeatures(m_HasContent__to);
        m_HasContent->addEAllStructuralFeatures(m_HasContent__to);
        m_HasContent->addEReferences(m_HasContent__to);
        m_HasContent->addEAllReferences(m_HasContent__to);
    }
    {
        m_HasContent__from = ecoreFactory->createEReference();
        m_HasContent__from->setName("from");
        m_HasContent->addEStructuralFeatures(m_HasContent__from);
        m_HasContent->addEAllStructuralFeatures(m_HasContent__from);
        m_HasContent->addEReferences(m_HasContent__from);
        m_HasContent->addEAllReferences(m_HasContent__from);
    }
    {
        m_WritesColumnSet__to = ecoreFactory->createEReference();
        m_WritesColumnSet__to->setName("to");
        m_WritesColumnSet->addEStructuralFeatures(m_WritesColumnSet__to);
        m_WritesColumnSet->addEAllStructuralFeatures(m_WritesColumnSet__to);
        m_WritesColumnSet->addEReferences(m_WritesColumnSet__to);
        m_WritesColumnSet->addEAllReferences(m_WritesColumnSet__to);
    }
    {
        m_WritesColumnSet__from = ecoreFactory->createEReference();
        m_WritesColumnSet__from->setName("from");
        m_WritesColumnSet->addEStructuralFeatures(m_WritesColumnSet__from);
        m_WritesColumnSet->addEAllStructuralFeatures(m_WritesColumnSet__from);
        m_WritesColumnSet->addEReferences(m_WritesColumnSet__from);
        m_WritesColumnSet->addEAllReferences(m_WritesColumnSet__from);
    }
    {
        m_ProducesDataEvent__to = ecoreFactory->createEReference();
        m_ProducesDataEvent__to->setName("to");
        m_ProducesDataEvent->addEStructuralFeatures(m_ProducesDataEvent__to);
        m_ProducesDataEvent->addEAllStructuralFeatures(m_ProducesDataEvent__to);
        m_ProducesDataEvent->addEReferences(m_ProducesDataEvent__to);
        m_ProducesDataEvent->addEAllReferences(m_ProducesDataEvent__to);
    }
    {
        m_ProducesDataEvent__from = ecoreFactory->createEReference();
        m_ProducesDataEvent__from->setName("from");
        m_ProducesDataEvent->addEStructuralFeatures(m_ProducesDataEvent__from);
        m_ProducesDataEvent->addEAllStructuralFeatures(m_ProducesDataEvent__from);
        m_ProducesDataEvent->addEReferences(m_ProducesDataEvent__from);
        m_ProducesDataEvent->addEAllReferences(m_ProducesDataEvent__from);
    }
    {
        m_ManagesData__to = ecoreFactory->createEReference();
        m_ManagesData__to->setName("to");
        m_ManagesData->addEStructuralFeatures(m_ManagesData__to);
        m_ManagesData->addEAllStructuralFeatures(m_ManagesData__to);
        m_ManagesData->addEReferences(m_ManagesData__to);
        m_ManagesData->addEAllReferences(m_ManagesData__to);
    }
    {
        m_ManagesData__from = ecoreFactory->createEReference();
        m_ManagesData__from->setName("from");
        m_ManagesData->addEStructuralFeatures(m_ManagesData__from);
        m_ManagesData->addEAllStructuralFeatures(m_ManagesData__from);
        m_ManagesData->addEReferences(m_ManagesData__from);
        m_ManagesData->addEAllReferences(m_ManagesData__from);
    }

    m_DataModel->addESuperTypes(m_KDMModel);
    m_DataModel->addAllEAllOperations(m_KDMModel->getEOperations());
    m_DataModel->addAllEAllReferences(m_KDMModel->getEReferences());
    m_DataModel->addAllEAllAttributes(m_KDMModel->getEAttributes());
    m_DataModel->addAllEAllStructuralFeatures(m_KDMModel->getEStructuralFeatures());
    m_AbstractDataElement->addESuperTypes(m_KDMEntity);
    m_AbstractDataElement->addAllEAllOperations(m_KDMEntity->getEOperations());
    m_AbstractDataElement->addAllEAllReferences(m_KDMEntity->getEReferences());
    m_AbstractDataElement->addAllEAllAttributes(m_KDMEntity->getEAttributes());
    m_AbstractDataElement->addAllEAllStructuralFeatures(m_KDMEntity->getEStructuralFeatures());
    m_DataResource->addESuperTypes(m_AbstractDataElement);
    m_DataResource->addAllEAllOperations(m_AbstractDataElement->getEOperations());
    m_DataResource->addAllEAllReferences(m_AbstractDataElement->getEReferences());
    m_DataResource->addAllEAllAttributes(m_AbstractDataElement->getEAttributes());
    m_DataResource->addAllEAllStructuralFeatures(m_AbstractDataElement->getEStructuralFeatures());
    m_IndexElement->addESuperTypes(m_DataResource);
    m_IndexElement->addAllEAllOperations(m_DataResource->getEOperations());
    m_IndexElement->addAllEAllReferences(m_DataResource->getEReferences());
    m_IndexElement->addAllEAllAttributes(m_DataResource->getEAttributes());
    m_IndexElement->addAllEAllStructuralFeatures(m_DataResource->getEStructuralFeatures());
    m_UniqueKey->addESuperTypes(m_IndexElement);
    m_UniqueKey->addAllEAllOperations(m_IndexElement->getEOperations());
    m_UniqueKey->addAllEAllReferences(m_IndexElement->getEReferences());
    m_UniqueKey->addAllEAllAttributes(m_IndexElement->getEAttributes());
    m_UniqueKey->addAllEAllStructuralFeatures(m_IndexElement->getEStructuralFeatures());
    m_Index->addESuperTypes(m_IndexElement);
    m_Index->addAllEAllOperations(m_IndexElement->getEOperations());
    m_Index->addAllEAllReferences(m_IndexElement->getEReferences());
    m_Index->addAllEAllAttributes(m_IndexElement->getEAttributes());
    m_Index->addAllEAllStructuralFeatures(m_IndexElement->getEStructuralFeatures());
    m_AbstractDataRelationship->addESuperTypes(m_KDMRelationship);
    m_AbstractDataRelationship->addAllEAllOperations(m_KDMRelationship->getEOperations());
    m_AbstractDataRelationship->addAllEAllReferences(m_KDMRelationship->getEReferences());
    m_AbstractDataRelationship->addAllEAllAttributes(m_KDMRelationship->getEAttributes());
    m_AbstractDataRelationship->addAllEAllStructuralFeatures(m_KDMRelationship->getEStructuralFeatures());
    m_KeyRelation->addESuperTypes(m_AbstractDataRelationship);
    m_KeyRelation->addAllEAllOperations(m_AbstractDataRelationship->getEOperations());
    m_KeyRelation->addAllEAllReferences(m_AbstractDataRelationship->getEReferences());
    m_KeyRelation->addAllEAllAttributes(m_AbstractDataRelationship->getEAttributes());
    m_KeyRelation->addAllEAllStructuralFeatures(m_AbstractDataRelationship->getEStructuralFeatures());
    m_ReferenceKey->addESuperTypes(m_IndexElement);
    m_ReferenceKey->addAllEAllOperations(m_IndexElement->getEOperations());
    m_ReferenceKey->addAllEAllReferences(m_IndexElement->getEReferences());
    m_ReferenceKey->addAllEAllAttributes(m_IndexElement->getEAttributes());
    m_ReferenceKey->addAllEAllStructuralFeatures(m_IndexElement->getEStructuralFeatures());
    m_DataContainer->addESuperTypes(m_DataResource);
    m_DataContainer->addAllEAllOperations(m_DataResource->getEOperations());
    m_DataContainer->addAllEAllReferences(m_DataResource->getEReferences());
    m_DataContainer->addAllEAllAttributes(m_DataResource->getEAttributes());
    m_DataContainer->addAllEAllStructuralFeatures(m_DataResource->getEStructuralFeatures());
    m_Catalog->addESuperTypes(m_DataContainer);
    m_Catalog->addAllEAllOperations(m_DataContainer->getEOperations());
    m_Catalog->addAllEAllReferences(m_DataContainer->getEReferences());
    m_Catalog->addAllEAllAttributes(m_DataContainer->getEAttributes());
    m_Catalog->addAllEAllStructuralFeatures(m_DataContainer->getEStructuralFeatures());
    m_RelationalSchema->addESuperTypes(m_DataContainer);
    m_RelationalSchema->addAllEAllOperations(m_DataContainer->getEOperations());
    m_RelationalSchema->addAllEAllReferences(m_DataContainer->getEReferences());
    m_RelationalSchema->addAllEAllAttributes(m_DataContainer->getEAttributes());
    m_RelationalSchema->addAllEAllStructuralFeatures(m_DataContainer->getEStructuralFeatures());
    m_ColumnSet->addESuperTypes(m_DataContainer);
    m_ColumnSet->addAllEAllOperations(m_DataContainer->getEOperations());
    m_ColumnSet->addAllEAllReferences(m_DataContainer->getEReferences());
    m_ColumnSet->addAllEAllAttributes(m_DataContainer->getEAttributes());
    m_ColumnSet->addAllEAllStructuralFeatures(m_DataContainer->getEStructuralFeatures());
    m_RelationalTable->addESuperTypes(m_ColumnSet);
    m_RelationalTable->addAllEAllOperations(m_ColumnSet->getEOperations());
    m_RelationalTable->addAllEAllReferences(m_ColumnSet->getEReferences());
    m_RelationalTable->addAllEAllAttributes(m_ColumnSet->getEAttributes());
    m_RelationalTable->addAllEAllStructuralFeatures(m_ColumnSet->getEStructuralFeatures());
    m_RelationalView->addESuperTypes(m_ColumnSet);
    m_RelationalView->addAllEAllOperations(m_ColumnSet->getEOperations());
    m_RelationalView->addAllEAllReferences(m_ColumnSet->getEReferences());
    m_RelationalView->addAllEAllAttributes(m_ColumnSet->getEAttributes());
    m_RelationalView->addAllEAllStructuralFeatures(m_ColumnSet->getEStructuralFeatures());
    m_RecordFile->addESuperTypes(m_ColumnSet);
    m_RecordFile->addAllEAllOperations(m_ColumnSet->getEOperations());
    m_RecordFile->addAllEAllReferences(m_ColumnSet->getEReferences());
    m_RecordFile->addAllEAllAttributes(m_ColumnSet->getEAttributes());
    m_RecordFile->addAllEAllStructuralFeatures(m_ColumnSet->getEStructuralFeatures());
    m_DataEvent->addESuperTypes(m_DataResource);
    m_DataEvent->addAllEAllOperations(m_DataResource->getEOperations());
    m_DataEvent->addAllEAllReferences(m_DataResource->getEReferences());
    m_DataEvent->addAllEAllAttributes(m_DataResource->getEAttributes());
    m_DataEvent->addAllEAllStructuralFeatures(m_DataResource->getEStructuralFeatures());
    m_XMLSchema->addESuperTypes(m_AbstractDataElement);
    m_XMLSchema->addAllEAllOperations(m_AbstractDataElement->getEOperations());
    m_XMLSchema->addAllEAllReferences(m_AbstractDataElement->getEReferences());
    m_XMLSchema->addAllEAllAttributes(m_AbstractDataElement->getEAttributes());
    m_XMLSchema->addAllEAllStructuralFeatures(m_AbstractDataElement->getEStructuralFeatures());
    m_AbstractContentElement->addESuperTypes(m_AbstractDataElement);
    m_AbstractContentElement->addAllEAllOperations(m_AbstractDataElement->getEOperations());
    m_AbstractContentElement->addAllEAllReferences(m_AbstractDataElement->getEReferences());
    m_AbstractContentElement->addAllEAllAttributes(m_AbstractDataElement->getEAttributes());
    m_AbstractContentElement->addAllEAllStructuralFeatures(m_AbstractDataElement->getEStructuralFeatures());
    m_ComplexContentType->addESuperTypes(m_AbstractContentElement);
    m_ComplexContentType->addAllEAllOperations(m_AbstractContentElement->getEOperations());
    m_ComplexContentType->addAllEAllReferences(m_AbstractContentElement->getEReferences());
    m_ComplexContentType->addAllEAllAttributes(m_AbstractContentElement->getEAttributes());
    m_ComplexContentType->addAllEAllStructuralFeatures(m_AbstractContentElement->getEStructuralFeatures());
    m_AllContent->addESuperTypes(m_ComplexContentType);
    m_AllContent->addAllEAllOperations(m_ComplexContentType->getEOperations());
    m_AllContent->addAllEAllReferences(m_ComplexContentType->getEReferences());
    m_AllContent->addAllEAllAttributes(m_ComplexContentType->getEAttributes());
    m_AllContent->addAllEAllStructuralFeatures(m_ComplexContentType->getEStructuralFeatures());
    m_SeqContent->addESuperTypes(m_ComplexContentType);
    m_SeqContent->addAllEAllOperations(m_ComplexContentType->getEOperations());
    m_SeqContent->addAllEAllReferences(m_ComplexContentType->getEReferences());
    m_SeqContent->addAllEAllAttributes(m_ComplexContentType->getEAttributes());
    m_SeqContent->addAllEAllStructuralFeatures(m_ComplexContentType->getEStructuralFeatures());
    m_ChoiceContent->addESuperTypes(m_ComplexContentType);
    m_ChoiceContent->addAllEAllOperations(m_ComplexContentType->getEOperations());
    m_ChoiceContent->addAllEAllReferences(m_ComplexContentType->getEReferences());
    m_ChoiceContent->addAllEAllAttributes(m_ComplexContentType->getEAttributes());
    m_ChoiceContent->addAllEAllStructuralFeatures(m_ComplexContentType->getEStructuralFeatures());
    m_ContentItem->addESuperTypes(m_AbstractContentElement);
    m_ContentItem->addAllEAllOperations(m_AbstractContentElement->getEOperations());
    m_ContentItem->addAllEAllReferences(m_AbstractContentElement->getEReferences());
    m_ContentItem->addAllEAllAttributes(m_AbstractContentElement->getEAttributes());
    m_ContentItem->addAllEAllStructuralFeatures(m_AbstractContentElement->getEStructuralFeatures());
    m_GroupContent->addESuperTypes(m_ContentItem);
    m_GroupContent->addAllEAllOperations(m_ContentItem->getEOperations());
    m_GroupContent->addAllEAllReferences(m_ContentItem->getEReferences());
    m_GroupContent->addAllEAllAttributes(m_ContentItem->getEAttributes());
    m_GroupContent->addAllEAllStructuralFeatures(m_ContentItem->getEStructuralFeatures());
    m_ContentRestriction->addESuperTypes(m_AbstractContentElement);
    m_ContentRestriction->addAllEAllOperations(m_AbstractContentElement->getEOperations());
    m_ContentRestriction->addAllEAllReferences(m_AbstractContentElement->getEReferences());
    m_ContentRestriction->addAllEAllAttributes(m_AbstractContentElement->getEAttributes());
    m_ContentRestriction->addAllEAllStructuralFeatures(m_AbstractContentElement->getEStructuralFeatures());
    m_SimpleContentType->addESuperTypes(m_ComplexContentType);
    m_SimpleContentType->addAllEAllOperations(m_ComplexContentType->getEOperations());
    m_SimpleContentType->addAllEAllReferences(m_ComplexContentType->getEReferences());
    m_SimpleContentType->addAllEAllAttributes(m_ComplexContentType->getEAttributes());
    m_SimpleContentType->addAllEAllStructuralFeatures(m_ComplexContentType->getEStructuralFeatures());
    m_ExtendedDataElement->addESuperTypes(m_AbstractDataElement);
    m_ExtendedDataElement->addAllEAllOperations(m_AbstractDataElement->getEOperations());
    m_ExtendedDataElement->addAllEAllReferences(m_AbstractDataElement->getEReferences());
    m_ExtendedDataElement->addAllEAllAttributes(m_AbstractDataElement->getEAttributes());
    m_ExtendedDataElement->addAllEAllStructuralFeatures(m_AbstractDataElement->getEStructuralFeatures());
    m_DataRelationship->addESuperTypes(m_AbstractDataRelationship);
    m_DataRelationship->addAllEAllOperations(m_AbstractDataRelationship->getEOperations());
    m_DataRelationship->addAllEAllReferences(m_AbstractDataRelationship->getEReferences());
    m_DataRelationship->addAllEAllAttributes(m_AbstractDataRelationship->getEAttributes());
    m_DataRelationship->addAllEAllStructuralFeatures(m_AbstractDataRelationship->getEStructuralFeatures());
    m_MixedContent->addESuperTypes(m_ComplexContentType);
    m_MixedContent->addAllEAllOperations(m_ComplexContentType->getEOperations());
    m_MixedContent->addAllEAllReferences(m_ComplexContentType->getEReferences());
    m_MixedContent->addAllEAllAttributes(m_ComplexContentType->getEAttributes());
    m_MixedContent->addAllEAllStructuralFeatures(m_ComplexContentType->getEStructuralFeatures());
    m_ContentReference->addESuperTypes(m_ContentItem);
    m_ContentReference->addAllEAllOperations(m_ContentItem->getEOperations());
    m_ContentReference->addAllEAllReferences(m_ContentItem->getEReferences());
    m_ContentReference->addAllEAllAttributes(m_ContentItem->getEAttributes());
    m_ContentReference->addAllEAllStructuralFeatures(m_ContentItem->getEStructuralFeatures());
    m_DataAction->addESuperTypes(m_AbstractDataElement);
    m_DataAction->addAllEAllOperations(m_AbstractDataElement->getEOperations());
    m_DataAction->addAllEAllReferences(m_AbstractDataElement->getEReferences());
    m_DataAction->addAllEAllAttributes(m_AbstractDataElement->getEAttributes());
    m_DataAction->addAllEAllStructuralFeatures(m_AbstractDataElement->getEStructuralFeatures());
    m_ReadsColumnSet->addESuperTypes(m_AbstractActionRelationship);
    m_ReadsColumnSet->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
    m_ReadsColumnSet->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
    m_ReadsColumnSet->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
    m_ReadsColumnSet->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
    m_ContentAttribute->addESuperTypes(m_ContentItem);
    m_ContentAttribute->addAllEAllOperations(m_ContentItem->getEOperations());
    m_ContentAttribute->addAllEAllReferences(m_ContentItem->getEReferences());
    m_ContentAttribute->addAllEAllAttributes(m_ContentItem->getEAttributes());
    m_ContentAttribute->addAllEAllStructuralFeatures(m_ContentItem->getEStructuralFeatures());
    m_TypedBy->addESuperTypes(m_AbstractDataRelationship);
    m_TypedBy->addAllEAllOperations(m_AbstractDataRelationship->getEOperations());
    m_TypedBy->addAllEAllReferences(m_AbstractDataRelationship->getEReferences());
    m_TypedBy->addAllEAllAttributes(m_AbstractDataRelationship->getEAttributes());
    m_TypedBy->addAllEAllStructuralFeatures(m_AbstractDataRelationship->getEStructuralFeatures());
    m_ReferenceTo->addESuperTypes(m_AbstractDataRelationship);
    m_ReferenceTo->addAllEAllOperations(m_AbstractDataRelationship->getEOperations());
    m_ReferenceTo->addAllEAllReferences(m_AbstractDataRelationship->getEReferences());
    m_ReferenceTo->addAllEAllAttributes(m_AbstractDataRelationship->getEAttributes());
    m_ReferenceTo->addAllEAllStructuralFeatures(m_AbstractDataRelationship->getEStructuralFeatures());
    m_RestrictionOf->addESuperTypes(m_AbstractDataRelationship);
    m_RestrictionOf->addAllEAllOperations(m_AbstractDataRelationship->getEOperations());
    m_RestrictionOf->addAllEAllReferences(m_AbstractDataRelationship->getEReferences());
    m_RestrictionOf->addAllEAllAttributes(m_AbstractDataRelationship->getEAttributes());
    m_RestrictionOf->addAllEAllStructuralFeatures(m_AbstractDataRelationship->getEStructuralFeatures());
    m_ExtensionTo->addESuperTypes(m_AbstractDataRelationship);
    m_ExtensionTo->addAllEAllOperations(m_AbstractDataRelationship->getEOperations());
    m_ExtensionTo->addAllEAllReferences(m_AbstractDataRelationship->getEReferences());
    m_ExtensionTo->addAllEAllAttributes(m_AbstractDataRelationship->getEAttributes());
    m_ExtensionTo->addAllEAllStructuralFeatures(m_AbstractDataRelationship->getEStructuralFeatures());
    m_DatatypeOf->addESuperTypes(m_AbstractDataRelationship);
    m_DatatypeOf->addAllEAllOperations(m_AbstractDataRelationship->getEOperations());
    m_DatatypeOf->addAllEAllReferences(m_AbstractDataRelationship->getEReferences());
    m_DatatypeOf->addAllEAllAttributes(m_AbstractDataRelationship->getEAttributes());
    m_DatatypeOf->addAllEAllStructuralFeatures(m_AbstractDataRelationship->getEStructuralFeatures());
    m_HasContent->addESuperTypes(m_AbstractActionRelationship);
    m_HasContent->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
    m_HasContent->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
    m_HasContent->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
    m_HasContent->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
    m_WritesColumnSet->addESuperTypes(m_AbstractActionRelationship);
    m_WritesColumnSet->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
    m_WritesColumnSet->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
    m_WritesColumnSet->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
    m_WritesColumnSet->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
    m_ProducesDataEvent->addESuperTypes(m_AbstractActionRelationship);
    m_ProducesDataEvent->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
    m_ProducesDataEvent->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
    m_ProducesDataEvent->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
    m_ProducesDataEvent->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());
    m_DataSegment->addESuperTypes(m_ColumnSet);
    m_DataSegment->addAllEAllOperations(m_ColumnSet->getEOperations());
    m_DataSegment->addAllEAllReferences(m_ColumnSet->getEReferences());
    m_DataSegment->addAllEAllAttributes(m_ColumnSet->getEAttributes());
    m_DataSegment->addAllEAllStructuralFeatures(m_ColumnSet->getEStructuralFeatures());
    m_ContentElement->addESuperTypes(m_ContentItem);
    m_ContentElement->addAllEAllOperations(m_ContentItem->getEOperations());
    m_ContentElement->addAllEAllReferences(m_ContentItem->getEReferences());
    m_ContentElement->addAllEAllAttributes(m_ContentItem->getEAttributes());
    m_ContentElement->addAllEAllStructuralFeatures(m_ContentItem->getEStructuralFeatures());
    m_ManagesData->addESuperTypes(m_AbstractActionRelationship);
    m_ManagesData->addAllEAllOperations(m_AbstractActionRelationship->getEOperations());
    m_ManagesData->addAllEAllReferences(m_AbstractActionRelationship->getEReferences());
    m_ManagesData->addAllEAllAttributes(m_AbstractActionRelationship->getEAttributes());
    m_ManagesData->addAllEAllStructuralFeatures(m_AbstractActionRelationship->getEStructuralFeatures());


    m_DataModel->addFeatureAccesors(m_DataModel__dataElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::DataModel_ptr >(o)->getDataElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractDataElement->addFeatureAccesors(m_AbstractDataElement__source,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::AbstractDataElement_ptr >(o)->getSource()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractDataElement->addFeatureAccesors(m_AbstractDataElement__dataRelation,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::AbstractDataElement_ptr >(o)->getDataRelation()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_AbstractDataElement->addFeatureAccesors(m_AbstractDataElement__abstraction,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::AbstractDataElement_ptr >(o)->getAbstraction()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_IndexElement->addFeatureAccesors(m_IndexElement__implementation,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::IndexElement_ptr >(o)->getImplementation()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_KeyRelation->addFeatureAccesors(m_KeyRelation__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::KeyRelation_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_KeyRelation->addFeatureAccesors(m_KeyRelation__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::KeyRelation_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DataContainer->addFeatureAccesors(m_DataContainer__dataElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::DataContainer_ptr >(o)->getDataElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_RelationalSchema->addFeatureAccesors(m_RelationalSchema__codeElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::RelationalSchema_ptr >(o)->getCodeElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ColumnSet->addFeatureAccesors(m_ColumnSet__itemUnit,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ColumnSet_ptr >(o)->getItemUnit()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DataEvent->addFeatureAccesors(m_DataEvent__kind,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::DataEvent_ptr >(o)->getKind()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_XMLSchema->addFeatureAccesors(m_XMLSchema__contentElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::XMLSchema_ptr >(o)->getContentElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ComplexContentType->addFeatureAccesors(m_ComplexContentType__contentElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ComplexContentType_ptr >(o)->getContentElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ContentItem->addFeatureAccesors(m_ContentItem__type,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ContentItem_ptr >(o)->getType()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ContentItem->addFeatureAccesors(m_ContentItem__contentElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ContentItem_ptr >(o)->getContentElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ContentRestriction->addFeatureAccesors(m_ContentRestriction__kind,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ContentRestriction_ptr >(o)->getKind()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ContentRestriction->addFeatureAccesors(m_ContentRestriction__value,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ContentRestriction_ptr >(o)->getValue()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_SimpleContentType->addFeatureAccesors(m_SimpleContentType__type,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::SimpleContentType_ptr >(o)->getType()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_SimpleContentType->addFeatureAccesors(m_SimpleContentType__kind,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::SimpleContentType_ptr >(o)->getKind()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DataRelationship->addFeatureAccesors(m_DataRelationship__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::DataRelationship_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DataRelationship->addFeatureAccesors(m_DataRelationship__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::DataRelationship_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DataAction->addFeatureAccesors(m_DataAction__kind,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::DataAction_ptr >(o)->getKind()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DataAction->addFeatureAccesors(m_DataAction__implementation,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::DataAction_ptr >(o)->getImplementation()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DataAction->addFeatureAccesors(m_DataAction__dataElement,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::DataAction_ptr >(o)->getDataElement()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ReadsColumnSet->addFeatureAccesors(m_ReadsColumnSet__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ReadsColumnSet_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ReadsColumnSet->addFeatureAccesors(m_ReadsColumnSet__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ReadsColumnSet_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_TypedBy->addFeatureAccesors(m_TypedBy__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::TypedBy_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_TypedBy->addFeatureAccesors(m_TypedBy__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::TypedBy_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ReferenceTo->addFeatureAccesors(m_ReferenceTo__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ReferenceTo_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ReferenceTo->addFeatureAccesors(m_ReferenceTo__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ReferenceTo_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_RestrictionOf->addFeatureAccesors(m_RestrictionOf__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::RestrictionOf_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_RestrictionOf->addFeatureAccesors(m_RestrictionOf__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::RestrictionOf_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ExtensionTo->addFeatureAccesors(m_ExtensionTo__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ExtensionTo_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ExtensionTo->addFeatureAccesors(m_ExtensionTo__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ExtensionTo_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DatatypeOf->addFeatureAccesors(m_DatatypeOf__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::DatatypeOf_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DatatypeOf->addFeatureAccesors(m_DatatypeOf__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::DatatypeOf_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_HasContent->addFeatureAccesors(m_HasContent__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::HasContent_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_HasContent->addFeatureAccesors(m_HasContent__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::HasContent_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_WritesColumnSet->addFeatureAccesors(m_WritesColumnSet__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::WritesColumnSet_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_WritesColumnSet->addFeatureAccesors(m_WritesColumnSet__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::WritesColumnSet_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ProducesDataEvent->addFeatureAccesors(m_ProducesDataEvent__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ProducesDataEvent_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ProducesDataEvent->addFeatureAccesors(m_ProducesDataEvent__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ProducesDataEvent_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ManagesData->addFeatureAccesors(m_ManagesData__to,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ManagesData_ptr >(o)->getTo()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ManagesData->addFeatureAccesors(m_ManagesData__from,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< kdm::data::ManagesData_ptr >(o)->getFrom()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });

}

const DataPackage_ptr DataPackage::_instance()
{
    static DataPackage __instance;
    return &__instance;
}

ecore::EClass_ptr DataPackage::getDataModel() const
{
    return m_DataModel;
}

e4c::tag_t DataPackage::getTag_DataModel() const
{
    return e4c::tag< DataModel >::get();
}

ecore::EClass_ptr DataPackage::getAbstractDataElement() const
{
    return m_AbstractDataElement;
}

e4c::tag_t DataPackage::getTag_AbstractDataElement() const
{
    return e4c::tag< AbstractDataElement >::get();
}

ecore::EClass_ptr DataPackage::getDataResource() const
{
    return m_DataResource;
}

e4c::tag_t DataPackage::getTag_DataResource() const
{
    return e4c::tag< DataResource >::get();
}

ecore::EClass_ptr DataPackage::getIndexElement() const
{
    return m_IndexElement;
}

e4c::tag_t DataPackage::getTag_IndexElement() const
{
    return e4c::tag< IndexElement >::get();
}

ecore::EClass_ptr DataPackage::getUniqueKey() const
{
    return m_UniqueKey;
}

e4c::tag_t DataPackage::getTag_UniqueKey() const
{
    return e4c::tag< UniqueKey >::get();
}

ecore::EClass_ptr DataPackage::getIndex() const
{
    return m_Index;
}

e4c::tag_t DataPackage::getTag_Index() const
{
    return e4c::tag< Index >::get();
}

ecore::EClass_ptr DataPackage::getAbstractDataRelationship() const
{
    return m_AbstractDataRelationship;
}

e4c::tag_t DataPackage::getTag_AbstractDataRelationship() const
{
    return e4c::tag< AbstractDataRelationship >::get();
}

ecore::EClass_ptr DataPackage::getKeyRelation() const
{
    return m_KeyRelation;
}

e4c::tag_t DataPackage::getTag_KeyRelation() const
{
    return e4c::tag< KeyRelation >::get();
}

ecore::EClass_ptr DataPackage::getReferenceKey() const
{
    return m_ReferenceKey;
}

e4c::tag_t DataPackage::getTag_ReferenceKey() const
{
    return e4c::tag< ReferenceKey >::get();
}

ecore::EClass_ptr DataPackage::getDataContainer() const
{
    return m_DataContainer;
}

e4c::tag_t DataPackage::getTag_DataContainer() const
{
    return e4c::tag< DataContainer >::get();
}

ecore::EClass_ptr DataPackage::getCatalog() const
{
    return m_Catalog;
}

e4c::tag_t DataPackage::getTag_Catalog() const
{
    return e4c::tag< Catalog >::get();
}

ecore::EClass_ptr DataPackage::getRelationalSchema() const
{
    return m_RelationalSchema;
}

e4c::tag_t DataPackage::getTag_RelationalSchema() const
{
    return e4c::tag< RelationalSchema >::get();
}

ecore::EClass_ptr DataPackage::getColumnSet() const
{
    return m_ColumnSet;
}

e4c::tag_t DataPackage::getTag_ColumnSet() const
{
    return e4c::tag< ColumnSet >::get();
}

ecore::EClass_ptr DataPackage::getRelationalTable() const
{
    return m_RelationalTable;
}

e4c::tag_t DataPackage::getTag_RelationalTable() const
{
    return e4c::tag< RelationalTable >::get();
}

ecore::EClass_ptr DataPackage::getRelationalView() const
{
    return m_RelationalView;
}

e4c::tag_t DataPackage::getTag_RelationalView() const
{
    return e4c::tag< RelationalView >::get();
}

ecore::EClass_ptr DataPackage::getRecordFile() const
{
    return m_RecordFile;
}

e4c::tag_t DataPackage::getTag_RecordFile() const
{
    return e4c::tag< RecordFile >::get();
}

ecore::EClass_ptr DataPackage::getDataEvent() const
{
    return m_DataEvent;
}

e4c::tag_t DataPackage::getTag_DataEvent() const
{
    return e4c::tag< DataEvent >::get();
}

ecore::EClass_ptr DataPackage::getXMLSchema() const
{
    return m_XMLSchema;
}

e4c::tag_t DataPackage::getTag_XMLSchema() const
{
    return e4c::tag< XMLSchema >::get();
}

ecore::EClass_ptr DataPackage::getAbstractContentElement() const
{
    return m_AbstractContentElement;
}

e4c::tag_t DataPackage::getTag_AbstractContentElement() const
{
    return e4c::tag< AbstractContentElement >::get();
}

ecore::EClass_ptr DataPackage::getComplexContentType() const
{
    return m_ComplexContentType;
}

e4c::tag_t DataPackage::getTag_ComplexContentType() const
{
    return e4c::tag< ComplexContentType >::get();
}

ecore::EClass_ptr DataPackage::getAllContent() const
{
    return m_AllContent;
}

e4c::tag_t DataPackage::getTag_AllContent() const
{
    return e4c::tag< AllContent >::get();
}

ecore::EClass_ptr DataPackage::getSeqContent() const
{
    return m_SeqContent;
}

e4c::tag_t DataPackage::getTag_SeqContent() const
{
    return e4c::tag< SeqContent >::get();
}

ecore::EClass_ptr DataPackage::getChoiceContent() const
{
    return m_ChoiceContent;
}

e4c::tag_t DataPackage::getTag_ChoiceContent() const
{
    return e4c::tag< ChoiceContent >::get();
}

ecore::EClass_ptr DataPackage::getContentItem() const
{
    return m_ContentItem;
}

e4c::tag_t DataPackage::getTag_ContentItem() const
{
    return e4c::tag< ContentItem >::get();
}

ecore::EClass_ptr DataPackage::getGroupContent() const
{
    return m_GroupContent;
}

e4c::tag_t DataPackage::getTag_GroupContent() const
{
    return e4c::tag< GroupContent >::get();
}

ecore::EClass_ptr DataPackage::getContentRestriction() const
{
    return m_ContentRestriction;
}

e4c::tag_t DataPackage::getTag_ContentRestriction() const
{
    return e4c::tag< ContentRestriction >::get();
}

ecore::EClass_ptr DataPackage::getSimpleContentType() const
{
    return m_SimpleContentType;
}

e4c::tag_t DataPackage::getTag_SimpleContentType() const
{
    return e4c::tag< SimpleContentType >::get();
}

ecore::EClass_ptr DataPackage::getExtendedDataElement() const
{
    return m_ExtendedDataElement;
}

e4c::tag_t DataPackage::getTag_ExtendedDataElement() const
{
    return e4c::tag< ExtendedDataElement >::get();
}

ecore::EClass_ptr DataPackage::getDataRelationship() const
{
    return m_DataRelationship;
}

e4c::tag_t DataPackage::getTag_DataRelationship() const
{
    return e4c::tag< DataRelationship >::get();
}

ecore::EClass_ptr DataPackage::getMixedContent() const
{
    return m_MixedContent;
}

e4c::tag_t DataPackage::getTag_MixedContent() const
{
    return e4c::tag< MixedContent >::get();
}

ecore::EClass_ptr DataPackage::getContentReference() const
{
    return m_ContentReference;
}

e4c::tag_t DataPackage::getTag_ContentReference() const
{
    return e4c::tag< ContentReference >::get();
}

ecore::EClass_ptr DataPackage::getDataAction() const
{
    return m_DataAction;
}

e4c::tag_t DataPackage::getTag_DataAction() const
{
    return e4c::tag< DataAction >::get();
}

ecore::EClass_ptr DataPackage::getReadsColumnSet() const
{
    return m_ReadsColumnSet;
}

e4c::tag_t DataPackage::getTag_ReadsColumnSet() const
{
    return e4c::tag< ReadsColumnSet >::get();
}

ecore::EClass_ptr DataPackage::getContentAttribute() const
{
    return m_ContentAttribute;
}

e4c::tag_t DataPackage::getTag_ContentAttribute() const
{
    return e4c::tag< ContentAttribute >::get();
}

ecore::EClass_ptr DataPackage::getTypedBy() const
{
    return m_TypedBy;
}

e4c::tag_t DataPackage::getTag_TypedBy() const
{
    return e4c::tag< TypedBy >::get();
}

ecore::EClass_ptr DataPackage::getReferenceTo() const
{
    return m_ReferenceTo;
}

e4c::tag_t DataPackage::getTag_ReferenceTo() const
{
    return e4c::tag< ReferenceTo >::get();
}

ecore::EClass_ptr DataPackage::getRestrictionOf() const
{
    return m_RestrictionOf;
}

e4c::tag_t DataPackage::getTag_RestrictionOf() const
{
    return e4c::tag< RestrictionOf >::get();
}

ecore::EClass_ptr DataPackage::getExtensionTo() const
{
    return m_ExtensionTo;
}

e4c::tag_t DataPackage::getTag_ExtensionTo() const
{
    return e4c::tag< ExtensionTo >::get();
}

ecore::EClass_ptr DataPackage::getDatatypeOf() const
{
    return m_DatatypeOf;
}

e4c::tag_t DataPackage::getTag_DatatypeOf() const
{
    return e4c::tag< DatatypeOf >::get();
}

ecore::EClass_ptr DataPackage::getHasContent() const
{
    return m_HasContent;
}

e4c::tag_t DataPackage::getTag_HasContent() const
{
    return e4c::tag< HasContent >::get();
}

ecore::EClass_ptr DataPackage::getWritesColumnSet() const
{
    return m_WritesColumnSet;
}

e4c::tag_t DataPackage::getTag_WritesColumnSet() const
{
    return e4c::tag< WritesColumnSet >::get();
}

ecore::EClass_ptr DataPackage::getProducesDataEvent() const
{
    return m_ProducesDataEvent;
}

e4c::tag_t DataPackage::getTag_ProducesDataEvent() const
{
    return e4c::tag< ProducesDataEvent >::get();
}

ecore::EClass_ptr DataPackage::getDataSegment() const
{
    return m_DataSegment;
}

e4c::tag_t DataPackage::getTag_DataSegment() const
{
    return e4c::tag< DataSegment >::get();
}

ecore::EClass_ptr DataPackage::getContentElement() const
{
    return m_ContentElement;
}

e4c::tag_t DataPackage::getTag_ContentElement() const
{
    return e4c::tag< ContentElement >::get();
}

ecore::EClass_ptr DataPackage::getManagesData() const
{
    return m_ManagesData;
}

e4c::tag_t DataPackage::getTag_ManagesData() const
{
    return e4c::tag< ManagesData >::get();
}

e4c::tag_t DataPackage::getTag_DataModel__dataElement() const
{
    return e4c::tag< DataModel__dataElement_tag >::get();
}

ecore::EReference_ptr DataPackage::getDataModel__dataElement() const
{
    return m_DataModel__dataElement;
}

e4c::tag_t DataPackage::getTag_AbstractDataElement__source() const
{
    return e4c::tag< AbstractDataElement__source_tag >::get();
}

ecore::EReference_ptr DataPackage::getAbstractDataElement__source() const
{
    return m_AbstractDataElement__source;
}

e4c::tag_t DataPackage::getTag_AbstractDataElement__dataRelation() const
{
    return e4c::tag< AbstractDataElement__dataRelation_tag >::get();
}

ecore::EReference_ptr DataPackage::getAbstractDataElement__dataRelation() const
{
    return m_AbstractDataElement__dataRelation;
}

e4c::tag_t DataPackage::getTag_AbstractDataElement__abstraction() const
{
    return e4c::tag< AbstractDataElement__abstraction_tag >::get();
}

ecore::EReference_ptr DataPackage::getAbstractDataElement__abstraction() const
{
    return m_AbstractDataElement__abstraction;
}

e4c::tag_t DataPackage::getTag_IndexElement__implementation() const
{
    return e4c::tag< IndexElement__implementation_tag >::get();
}

ecore::EReference_ptr DataPackage::getIndexElement__implementation() const
{
    return m_IndexElement__implementation;
}

e4c::tag_t DataPackage::getTag_KeyRelation__to() const
{
    return e4c::tag< KeyRelation__to_tag >::get();
}

ecore::EReference_ptr DataPackage::getKeyRelation__to() const
{
    return m_KeyRelation__to;
}

e4c::tag_t DataPackage::getTag_KeyRelation__from() const
{
    return e4c::tag< KeyRelation__from_tag >::get();
}

ecore::EReference_ptr DataPackage::getKeyRelation__from() const
{
    return m_KeyRelation__from;
}

e4c::tag_t DataPackage::getTag_DataContainer__dataElement() const
{
    return e4c::tag< DataContainer__dataElement_tag >::get();
}

ecore::EReference_ptr DataPackage::getDataContainer__dataElement() const
{
    return m_DataContainer__dataElement;
}

e4c::tag_t DataPackage::getTag_RelationalSchema__codeElement() const
{
    return e4c::tag< RelationalSchema__codeElement_tag >::get();
}

ecore::EReference_ptr DataPackage::getRelationalSchema__codeElement() const
{
    return m_RelationalSchema__codeElement;
}

e4c::tag_t DataPackage::getTag_ColumnSet__itemUnit() const
{
    return e4c::tag< ColumnSet__itemUnit_tag >::get();
}

ecore::EReference_ptr DataPackage::getColumnSet__itemUnit() const
{
    return m_ColumnSet__itemUnit;
}

e4c::tag_t DataPackage::getTag_DataEvent__kind() const
{
    return e4c::tag< DataEvent__kind_tag >::get();
}

ecore::EAttribute_ptr DataPackage::getDataEvent__kind() const
{
    return m_DataEvent__kind;
}

e4c::tag_t DataPackage::getTag_XMLSchema__contentElement() const
{
    return e4c::tag< XMLSchema__contentElement_tag >::get();
}

ecore::EReference_ptr DataPackage::getXMLSchema__contentElement() const
{
    return m_XMLSchema__contentElement;
}

e4c::tag_t DataPackage::getTag_ComplexContentType__contentElement() const
{
    return e4c::tag< ComplexContentType__contentElement_tag >::get();
}

ecore::EReference_ptr DataPackage::getComplexContentType__contentElement() const
{
    return m_ComplexContentType__contentElement;
}

e4c::tag_t DataPackage::getTag_ContentItem__type() const
{
    return e4c::tag< ContentItem__type_tag >::get();
}

ecore::EReference_ptr DataPackage::getContentItem__type() const
{
    return m_ContentItem__type;
}

e4c::tag_t DataPackage::getTag_ContentItem__contentElement() const
{
    return e4c::tag< ContentItem__contentElement_tag >::get();
}

ecore::EReference_ptr DataPackage::getContentItem__contentElement() const
{
    return m_ContentItem__contentElement;
}

e4c::tag_t DataPackage::getTag_ContentRestriction__kind() const
{
    return e4c::tag< ContentRestriction__kind_tag >::get();
}

ecore::EAttribute_ptr DataPackage::getContentRestriction__kind() const
{
    return m_ContentRestriction__kind;
}

e4c::tag_t DataPackage::getTag_ContentRestriction__value() const
{
    return e4c::tag< ContentRestriction__value_tag >::get();
}

ecore::EAttribute_ptr DataPackage::getContentRestriction__value() const
{
    return m_ContentRestriction__value;
}

e4c::tag_t DataPackage::getTag_SimpleContentType__type() const
{
    return e4c::tag< SimpleContentType__type_tag >::get();
}

ecore::EReference_ptr DataPackage::getSimpleContentType__type() const
{
    return m_SimpleContentType__type;
}

e4c::tag_t DataPackage::getTag_SimpleContentType__kind() const
{
    return e4c::tag< SimpleContentType__kind_tag >::get();
}

ecore::EAttribute_ptr DataPackage::getSimpleContentType__kind() const
{
    return m_SimpleContentType__kind;
}

e4c::tag_t DataPackage::getTag_DataRelationship__to() const
{
    return e4c::tag< DataRelationship__to_tag >::get();
}

ecore::EReference_ptr DataPackage::getDataRelationship__to() const
{
    return m_DataRelationship__to;
}

e4c::tag_t DataPackage::getTag_DataRelationship__from() const
{
    return e4c::tag< DataRelationship__from_tag >::get();
}

ecore::EReference_ptr DataPackage::getDataRelationship__from() const
{
    return m_DataRelationship__from;
}

e4c::tag_t DataPackage::getTag_DataAction__kind() const
{
    return e4c::tag< DataAction__kind_tag >::get();
}

ecore::EAttribute_ptr DataPackage::getDataAction__kind() const
{
    return m_DataAction__kind;
}

e4c::tag_t DataPackage::getTag_DataAction__implementation() const
{
    return e4c::tag< DataAction__implementation_tag >::get();
}

ecore::EReference_ptr DataPackage::getDataAction__implementation() const
{
    return m_DataAction__implementation;
}

e4c::tag_t DataPackage::getTag_DataAction__dataElement() const
{
    return e4c::tag< DataAction__dataElement_tag >::get();
}

ecore::EReference_ptr DataPackage::getDataAction__dataElement() const
{
    return m_DataAction__dataElement;
}

e4c::tag_t DataPackage::getTag_ReadsColumnSet__to() const
{
    return e4c::tag< ReadsColumnSet__to_tag >::get();
}

ecore::EReference_ptr DataPackage::getReadsColumnSet__to() const
{
    return m_ReadsColumnSet__to;
}

e4c::tag_t DataPackage::getTag_ReadsColumnSet__from() const
{
    return e4c::tag< ReadsColumnSet__from_tag >::get();
}

ecore::EReference_ptr DataPackage::getReadsColumnSet__from() const
{
    return m_ReadsColumnSet__from;
}

e4c::tag_t DataPackage::getTag_TypedBy__to() const
{
    return e4c::tag< TypedBy__to_tag >::get();
}

ecore::EReference_ptr DataPackage::getTypedBy__to() const
{
    return m_TypedBy__to;
}

e4c::tag_t DataPackage::getTag_TypedBy__from() const
{
    return e4c::tag< TypedBy__from_tag >::get();
}

ecore::EReference_ptr DataPackage::getTypedBy__from() const
{
    return m_TypedBy__from;
}

e4c::tag_t DataPackage::getTag_ReferenceTo__to() const
{
    return e4c::tag< ReferenceTo__to_tag >::get();
}

ecore::EReference_ptr DataPackage::getReferenceTo__to() const
{
    return m_ReferenceTo__to;
}

e4c::tag_t DataPackage::getTag_ReferenceTo__from() const
{
    return e4c::tag< ReferenceTo__from_tag >::get();
}

ecore::EReference_ptr DataPackage::getReferenceTo__from() const
{
    return m_ReferenceTo__from;
}

e4c::tag_t DataPackage::getTag_RestrictionOf__to() const
{
    return e4c::tag< RestrictionOf__to_tag >::get();
}

ecore::EReference_ptr DataPackage::getRestrictionOf__to() const
{
    return m_RestrictionOf__to;
}

e4c::tag_t DataPackage::getTag_RestrictionOf__from() const
{
    return e4c::tag< RestrictionOf__from_tag >::get();
}

ecore::EReference_ptr DataPackage::getRestrictionOf__from() const
{
    return m_RestrictionOf__from;
}

e4c::tag_t DataPackage::getTag_ExtensionTo__to() const
{
    return e4c::tag< ExtensionTo__to_tag >::get();
}

ecore::EReference_ptr DataPackage::getExtensionTo__to() const
{
    return m_ExtensionTo__to;
}

e4c::tag_t DataPackage::getTag_ExtensionTo__from() const
{
    return e4c::tag< ExtensionTo__from_tag >::get();
}

ecore::EReference_ptr DataPackage::getExtensionTo__from() const
{
    return m_ExtensionTo__from;
}

e4c::tag_t DataPackage::getTag_DatatypeOf__to() const
{
    return e4c::tag< DatatypeOf__to_tag >::get();
}

ecore::EReference_ptr DataPackage::getDatatypeOf__to() const
{
    return m_DatatypeOf__to;
}

e4c::tag_t DataPackage::getTag_DatatypeOf__from() const
{
    return e4c::tag< DatatypeOf__from_tag >::get();
}

ecore::EReference_ptr DataPackage::getDatatypeOf__from() const
{
    return m_DatatypeOf__from;
}

e4c::tag_t DataPackage::getTag_HasContent__to() const
{
    return e4c::tag< HasContent__to_tag >::get();
}

ecore::EReference_ptr DataPackage::getHasContent__to() const
{
    return m_HasContent__to;
}

e4c::tag_t DataPackage::getTag_HasContent__from() const
{
    return e4c::tag< HasContent__from_tag >::get();
}

ecore::EReference_ptr DataPackage::getHasContent__from() const
{
    return m_HasContent__from;
}

e4c::tag_t DataPackage::getTag_WritesColumnSet__to() const
{
    return e4c::tag< WritesColumnSet__to_tag >::get();
}

ecore::EReference_ptr DataPackage::getWritesColumnSet__to() const
{
    return m_WritesColumnSet__to;
}

e4c::tag_t DataPackage::getTag_WritesColumnSet__from() const
{
    return e4c::tag< WritesColumnSet__from_tag >::get();
}

ecore::EReference_ptr DataPackage::getWritesColumnSet__from() const
{
    return m_WritesColumnSet__from;
}

e4c::tag_t DataPackage::getTag_ProducesDataEvent__to() const
{
    return e4c::tag< ProducesDataEvent__to_tag >::get();
}

ecore::EReference_ptr DataPackage::getProducesDataEvent__to() const
{
    return m_ProducesDataEvent__to;
}

e4c::tag_t DataPackage::getTag_ProducesDataEvent__from() const
{
    return e4c::tag< ProducesDataEvent__from_tag >::get();
}

ecore::EReference_ptr DataPackage::getProducesDataEvent__from() const
{
    return m_ProducesDataEvent__from;
}

e4c::tag_t DataPackage::getTag_ManagesData__to() const
{
    return e4c::tag< ManagesData__to_tag >::get();
}

ecore::EReference_ptr DataPackage::getManagesData__to() const
{
    return m_ManagesData__to;
}

e4c::tag_t DataPackage::getTag_ManagesData__from() const
{
    return e4c::tag< ManagesData__from_tag >::get();
}

ecore::EReference_ptr DataPackage::getManagesData__from() const
{
    return m_ManagesData__from;
}


extern "C" ::ecore::EPackage_ptr e4c_kdm_data()
{
    return ::kdm::data::DataPackage::_instance();
}
