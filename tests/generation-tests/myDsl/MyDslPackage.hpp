#ifndef EMF_CPP_MYDSL_PACKAGE_HPP
#define EMF_CPP_MYDSL_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <myDsl/fwd.hpp>

namespace myDsl
{


class MyDslPackage : public ::ecore::EPackage
{
public:
    static const MyDslPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_Model() const;
 	e4c::tag_t getTag_Import() const;
 	e4c::tag_t getTag_Type() const;
 	e4c::tag_t getTag_SimpleType() const;
 	e4c::tag_t getTag_Entity() const;
 	e4c::tag_t getTag_Property() const;
 
 	// Structural features
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
};

} // myDsl


#endif // EMF_CPP_MYDSL_PACKAGE_HPP
