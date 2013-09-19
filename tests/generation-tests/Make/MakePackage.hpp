#ifndef EMF_CPP_MAKE_PACKAGE_HPP
#define EMF_CPP_MAKE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <Make/fwd.hpp>

namespace Make
{


class MakePackage : public ::ecore::EPackage
{
public:
    static const MakePackage_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_Makefile() const;
 	e4c::tag_t getTag_Element() const;
 	e4c::tag_t getTag_Rule() const;
 	e4c::tag_t getTag_Macro() const;
 	e4c::tag_t getTag_ShellLine() const;
 	e4c::tag_t getTag_Comment() const;
 	e4c::tag_t getTag_Dependency() const;
 	e4c::tag_t getTag_RuleDep() const;
 	e4c::tag_t getTag_FileDep() const;
 
 	// Structural features
 	e4c::tag_t getTag_Makefile__name() const;
 	e4c::tag_t getTag_Makefile__comment() const;
 	e4c::tag_t getTag_Makefile__elements() const;
 	e4c::tag_t getTag_Element__name() const;
 	e4c::tag_t getTag_Rule__dependencies() const;
 	e4c::tag_t getTag_Rule__shellLines() const;
 	e4c::tag_t getTag_Macro__value() const;
 	e4c::tag_t getTag_ShellLine__command() const;
 	e4c::tag_t getTag_ShellLine__display() const;
 	e4c::tag_t getTag_ShellLine__ruleShellLine() const;
 	e4c::tag_t getTag_Comment__text() const;
 	e4c::tag_t getTag_RuleDep__ruledep() const;
 	e4c::tag_t getTag_FileDep__name() const;

protected:
    MakePackage();
};

} // Make


#endif // EMF_CPP_MAKE_PACKAGE_HPP
