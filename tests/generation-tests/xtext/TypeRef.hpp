
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

	
	// TODO
	// TODO

	
protected:

	metamodel_t m_metamodel;
	classifier_t m_classifier;

};

} // xtext


#endif // EMF_CPP_XTEXT_TYPEREF__HPP
