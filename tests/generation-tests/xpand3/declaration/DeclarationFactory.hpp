#ifndef EMF_CPP_XPAND3_DECLARATION_FACTORY_HPP
#define EMF_CPP_XPAND3_DECLARATION_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <xpand3/declaration/fwd.hpp>

namespace xpand3
{
namespace declaration
{


class DeclarationFactory : public ::ecore::EFactory
{
public:

    static const DeclarationFactory_ptr _instance();

    Definition_ptr createDefinition() const;
    Extension_ptr createExtension() const;
    ExtensionAspect_ptr createExtensionAspect() const;
    DefinitionAspect_ptr createDefinitionAspect() const;
    Check_ptr createCheck() const;
    CreateExtension_ptr createCreateExtension() const;
    JavaExtension_ptr createJavaExtension() const;

protected:

    DeclarationFactory();
};

} // declaration
} // xpand3


#endif // EMF_CPP_XPAND3_DECLARATION_FACTORY_HPP
