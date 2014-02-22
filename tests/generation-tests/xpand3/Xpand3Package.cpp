#include "Xpand3Package.hpp"
#include "Xpand3Factory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace xpand3;

Xpand3Package::Xpand3Package()
{
    m_eFactoryInstance = Xpand3Factory::_instance();
    ::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();



    m_SyntaxElement = ecoreFactory->createEClass();
    m_SyntaxElement->setName("SyntaxElement");
    addEClassifiers(m_SyntaxElement);
    m_File = ecoreFactory->createEClass();
    m_File->setName("File");
    addEClassifiers(m_File);
    m_ImportStatement = ecoreFactory->createEClass();
    m_ImportStatement->setName("ImportStatement");
    addEClassifiers(m_ImportStatement);
    m_Identifier = ecoreFactory->createEClass();
    m_Identifier->setName("Identifier");
    addEClassifiers(m_Identifier);
    m_DeclaredParameter = ecoreFactory->createEClass();
    m_DeclaredParameter->setName("DeclaredParameter");
    addEClassifiers(m_DeclaredParameter);


    {
        m_SyntaxElement__line = ecoreFactory->createEAttribute();
        m_SyntaxElement__line->setName("line");
        m_SyntaxElement->addEStructuralFeatures(m_SyntaxElement__line);
        m_SyntaxElement->addEAllStructuralFeatures(m_SyntaxElement__line);
        m_SyntaxElement->addEAttributes(m_SyntaxElement__line);
        m_SyntaxElement->addEAllAttributes(m_SyntaxElement__line);
    }
    {
        m_SyntaxElement__start = ecoreFactory->createEAttribute();
        m_SyntaxElement__start->setName("start");
        m_SyntaxElement->addEStructuralFeatures(m_SyntaxElement__start);
        m_SyntaxElement->addEAllStructuralFeatures(m_SyntaxElement__start);
        m_SyntaxElement->addEAttributes(m_SyntaxElement__start);
        m_SyntaxElement->addEAllAttributes(m_SyntaxElement__start);
    }
    {
        m_SyntaxElement__end = ecoreFactory->createEAttribute();
        m_SyntaxElement__end->setName("end");
        m_SyntaxElement->addEStructuralFeatures(m_SyntaxElement__end);
        m_SyntaxElement->addEAllStructuralFeatures(m_SyntaxElement__end);
        m_SyntaxElement->addEAttributes(m_SyntaxElement__end);
        m_SyntaxElement->addEAllAttributes(m_SyntaxElement__end);
    }
    {
        m_SyntaxElement__fileName = ecoreFactory->createEAttribute();
        m_SyntaxElement__fileName->setName("fileName");
        m_SyntaxElement->addEStructuralFeatures(m_SyntaxElement__fileName);
        m_SyntaxElement->addEAllStructuralFeatures(m_SyntaxElement__fileName);
        m_SyntaxElement->addEAttributes(m_SyntaxElement__fileName);
        m_SyntaxElement->addEAllAttributes(m_SyntaxElement__fileName);
    }
    {
        m_File__imports = ecoreFactory->createEReference();
        m_File__imports->setName("imports");
        m_File->addEStructuralFeatures(m_File__imports);
        m_File->addEAllStructuralFeatures(m_File__imports);
        m_File->addEReferences(m_File__imports);
        m_File->addEAllReferences(m_File__imports);
    }
    {
        m_File__declarations = ecoreFactory->createEReference();
        m_File__declarations->setName("declarations");
        m_File->addEStructuralFeatures(m_File__declarations);
        m_File->addEAllStructuralFeatures(m_File__declarations);
        m_File->addEReferences(m_File__declarations);
        m_File->addEAllReferences(m_File__declarations);
    }
    {
        m_ImportStatement__importedId = ecoreFactory->createEReference();
        m_ImportStatement__importedId->setName("importedId");
        m_ImportStatement->addEStructuralFeatures(m_ImportStatement__importedId);
        m_ImportStatement->addEAllStructuralFeatures(m_ImportStatement__importedId);
        m_ImportStatement->addEReferences(m_ImportStatement__importedId);
        m_ImportStatement->addEAllReferences(m_ImportStatement__importedId);
    }
    {
        m_ImportStatement__exported = ecoreFactory->createEAttribute();
        m_ImportStatement__exported->setName("exported");
        m_ImportStatement->addEStructuralFeatures(m_ImportStatement__exported);
        m_ImportStatement->addEAllStructuralFeatures(m_ImportStatement__exported);
        m_ImportStatement->addEAttributes(m_ImportStatement__exported);
        m_ImportStatement->addEAllAttributes(m_ImportStatement__exported);
    }
    {
        m_Identifier__value = ecoreFactory->createEAttribute();
        m_Identifier__value->setName("value");
        m_Identifier->addEStructuralFeatures(m_Identifier__value);
        m_Identifier->addEAllStructuralFeatures(m_Identifier__value);
        m_Identifier->addEAttributes(m_Identifier__value);
        m_Identifier->addEAllAttributes(m_Identifier__value);
    }
    {
        m_DeclaredParameter__name = ecoreFactory->createEReference();
        m_DeclaredParameter__name->setName("name");
        m_DeclaredParameter->addEStructuralFeatures(m_DeclaredParameter__name);
        m_DeclaredParameter->addEAllStructuralFeatures(m_DeclaredParameter__name);
        m_DeclaredParameter->addEReferences(m_DeclaredParameter__name);
        m_DeclaredParameter->addEAllReferences(m_DeclaredParameter__name);
    }
    {
        m_DeclaredParameter__type = ecoreFactory->createEReference();
        m_DeclaredParameter__type->setName("type");
        m_DeclaredParameter->addEStructuralFeatures(m_DeclaredParameter__type);
        m_DeclaredParameter->addEAllStructuralFeatures(m_DeclaredParameter__type);
        m_DeclaredParameter->addEReferences(m_DeclaredParameter__type);
        m_DeclaredParameter->addEAllReferences(m_DeclaredParameter__type);
    }

    m_File->addESuperTypes(m_SyntaxElement);
    m_File->addAllEAllOperations(m_SyntaxElement->getEOperations());
    m_File->addAllEAllReferences(m_SyntaxElement->getEReferences());
    m_File->addAllEAllAttributes(m_SyntaxElement->getEAttributes());
    m_File->addAllEAllStructuralFeatures(m_SyntaxElement->getEStructuralFeatures());
    m_ImportStatement->addESuperTypes(m_SyntaxElement);
    m_ImportStatement->addAllEAllOperations(m_SyntaxElement->getEOperations());
    m_ImportStatement->addAllEAllReferences(m_SyntaxElement->getEReferences());
    m_ImportStatement->addAllEAllAttributes(m_SyntaxElement->getEAttributes());
    m_ImportStatement->addAllEAllStructuralFeatures(m_SyntaxElement->getEStructuralFeatures());
    m_Identifier->addESuperTypes(m_SyntaxElement);
    m_Identifier->addAllEAllOperations(m_SyntaxElement->getEOperations());
    m_Identifier->addAllEAllReferences(m_SyntaxElement->getEReferences());
    m_Identifier->addAllEAllAttributes(m_SyntaxElement->getEAttributes());
    m_Identifier->addAllEAllStructuralFeatures(m_SyntaxElement->getEStructuralFeatures());
    m_DeclaredParameter->addESuperTypes(m_SyntaxElement);
    m_DeclaredParameter->addAllEAllOperations(m_SyntaxElement->getEOperations());
    m_DeclaredParameter->addAllEAllReferences(m_SyntaxElement->getEReferences());
    m_DeclaredParameter->addAllEAllAttributes(m_SyntaxElement->getEAttributes());
    m_DeclaredParameter->addAllEAllStructuralFeatures(m_SyntaxElement->getEStructuralFeatures());


    m_SyntaxElement->addFeatureAccesors(m_SyntaxElement__line,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::SyntaxElement_ptr >(o)->getLine()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_SyntaxElement->addFeatureAccesors(m_SyntaxElement__start,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::SyntaxElement_ptr >(o)->getStart()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_SyntaxElement->addFeatureAccesors(m_SyntaxElement__end,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::SyntaxElement_ptr >(o)->getEnd()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_SyntaxElement->addFeatureAccesors(m_SyntaxElement__fileName,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::SyntaxElement_ptr >(o)->getFileName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_File->addFeatureAccesors(m_File__imports,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::File_ptr >(o)->getImports()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_File->addFeatureAccesors(m_File__declarations,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::File_ptr >(o)->getDeclarations()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ImportStatement->addFeatureAccesors(m_ImportStatement__importedId,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::ImportStatement_ptr >(o)->getImportedId()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ImportStatement->addFeatureAccesors(m_ImportStatement__exported,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::ImportStatement_ptr >(o)->getExported()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Identifier->addFeatureAccesors(m_Identifier__value,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::Identifier_ptr >(o)->getValue()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DeclaredParameter->addFeatureAccesors(m_DeclaredParameter__name,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::DeclaredParameter_ptr >(o)->getName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_DeclaredParameter->addFeatureAccesors(m_DeclaredParameter__type,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< xpand3::DeclaredParameter_ptr >(o)->getType()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });

}

const Xpand3Package_ptr Xpand3Package::_instance()
{
    static Xpand3Package __instance;
    return &__instance;
}

ecore::EClass_ptr Xpand3Package::getSyntaxElement() const
{
    return m_SyntaxElement;
}

e4c::tag_t Xpand3Package::getTag_SyntaxElement() const
{
    return e4c::tag< SyntaxElement >::get();
}

ecore::EClass_ptr Xpand3Package::getFile() const
{
    return m_File;
}

e4c::tag_t Xpand3Package::getTag_File() const
{
    return e4c::tag< File >::get();
}

ecore::EClass_ptr Xpand3Package::getImportStatement() const
{
    return m_ImportStatement;
}

e4c::tag_t Xpand3Package::getTag_ImportStatement() const
{
    return e4c::tag< ImportStatement >::get();
}

ecore::EClass_ptr Xpand3Package::getIdentifier() const
{
    return m_Identifier;
}

e4c::tag_t Xpand3Package::getTag_Identifier() const
{
    return e4c::tag< Identifier >::get();
}

ecore::EClass_ptr Xpand3Package::getDeclaredParameter() const
{
    return m_DeclaredParameter;
}

e4c::tag_t Xpand3Package::getTag_DeclaredParameter() const
{
    return e4c::tag< DeclaredParameter >::get();
}

e4c::tag_t Xpand3Package::getTag_SyntaxElement__line() const
{
    return e4c::tag< SyntaxElement__line_tag >::get();
}

ecore::EAttribute_ptr Xpand3Package::getSyntaxElement__line() const
{
    return m_SyntaxElement__line;
}

e4c::tag_t Xpand3Package::getTag_SyntaxElement__start() const
{
    return e4c::tag< SyntaxElement__start_tag >::get();
}

ecore::EAttribute_ptr Xpand3Package::getSyntaxElement__start() const
{
    return m_SyntaxElement__start;
}

e4c::tag_t Xpand3Package::getTag_SyntaxElement__end() const
{
    return e4c::tag< SyntaxElement__end_tag >::get();
}

ecore::EAttribute_ptr Xpand3Package::getSyntaxElement__end() const
{
    return m_SyntaxElement__end;
}

e4c::tag_t Xpand3Package::getTag_SyntaxElement__fileName() const
{
    return e4c::tag< SyntaxElement__fileName_tag >::get();
}

ecore::EAttribute_ptr Xpand3Package::getSyntaxElement__fileName() const
{
    return m_SyntaxElement__fileName;
}

e4c::tag_t Xpand3Package::getTag_File__imports() const
{
    return e4c::tag< File__imports_tag >::get();
}

ecore::EReference_ptr Xpand3Package::getFile__imports() const
{
    return m_File__imports;
}

e4c::tag_t Xpand3Package::getTag_File__declarations() const
{
    return e4c::tag< File__declarations_tag >::get();
}

ecore::EReference_ptr Xpand3Package::getFile__declarations() const
{
    return m_File__declarations;
}

e4c::tag_t Xpand3Package::getTag_ImportStatement__importedId() const
{
    return e4c::tag< ImportStatement__importedId_tag >::get();
}

ecore::EReference_ptr Xpand3Package::getImportStatement__importedId() const
{
    return m_ImportStatement__importedId;
}

e4c::tag_t Xpand3Package::getTag_ImportStatement__exported() const
{
    return e4c::tag< ImportStatement__exported_tag >::get();
}

ecore::EAttribute_ptr Xpand3Package::getImportStatement__exported() const
{
    return m_ImportStatement__exported;
}

e4c::tag_t Xpand3Package::getTag_Identifier__value() const
{
    return e4c::tag< Identifier__value_tag >::get();
}

ecore::EAttribute_ptr Xpand3Package::getIdentifier__value() const
{
    return m_Identifier__value;
}

e4c::tag_t Xpand3Package::getTag_DeclaredParameter__name() const
{
    return e4c::tag< DeclaredParameter__name_tag >::get();
}

ecore::EReference_ptr Xpand3Package::getDeclaredParameter__name() const
{
    return m_DeclaredParameter__name;
}

e4c::tag_t Xpand3Package::getTag_DeclaredParameter__type() const
{
    return e4c::tag< DeclaredParameter__type_tag >::get();
}

ecore::EReference_ptr Xpand3Package::getDeclaredParameter__type() const
{
    return m_DeclaredParameter__type;
}


extern "C" ::ecore::EPackage_ptr e4c_xpand3()
{
    return ::xpand3::Xpand3Package::_instance();
}
