


include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(e4c-kdm-data SHARED
	kdm/data/DataPackage.cpp
	kdm/data/DataFactory.cpp
	kdm/data/DataModel.cpp
	kdm/data/AbstractDataElement.cpp
	kdm/data/DataResource.cpp
	kdm/data/IndexElement.cpp
	kdm/data/UniqueKey.cpp
	kdm/data/Index.cpp
	kdm/data/AbstractDataRelationship.cpp
	kdm/data/KeyRelation.cpp
	kdm/data/ReferenceKey.cpp
	kdm/data/DataContainer.cpp
	kdm/data/Catalog.cpp
	kdm/data/RelationalSchema.cpp
	kdm/data/ColumnSet.cpp
	kdm/data/RelationalTable.cpp
	kdm/data/RelationalView.cpp
	kdm/data/RecordFile.cpp
	kdm/data/DataEvent.cpp
	kdm/data/XMLSchema.cpp
	kdm/data/AbstractContentElement.cpp
	kdm/data/ComplexContentType.cpp
	kdm/data/AllContent.cpp
	kdm/data/SeqContent.cpp
	kdm/data/ChoiceContent.cpp
	kdm/data/ContentItem.cpp
	kdm/data/GroupContent.cpp
	kdm/data/ContentRestriction.cpp
	kdm/data/SimpleContentType.cpp
	kdm/data/ExtendedDataElement.cpp
	kdm/data/DataRelationship.cpp
	kdm/data/MixedContent.cpp
	kdm/data/ContentReference.cpp
	kdm/data/DataAction.cpp
	kdm/data/ReadsColumnSet.cpp
	kdm/data/ContentAttribute.cpp
	kdm/data/TypedBy.cpp
	kdm/data/ReferenceTo.cpp
	kdm/data/RestrictionOf.cpp
	kdm/data/ExtensionTo.cpp
	kdm/data/DatatypeOf.cpp
	kdm/data/HasContent.cpp
	kdm/data/WritesColumnSet.cpp
	kdm/data/ProducesDataEvent.cpp
	kdm/data/DataSegment.cpp
	kdm/data/ContentElement.cpp
	kdm/data/ManagesData.cpp
	)
	
target_link_libraries(e4c-kdm-data e4c)

