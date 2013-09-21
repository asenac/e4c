
#ifndef EMF_CPP_XTEXT_TYPEREF__HPP
#define EMF_CPP_XTEXT_TYPEREF__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::TypeRef
class TypeRef
{
public:

	typedef TypeRef_ptr ptr_type;
	
	TypeRef();
	virtual ~TypeRef();

	typedef xtext::AbstractMetamodelDeclaration_ptr metamodel_t;
	typedef ecore::EClassifier_ptr classifier_t;

	
	metamodel_t getMetamodel() const;
	classifier_t getClassifier() const;


	xtext::AbstractMetamodelDeclaration_ptr m_metamodel;
	ecore::EClassifier_ptr m_classifier;

		
protected:

};

} // xtext


#endif // EMF_CPP_XTEXT_TYPEREF__HPP
