#include "MakePackage.hpp"
#include "MakeFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace Make;

MakePackage::MakePackage()
{
    m_eFactoryInstance = MakeFactory::_instance();
    ::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();



    m_Makefile = ecoreFactory->createEClass();
    m_Makefile->setName("Makefile");
    addEClassifiers(m_Makefile);
    m_Element = ecoreFactory->createEClass();
    m_Element->setName("Element");
    addEClassifiers(m_Element);
    m_Rule = ecoreFactory->createEClass();
    m_Rule->setName("Rule");
    addEClassifiers(m_Rule);
    m_Macro = ecoreFactory->createEClass();
    m_Macro->setName("Macro");
    addEClassifiers(m_Macro);
    m_ShellLine = ecoreFactory->createEClass();
    m_ShellLine->setName("ShellLine");
    addEClassifiers(m_ShellLine);
    m_Comment = ecoreFactory->createEClass();
    m_Comment->setName("Comment");
    addEClassifiers(m_Comment);
    m_Dependency = ecoreFactory->createEClass();
    m_Dependency->setName("Dependency");
    addEClassifiers(m_Dependency);
    m_RuleDep = ecoreFactory->createEClass();
    m_RuleDep->setName("RuleDep");
    addEClassifiers(m_RuleDep);
    m_FileDep = ecoreFactory->createEClass();
    m_FileDep->setName("FileDep");
    addEClassifiers(m_FileDep);


    {
        m_Makefile__name = ecoreFactory->createEAttribute();
        m_Makefile__name->setName("name");
        m_Makefile->addEStructuralFeatures(m_Makefile__name);
        m_Makefile->addEAllStructuralFeatures(m_Makefile__name);
        m_Makefile->addEAttributes(m_Makefile__name);
        m_Makefile->addEAllAttributes(m_Makefile__name);
    }
    {
        m_Makefile__comment = ecoreFactory->createEReference();
        m_Makefile__comment->setName("comment");
        m_Makefile->addEStructuralFeatures(m_Makefile__comment);
        m_Makefile->addEAllStructuralFeatures(m_Makefile__comment);
        m_Makefile->addEReferences(m_Makefile__comment);
        m_Makefile->addEAllReferences(m_Makefile__comment);
    }
    {
        m_Makefile__elements = ecoreFactory->createEReference();
        m_Makefile__elements->setName("elements");
        m_Makefile->addEStructuralFeatures(m_Makefile__elements);
        m_Makefile->addEAllStructuralFeatures(m_Makefile__elements);
        m_Makefile->addEReferences(m_Makefile__elements);
        m_Makefile->addEAllReferences(m_Makefile__elements);
    }
    {
        m_Element__name = ecoreFactory->createEAttribute();
        m_Element__name->setName("name");
        m_Element->addEStructuralFeatures(m_Element__name);
        m_Element->addEAllStructuralFeatures(m_Element__name);
        m_Element->addEAttributes(m_Element__name);
        m_Element->addEAllAttributes(m_Element__name);
    }
    {
        m_Rule__dependencies = ecoreFactory->createEReference();
        m_Rule__dependencies->setName("dependencies");
        m_Rule->addEStructuralFeatures(m_Rule__dependencies);
        m_Rule->addEAllStructuralFeatures(m_Rule__dependencies);
        m_Rule->addEReferences(m_Rule__dependencies);
        m_Rule->addEAllReferences(m_Rule__dependencies);
    }
    {
        m_Rule__shellLines = ecoreFactory->createEReference();
        m_Rule__shellLines->setName("shellLines");
        m_Rule->addEStructuralFeatures(m_Rule__shellLines);
        m_Rule->addEAllStructuralFeatures(m_Rule__shellLines);
        m_Rule->addEReferences(m_Rule__shellLines);
        m_Rule->addEAllReferences(m_Rule__shellLines);
    }
    {
        m_Macro__value = ecoreFactory->createEAttribute();
        m_Macro__value->setName("value");
        m_Macro->addEStructuralFeatures(m_Macro__value);
        m_Macro->addEAllStructuralFeatures(m_Macro__value);
        m_Macro->addEAttributes(m_Macro__value);
        m_Macro->addEAllAttributes(m_Macro__value);
    }
    {
        m_ShellLine__command = ecoreFactory->createEAttribute();
        m_ShellLine__command->setName("command");
        m_ShellLine->addEStructuralFeatures(m_ShellLine__command);
        m_ShellLine->addEAllStructuralFeatures(m_ShellLine__command);
        m_ShellLine->addEAttributes(m_ShellLine__command);
        m_ShellLine->addEAllAttributes(m_ShellLine__command);
    }
    {
        m_ShellLine__display = ecoreFactory->createEAttribute();
        m_ShellLine__display->setName("display");
        m_ShellLine->addEStructuralFeatures(m_ShellLine__display);
        m_ShellLine->addEAllStructuralFeatures(m_ShellLine__display);
        m_ShellLine->addEAttributes(m_ShellLine__display);
        m_ShellLine->addEAllAttributes(m_ShellLine__display);
    }
    {
        m_ShellLine__ruleShellLine = ecoreFactory->createEReference();
        m_ShellLine__ruleShellLine->setName("ruleShellLine");
        m_ShellLine->addEStructuralFeatures(m_ShellLine__ruleShellLine);
        m_ShellLine->addEAllStructuralFeatures(m_ShellLine__ruleShellLine);
        m_ShellLine->addEReferences(m_ShellLine__ruleShellLine);
        m_ShellLine->addEAllReferences(m_ShellLine__ruleShellLine);
    }
    {
        m_Comment__text = ecoreFactory->createEAttribute();
        m_Comment__text->setName("text");
        m_Comment->addEStructuralFeatures(m_Comment__text);
        m_Comment->addEAllStructuralFeatures(m_Comment__text);
        m_Comment->addEAttributes(m_Comment__text);
        m_Comment->addEAllAttributes(m_Comment__text);
    }
    {
        m_RuleDep__ruledep = ecoreFactory->createEReference();
        m_RuleDep__ruledep->setName("ruledep");
        m_RuleDep->addEStructuralFeatures(m_RuleDep__ruledep);
        m_RuleDep->addEAllStructuralFeatures(m_RuleDep__ruledep);
        m_RuleDep->addEReferences(m_RuleDep__ruledep);
        m_RuleDep->addEAllReferences(m_RuleDep__ruledep);
    }
    {
        m_FileDep__name = ecoreFactory->createEAttribute();
        m_FileDep__name->setName("name");
        m_FileDep->addEStructuralFeatures(m_FileDep__name);
        m_FileDep->addEAllStructuralFeatures(m_FileDep__name);
        m_FileDep->addEAttributes(m_FileDep__name);
        m_FileDep->addEAllAttributes(m_FileDep__name);
    }

    m_Rule->addESuperTypes(m_Element);
    m_Rule->addAllEAllOperations(m_Element->getEOperations());
    m_Rule->addAllEAllReferences(m_Element->getEReferences());
    m_Rule->addAllEAllAttributes(m_Element->getEAttributes());
    m_Rule->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
    m_Macro->addESuperTypes(m_Element);
    m_Macro->addAllEAllOperations(m_Element->getEOperations());
    m_Macro->addAllEAllReferences(m_Element->getEReferences());
    m_Macro->addAllEAllAttributes(m_Element->getEAttributes());
    m_Macro->addAllEAllStructuralFeatures(m_Element->getEStructuralFeatures());
    m_RuleDep->addESuperTypes(m_Dependency);
    m_RuleDep->addAllEAllOperations(m_Dependency->getEOperations());
    m_RuleDep->addAllEAllReferences(m_Dependency->getEReferences());
    m_RuleDep->addAllEAllAttributes(m_Dependency->getEAttributes());
    m_RuleDep->addAllEAllStructuralFeatures(m_Dependency->getEStructuralFeatures());
    m_FileDep->addESuperTypes(m_Dependency);
    m_FileDep->addAllEAllOperations(m_Dependency->getEOperations());
    m_FileDep->addAllEAllReferences(m_Dependency->getEReferences());
    m_FileDep->addAllEAllAttributes(m_Dependency->getEAttributes());
    m_FileDep->addAllEAllStructuralFeatures(m_Dependency->getEStructuralFeatures());


    m_Makefile->addFeatureAccesors(m_Makefile__name,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< Make::Makefile_ptr >(o)->getName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Makefile->addFeatureAccesors(m_Makefile__comment,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< Make::Makefile_ptr >(o)->getComment()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Makefile->addFeatureAccesors(m_Makefile__elements,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< Make::Makefile_ptr >(o)->getElements()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Element->addFeatureAccesors(m_Element__name,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< Make::Element_ptr >(o)->getName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Rule->addFeatureAccesors(m_Rule__dependencies,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< Make::Rule_ptr >(o)->getDependencies()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Rule->addFeatureAccesors(m_Rule__shellLines,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< Make::Rule_ptr >(o)->getShellLines()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Macro->addFeatureAccesors(m_Macro__value,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< Make::Macro_ptr >(o)->getValue()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ShellLine->addFeatureAccesors(m_ShellLine__command,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< Make::ShellLine_ptr >(o)->getCommand()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ShellLine->addFeatureAccesors(m_ShellLine__display,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< Make::ShellLine_ptr >(o)->getDisplay()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_ShellLine->addFeatureAccesors(m_ShellLine__ruleShellLine,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< Make::ShellLine_ptr >(o)->getRuleShellLine()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_Comment->addFeatureAccesors(m_Comment__text,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< Make::Comment_ptr >(o)->getText()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_RuleDep->addFeatureAccesors(m_RuleDep__ruledep,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< Make::RuleDep_ptr >(o)->getRuledep()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });
    m_FileDep->addFeatureAccesors(m_FileDep__name,
        [](ecore::EObject_ptr o) { return e4c::create_holder(dynamic_cast< Make::FileDep_ptr >(o)->getName()); },
        [](ecore::EObject_ptr o, e4c::holder h){ /* TODO */ });

}

const MakePackage_ptr MakePackage::_instance()
{
    static MakePackage __instance;
    return &__instance;
}

ecore::EClass_ptr MakePackage::getMakefile() const
{
    return m_Makefile;
}

e4c::tag_t MakePackage::getTag_Makefile() const
{
    return e4c::tag< Makefile >::get();
}

ecore::EClass_ptr MakePackage::getElement() const
{
    return m_Element;
}

e4c::tag_t MakePackage::getTag_Element() const
{
    return e4c::tag< Element >::get();
}

ecore::EClass_ptr MakePackage::getRule() const
{
    return m_Rule;
}

e4c::tag_t MakePackage::getTag_Rule() const
{
    return e4c::tag< Rule >::get();
}

ecore::EClass_ptr MakePackage::getMacro() const
{
    return m_Macro;
}

e4c::tag_t MakePackage::getTag_Macro() const
{
    return e4c::tag< Macro >::get();
}

ecore::EClass_ptr MakePackage::getShellLine() const
{
    return m_ShellLine;
}

e4c::tag_t MakePackage::getTag_ShellLine() const
{
    return e4c::tag< ShellLine >::get();
}

ecore::EClass_ptr MakePackage::getComment() const
{
    return m_Comment;
}

e4c::tag_t MakePackage::getTag_Comment() const
{
    return e4c::tag< Comment >::get();
}

ecore::EClass_ptr MakePackage::getDependency() const
{
    return m_Dependency;
}

e4c::tag_t MakePackage::getTag_Dependency() const
{
    return e4c::tag< Dependency >::get();
}

ecore::EClass_ptr MakePackage::getRuleDep() const
{
    return m_RuleDep;
}

e4c::tag_t MakePackage::getTag_RuleDep() const
{
    return e4c::tag< RuleDep >::get();
}

ecore::EClass_ptr MakePackage::getFileDep() const
{
    return m_FileDep;
}

e4c::tag_t MakePackage::getTag_FileDep() const
{
    return e4c::tag< FileDep >::get();
}

e4c::tag_t MakePackage::getTag_Makefile__name() const
{
    return e4c::tag< Makefile__name_tag >::get();
}

ecore::EAttribute_ptr MakePackage::getMakefile__name() const
{
    return m_Makefile__name;
}

e4c::tag_t MakePackage::getTag_Makefile__comment() const
{
    return e4c::tag< Makefile__comment_tag >::get();
}

ecore::EReference_ptr MakePackage::getMakefile__comment() const
{
    return m_Makefile__comment;
}

e4c::tag_t MakePackage::getTag_Makefile__elements() const
{
    return e4c::tag< Makefile__elements_tag >::get();
}

ecore::EReference_ptr MakePackage::getMakefile__elements() const
{
    return m_Makefile__elements;
}

e4c::tag_t MakePackage::getTag_Element__name() const
{
    return e4c::tag< Element__name_tag >::get();
}

ecore::EAttribute_ptr MakePackage::getElement__name() const
{
    return m_Element__name;
}

e4c::tag_t MakePackage::getTag_Rule__dependencies() const
{
    return e4c::tag< Rule__dependencies_tag >::get();
}

ecore::EReference_ptr MakePackage::getRule__dependencies() const
{
    return m_Rule__dependencies;
}

e4c::tag_t MakePackage::getTag_Rule__shellLines() const
{
    return e4c::tag< Rule__shellLines_tag >::get();
}

ecore::EReference_ptr MakePackage::getRule__shellLines() const
{
    return m_Rule__shellLines;
}

e4c::tag_t MakePackage::getTag_Macro__value() const
{
    return e4c::tag< Macro__value_tag >::get();
}

ecore::EAttribute_ptr MakePackage::getMacro__value() const
{
    return m_Macro__value;
}

e4c::tag_t MakePackage::getTag_ShellLine__command() const
{
    return e4c::tag< ShellLine__command_tag >::get();
}

ecore::EAttribute_ptr MakePackage::getShellLine__command() const
{
    return m_ShellLine__command;
}

e4c::tag_t MakePackage::getTag_ShellLine__display() const
{
    return e4c::tag< ShellLine__display_tag >::get();
}

ecore::EAttribute_ptr MakePackage::getShellLine__display() const
{
    return m_ShellLine__display;
}

e4c::tag_t MakePackage::getTag_ShellLine__ruleShellLine() const
{
    return e4c::tag< ShellLine__ruleShellLine_tag >::get();
}

ecore::EReference_ptr MakePackage::getShellLine__ruleShellLine() const
{
    return m_ShellLine__ruleShellLine;
}

e4c::tag_t MakePackage::getTag_Comment__text() const
{
    return e4c::tag< Comment__text_tag >::get();
}

ecore::EAttribute_ptr MakePackage::getComment__text() const
{
    return m_Comment__text;
}

e4c::tag_t MakePackage::getTag_RuleDep__ruledep() const
{
    return e4c::tag< RuleDep__ruledep_tag >::get();
}

ecore::EReference_ptr MakePackage::getRuleDep__ruledep() const
{
    return m_RuleDep__ruledep;
}

e4c::tag_t MakePackage::getTag_FileDep__name() const
{
    return e4c::tag< FileDep__name_tag >::get();
}

ecore::EAttribute_ptr MakePackage::getFileDep__name() const
{
    return m_FileDep__name;
}


extern "C" ::ecore::EPackage_ptr e4c_Make()
{
    return ::Make::MakePackage::_instance();
}
