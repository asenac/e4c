#ifndef EMF_CPP_MAKE_FWD_HPP
#define EMF_CPP_MAKE_FWD_HPP


namespace Make
{


class MakePackage;
typedef MakePackage * MakePackage_ptr;
class MakeFactory;
typedef MakeFactory * MakeFactory_ptr;

// Data types


// Classes
class Makefile;
typedef Makefile* Makefile_ptr;
class Element;
typedef Element* Element_ptr;
class Rule;
typedef Rule* Rule_ptr;
class Macro;
typedef Macro* Macro_ptr;
class ShellLine;
typedef ShellLine* ShellLine_ptr;
class Comment;
typedef Comment* Comment_ptr;
class Dependency;
typedef Dependency* Dependency_ptr;
class RuleDep;
typedef RuleDep* RuleDep_ptr;
class FileDep;
typedef FileDep* FileDep_ptr;


// Structural features
struct Makefile__name_tag;
struct Makefile__comment_tag;
struct Makefile__elements_tag;
struct Element__name_tag;
struct Rule__dependencies_tag;
struct Rule__shellLines_tag;
struct Macro__value_tag;
struct ShellLine__command_tag;
struct ShellLine__display_tag;
struct ShellLine__ruleShellLine_tag;
struct Comment__text_tag;
struct RuleDep__ruledep_tag;
struct FileDep__name_tag;


} // Make


#endif // EMF_CPP_MAKE_FWD_HPP
