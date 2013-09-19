#ifndef EMF_CPP_XPAND3_FACTORY_HPP
#define EMF_CPP_XPAND3_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <xpand3/fwd.hpp>

namespace xpand3
{


class Xpand3Factory : public ::ecore::EFactory
{
public:

    static const Xpand3Factory_ptr _instance();

    File_ptr createFile() const;
    ImportStatement_ptr createImportStatement() const;
    Identifier_ptr createIdentifier() const;
    DeclaredParameter_ptr createDeclaredParameter() const;

protected:

    Xpand3Factory();
};

} // xpand3


#endif // EMF_CPP_XPAND3_FACTORY_HPP
