#ifndef EMF_CPP_MYDSL_PACKAGE_HPP
#define EMF_CPP_MYDSL_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <myDsl/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace myDsl
{


class MyDslPackage : public ::ecore::EPackage
{
public:
    static const MyDslPackage_ptr _instance();

 	::ecore::EClass_ptr getModel() const;
 	::ecore::EClass_ptr getImport() const;
 	::ecore::EClass_ptr getType() const;
 	::ecore::EClass_ptr getSimpleType() const;
 	::ecore::EClass_ptr getEntity() const;
 	::ecore::EClass_ptr getProperty() const;
 	
 	::ecore::EReference_ptr getModel__imports() const;
 	::ecore::EReference_ptr getModel__elements() const;
 	::ecore::EAttribute_ptr getImport__importURI() const;
 	::ecore::EAttribute_ptr getType__name() const;
 	::ecore::EReference_ptr getEntity__extends() const;
 	::ecore::EReference_ptr getEntity__properties() const;
 	::ecore::EAttribute_ptr getProperty__name() const;
 	::ecore::EReference_ptr getProperty__type() const;
 	::ecore::EAttribute_ptr getProperty__many() const;

 	e4c::tag_t getTag_Model() const;
 	e4c::tag_t getTag_Import() const;
 	e4c::tag_t getTag_Type() const;
 	e4c::tag_t getTag_SimpleType() const;
 	e4c::tag_t getTag_Entity() const;
 	e4c::tag_t getTag_Property() const;
 
 	e4c::tag_t getTag_Model__imports() const;
 	e4c::tag_t getTag_Model__elements() const;
 	e4c::tag_t getTag_Import__importURI() const;
 	e4c::tag_t getTag_Type__name() const;
 	e4c::tag_t getTag_Entity__extends() const;
 	e4c::tag_t getTag_Entity__properties() const;
 	e4c::tag_t getTag_Property__name() const;
 	e4c::tag_t getTag_Property__type() const;
 	e4c::tag_t getTag_Property__many() const;

protected:
    MyDslPackage();
    
 	::ecore::EClass_ptr m_Model;
 	::ecore::EClass_ptr m_Import;
 	::ecore::EClass_ptr m_Type;
 	::ecore::EClass_ptr m_SimpleType;
 	::ecore::EClass_ptr m_Entity;
 	::ecore::EClass_ptr m_Property;
 	::ecore::EReference_ptr m_Model__imports;
 	::ecore::EReference_ptr m_Model__elements;
 	::ecore::EAttribute_ptr m_Import__importURI;
 	::ecore::EAttribute_ptr m_Type__name;
 	::ecore::EReference_ptr m_Entity__extends;
 	::ecore::EReference_ptr m_Entity__properties;
 	::ecore::EAttribute_ptr m_Property__name;
 	::ecore::EReference_ptr m_Property__type;
 	::ecore::EAttribute_ptr m_Property__many;
};

} // myDsl


#endif // EMF_CPP_MYDSL_PACKAGE_HPP
