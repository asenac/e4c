#ifndef EMF_CPP_CST_PACKAGE_HPP
#define EMF_CPP_CST_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <CST/fwd.hpp>

namespace CST
{


class CSTPackage : public ::ecore::EPackage
{
public:
    static const CSTPackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_Tree() const;
 	e4c::tag_t getTag_Element() const;
 	e4c::tag_t getTag_Node() const;
 	e4c::tag_t getTag_Leaf() const;
 
 	// Structural features
 	e4c::tag_t getTag_Element__kind() const;
 	e4c::tag_t getTag_Node__children() const;
 	e4c::tag_t getTag_Leaf__value() const;
 	e4c::tag_t getTag_Leaf__pos() const;
 	e4c::tag_t getTag_Leaf__line() const;

protected:
    CSTPackage();
};

} // CST


#endif // EMF_CPP_CST_PACKAGE_HPP
