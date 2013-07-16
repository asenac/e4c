#ifndef EMF_CPP_CST_PACKAGE_HPP
#define EMF_CPP_CST_PACKAGE_HPP

#include <emf4cpp2/tag.hpp>
#include <ecore/EPackage.hpp>
#include <CST/fwd.hpp>

namespace CST
{


class CSTPackage : public ::ecore::EPackage
{
public:
    static CSTPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_Tree();
 	e4c::tag_t getTag_Element();
 	e4c::tag_t getTag_Node();
 	e4c::tag_t getTag_Leaf();
 
 	// Structural features
 	e4c::tag_t getTag_Element__kind();
 	e4c::tag_t getTag_Node__children();
 	e4c::tag_t getTag_Leaf__value();
 	e4c::tag_t getTag_Leaf__pos();
 	e4c::tag_t getTag_Leaf__line();

protected:
    CSTPackage();
};

} // CST


#endif // EMF_CPP_CST_PACKAGE_HPP
