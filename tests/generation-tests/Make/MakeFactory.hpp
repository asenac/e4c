#ifndef EMF_CPP_MAKE_FACTORY_HPP
#define EMF_CPP_MAKE_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <Make/fwd.hpp>

namespace Make
{


class MakeFactory : public ::ecore::EFactory
{
public:

    static const MakeFactory_ptr _instance();

    Makefile_ptr createMakefile() const;
    Rule_ptr createRule() const;
    Macro_ptr createMacro() const;
    ShellLine_ptr createShellLine() const;
    Comment_ptr createComment() const;
    RuleDep_ptr createRuleDep() const;
    FileDep_ptr createFileDep() const;

protected:

    MakeFactory();
};

} // Make


#endif // EMF_CPP_MAKE_FACTORY_HPP
