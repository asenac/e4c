#ifndef EMF_CPP_MAKE_PACKAGE_HPP
#define EMF_CPP_MAKE_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <Make/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace Make
{


class MakePackage : public ::ecore::EPackage
{
public:
    static const MakePackage_ptr _instance();

     ::ecore::EClass_ptr getMakefile() const;
     ::ecore::EClass_ptr getElement() const;
     ::ecore::EClass_ptr getRule() const;
     ::ecore::EClass_ptr getMacro() const;
     ::ecore::EClass_ptr getShellLine() const;
     ::ecore::EClass_ptr getComment() const;
     ::ecore::EClass_ptr getDependency() const;
     ::ecore::EClass_ptr getRuleDep() const;
     ::ecore::EClass_ptr getFileDep() const;

     ::ecore::EAttribute_ptr getMakefile__name() const;
     ::ecore::EReference_ptr getMakefile__comment() const;
     ::ecore::EReference_ptr getMakefile__elements() const;
     ::ecore::EAttribute_ptr getElement__name() const;
     ::ecore::EReference_ptr getRule__dependencies() const;
     ::ecore::EReference_ptr getRule__shellLines() const;
     ::ecore::EAttribute_ptr getMacro__value() const;
     ::ecore::EAttribute_ptr getShellLine__command() const;
     ::ecore::EAttribute_ptr getShellLine__display() const;
     ::ecore::EReference_ptr getShellLine__ruleShellLine() const;
     ::ecore::EAttribute_ptr getComment__text() const;
     ::ecore::EReference_ptr getRuleDep__ruledep() const;
     ::ecore::EAttribute_ptr getFileDep__name() const;

     e4c::tag_t getTag_Makefile() const;
     e4c::tag_t getTag_Element() const;
     e4c::tag_t getTag_Rule() const;
     e4c::tag_t getTag_Macro() const;
     e4c::tag_t getTag_ShellLine() const;
     e4c::tag_t getTag_Comment() const;
     e4c::tag_t getTag_Dependency() const;
     e4c::tag_t getTag_RuleDep() const;
     e4c::tag_t getTag_FileDep() const;

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

     ::ecore::EClass_ptr m_Makefile;
     ::ecore::EClass_ptr m_Element;
     ::ecore::EClass_ptr m_Rule;
     ::ecore::EClass_ptr m_Macro;
     ::ecore::EClass_ptr m_ShellLine;
     ::ecore::EClass_ptr m_Comment;
     ::ecore::EClass_ptr m_Dependency;
     ::ecore::EClass_ptr m_RuleDep;
     ::ecore::EClass_ptr m_FileDep;
     ::ecore::EAttribute_ptr m_Makefile__name;
     ::ecore::EReference_ptr m_Makefile__comment;
     ::ecore::EReference_ptr m_Makefile__elements;
     ::ecore::EAttribute_ptr m_Element__name;
     ::ecore::EReference_ptr m_Rule__dependencies;
     ::ecore::EReference_ptr m_Rule__shellLines;
     ::ecore::EAttribute_ptr m_Macro__value;
     ::ecore::EAttribute_ptr m_ShellLine__command;
     ::ecore::EAttribute_ptr m_ShellLine__display;
     ::ecore::EReference_ptr m_ShellLine__ruleShellLine;
     ::ecore::EAttribute_ptr m_Comment__text;
     ::ecore::EReference_ptr m_RuleDep__ruledep;
     ::ecore::EAttribute_ptr m_FileDep__name;
};

} // Make


#endif // EMF_CPP_MAKE_PACKAGE_HPP
