#include "StatementPackage.hpp"
#include "StatementFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace xpand3::statement;

StatementPackage::StatementPackage()
{
	m_eFactoryInstance = StatementFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr AbstractStatement_ = ecoreFactory->createEClass();
	AbstractStatement_->setName("AbstractStatement");
	// m_eClassifiers.push_back(AbstractStatement_);
	::ecore::EClass_ptr ExpandStatement_ = ecoreFactory->createEClass();
	ExpandStatement_->setName("ExpandStatement");
	// m_eClassifiers.push_back(ExpandStatement_);
	::ecore::EClass_ptr ExpressionStatement_ = ecoreFactory->createEClass();
	ExpressionStatement_->setName("ExpressionStatement");
	// m_eClassifiers.push_back(ExpressionStatement_);
	::ecore::EClass_ptr ErrorStatement_ = ecoreFactory->createEClass();
	ErrorStatement_->setName("ErrorStatement");
	// m_eClassifiers.push_back(ErrorStatement_);
	::ecore::EClass_ptr AbstractStatementWithBody_ = ecoreFactory->createEClass();
	AbstractStatementWithBody_->setName("AbstractStatementWithBody");
	// m_eClassifiers.push_back(AbstractStatementWithBody_);
	::ecore::EClass_ptr FileStatement_ = ecoreFactory->createEClass();
	FileStatement_->setName("FileStatement");
	// m_eClassifiers.push_back(FileStatement_);
	::ecore::EClass_ptr ForEachStatement_ = ecoreFactory->createEClass();
	ForEachStatement_->setName("ForEachStatement");
	// m_eClassifiers.push_back(ForEachStatement_);
	::ecore::EClass_ptr IfStatement_ = ecoreFactory->createEClass();
	IfStatement_->setName("IfStatement");
	// m_eClassifiers.push_back(IfStatement_);
	::ecore::EClass_ptr LetStatement_ = ecoreFactory->createEClass();
	LetStatement_->setName("LetStatement");
	// m_eClassifiers.push_back(LetStatement_);
	::ecore::EClass_ptr ProtectStatement_ = ecoreFactory->createEClass();
	ProtectStatement_->setName("ProtectStatement");
	// m_eClassifiers.push_back(ProtectStatement_);
	::ecore::EClass_ptr TextStatement_ = ecoreFactory->createEClass();
	TextStatement_->setName("TextStatement");
	// m_eClassifiers.push_back(TextStatement_);
	
	
	// AbstractStatement_->addESuperType(SyntaxElement_);
	// ExpandStatement_->addESuperType(AbstractStatement_);
	// ExpressionStatement_->addESuperType(AbstractStatement_);
	// ErrorStatement_->addESuperType(AbstractStatement_);
	// AbstractStatementWithBody_->addESuperType(AbstractStatement_);
	// FileStatement_->addESuperType(AbstractStatementWithBody_);
	// ForEachStatement_->addESuperType(AbstractStatementWithBody_);
	// IfStatement_->addESuperType(AbstractStatementWithBody_);
	// LetStatement_->addESuperType(AbstractStatementWithBody_);
	// ProtectStatement_->addESuperType(AbstractStatementWithBody_);
	// TextStatement_->addESuperType(AbstractStatement_);
	
	
	
	
}

const StatementPackage_ptr StatementPackage::_instance()
{
	static StatementPackage __instance;
	return &__instance;
}

e4c::tag_t StatementPackage::getTag_AbstractStatement() const
{
	return e4c::tag< AbstractStatement >::get();
}
 
e4c::tag_t StatementPackage::getTag_ExpandStatement() const
{
	return e4c::tag< ExpandStatement >::get();
}
 
e4c::tag_t StatementPackage::getTag_ExpressionStatement() const
{
	return e4c::tag< ExpressionStatement >::get();
}
 
e4c::tag_t StatementPackage::getTag_ErrorStatement() const
{
	return e4c::tag< ErrorStatement >::get();
}
 
e4c::tag_t StatementPackage::getTag_AbstractStatementWithBody() const
{
	return e4c::tag< AbstractStatementWithBody >::get();
}
 
