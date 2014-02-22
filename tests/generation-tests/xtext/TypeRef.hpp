
#ifndef EMF_CPP_XTEXT_TYPEREF__HPP
#define EMF_CPP_XTEXT_TYPEREF__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <ecore/EObject.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class TypeRef : ::ecore::EObject
{
public:

    typedef TypeRef_ptr ptr_type;

    TypeRef();
    virtual ~TypeRef();

    typedef xtext::AbstractMetamodelDeclaration_ptr metamodel_t;
    typedef ecore::EClassifier_ptr classifier_t;

    metamodel_t getMetamodel() const;
    void setMetamodel(metamodel_t metamodel_);
    classifier_t getClassifier() const;
    void setClassifier(classifier_t classifier_);


    /*PROTECTED REGION ID(xtext::TypeRef public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;

    xtext::AbstractMetamodelDeclaration_ptr m_metamodel;
    ecore::EClassifier_ptr m_classifier;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::TypeRef protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_TYPEREF__HPP
