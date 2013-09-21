
#include "TypeRef.hpp"
#include <xtext/AbstractMetamodelDeclaration.hpp>
#include <ecore/EClassifier.hpp>

using namespace xtext;

TypeRef::TypeRef() : 
	m_metamodel(),
    m_classifier()
{
}

TypeRef::~TypeRef()
{
}

TypeRef::metamodel_t TypeRef::getMetamodel() const
{
	return e4c::returned(m_metamodel);
}

TypeRef::classifier_t TypeRef::getClassifier() const
{
	return e4c::returned(m_classifier);
}