e4c::tag_t StatementPackage::getTag_FileStatement() const
{
	return e4c::tag< FileStatement >::get();
}
 
e4c::tag_t StatementPackage::getTag_ForEachStatement() const
{
	return e4c::tag< ForEachStatement >::get();
}
 
e4c::tag_t StatementPackage::getTag_IfStatement() const
{
	return e4c::tag< IfStatement >::get();
}
 
e4c::tag_t StatementPackage::getTag_LetStatement() const
{
	return e4c::tag< LetStatement >::get();
}
 
e4c::tag_t StatementPackage::getTag_ProtectStatement() const
{
	return e4c::tag< ProtectStatement >::get();
}
 
e4c::tag_t StatementPackage::getTag_TextStatement() const
{
	return e4c::tag< TextStatement >::get();
}
 
e4c::tag_t StatementPackage::getTag_ExpandStatement__foreach() const
{
	return e4c::tag< ExpandStatement__foreach_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ExpandStatement__parameters() const
{
	return e4c::tag< ExpandStatement__parameters_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ExpandStatement__separator() const
{
	return e4c::tag< ExpandStatement__separator_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ExpandStatement__target() const
{
	return e4c::tag< ExpandStatement__target_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ExpandStatement__definition() const
{
	return e4c::tag< ExpandStatement__definition_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ExpressionStatement__expression() const
{
	return e4c::tag< ExpressionStatement__expression_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ErrorStatement__message() const
{
	return e4c::tag< ErrorStatement__message_tag >::get();
}

e4c::tag_t StatementPackage::getTag_AbstractStatementWithBody__body() const
{
	return e4c::tag< AbstractStatementWithBody__body_tag >::get();
}

e4c::tag_t StatementPackage::getTag_FileStatement__fileNameExpression() const
{
	return e4c::tag< FileStatement__fileNameExpression_tag >::get();
}

e4c::tag_t StatementPackage::getTag_FileStatement__outletNameIdentifier() const
{
	return e4c::tag< FileStatement__outletNameIdentifier_tag >::get();
}

e4c::tag_t StatementPackage::getTag_FileStatement__once() const
{
	return e4c::tag< FileStatement__once_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ForEachStatement__target() const
{
	return e4c::tag< ForEachStatement__target_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ForEachStatement__separator() const
{
	return e4c::tag< ForEachStatement__separator_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ForEachStatement__variable() const
{
	return e4c::tag< ForEachStatement__variable_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ForEachStatement__iteratorName() const
{
	return e4c::tag< ForEachStatement__iteratorName_tag >::get();
}

e4c::tag_t StatementPackage::getTag_IfStatement__condition() const
{
	return e4c::tag< IfStatement__condition_tag >::get();
}

e4c::tag_t StatementPackage::getTag_IfStatement__elseIf() const
{
	return e4c::tag< IfStatement__elseIf_tag >::get();
}

e4c::tag_t StatementPackage::getTag_LetStatement__varName() const
{
	return e4c::tag< LetStatement__varName_tag >::get();
}

e4c::tag_t StatementPackage::getTag_LetStatement__varValue() const
{
	return e4c::tag< LetStatement__varValue_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ProtectStatement__commentStart() const
{
	return e4c::tag< ProtectStatement__commentStart_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ProtectStatement__commentEnd() const
{
	return e4c::tag< ProtectStatement__commentEnd_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ProtectStatement__id() const
{
	return e4c::tag< ProtectStatement__id_tag >::get();
}

e4c::tag_t StatementPackage::getTag_ProtectStatement__disable() const
{
	return e4c::tag< ProtectStatement__disable_tag >::get();
}

e4c::tag_t StatementPackage::getTag_TextStatement__value() const
{
	return e4c::tag< TextStatement__value_tag >::get();
}

e4c::tag_t StatementPackage::getTag_TextStatement__deleteLine() const
{
	return e4c::tag< TextStatement__deleteLine_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_xpand3_statement()
{
	return ::xpand3::statement::StatementPackage::_instance();
}
