#include "ExpressionPackage.hpp"
#include "ExpressionFactory.hpp"
#include "include.hpp"
#include <ecore/include.hpp>
#include <e4c/tag.ipp>

using namespace xpand3::expression;

ExpressionPackage::ExpressionPackage()
{
	m_eFactoryInstance = ExpressionFactory::_instance();
	::ecore::EcoreFactory_ptr ecoreFactory = ::ecore::EcoreFactory::_instance();
	
	::ecore::EClass_ptr AbstractExpression_ = ecoreFactory->createEClass();
	AbstractExpression_->setName("AbstractExpression");
	// m_eClassifiers.push_back(AbstractExpression_);
	::ecore::EClass_ptr BooleanOperation_ = ecoreFactory->createEClass();
	BooleanOperation_->setName("BooleanOperation");
	// m_eClassifiers.push_back(BooleanOperation_);
	::ecore::EClass_ptr Cast_ = ecoreFactory->createEClass();
	Cast_->setName("Cast");
	// m_eClassifiers.push_back(Cast_);
	::ecore::EClass_ptr ChainExpression_ = ecoreFactory->createEClass();
	ChainExpression_->setName("ChainExpression");
	// m_eClassifiers.push_back(ChainExpression_);
	::ecore::EClass_ptr ConstructorCallExpression_ = ecoreFactory->createEClass();
	ConstructorCallExpression_->setName("ConstructorCallExpression");
	// m_eClassifiers.push_back(ConstructorCallExpression_);
	::ecore::EClass_ptr FeatureCall_ = ecoreFactory->createEClass();
	FeatureCall_->setName("FeatureCall");
	// m_eClassifiers.push_back(FeatureCall_);
	::ecore::EClass_ptr CollectionExpression_ = ecoreFactory->createEClass();
	CollectionExpression_->setName("CollectionExpression");
	// m_eClassifiers.push_back(CollectionExpression_);
	::ecore::EClass_ptr OperationCall_ = ecoreFactory->createEClass();
	OperationCall_->setName("OperationCall");
	// m_eClassifiers.push_back(OperationCall_);
	::ecore::EClass_ptr TypeSelectExpression_ = ecoreFactory->createEClass();
	TypeSelectExpression_->setName("TypeSelectExpression");
	// m_eClassifiers.push_back(TypeSelectExpression_);
	::ecore::EClass_ptr GlobalVarExpression_ = ecoreFactory->createEClass();
	GlobalVarExpression_->setName("GlobalVarExpression");
	// m_eClassifiers.push_back(GlobalVarExpression_);
	::ecore::EClass_ptr IfExpression_ = ecoreFactory->createEClass();
	IfExpression_->setName("IfExpression");
	// m_eClassifiers.push_back(IfExpression_);
	::ecore::EClass_ptr LetExpression_ = ecoreFactory->createEClass();
	LetExpression_->setName("LetExpression");
	// m_eClassifiers.push_back(LetExpression_);
	::ecore::EClass_ptr ListLiteral_ = ecoreFactory->createEClass();
	ListLiteral_->setName("ListLiteral");
	// m_eClassifiers.push_back(ListLiteral_);
	::ecore::EClass_ptr Literal_ = ecoreFactory->createEClass();
	Literal_->setName("Literal");
	// m_eClassifiers.push_back(Literal_);
	::ecore::EClass_ptr BooleanLiteral_ = ecoreFactory->createEClass();
	BooleanLiteral_->setName("BooleanLiteral");
	// m_eClassifiers.push_back(BooleanLiteral_);
	::ecore::EClass_ptr IntegerLiteral_ = ecoreFactory->createEClass();
	IntegerLiteral_->setName("IntegerLiteral");
	// m_eClassifiers.push_back(IntegerLiteral_);
	::ecore::EClass_ptr NullLiteral_ = ecoreFactory->createEClass();
	NullLiteral_->setName("NullLiteral");
	// m_eClassifiers.push_back(NullLiteral_);
	::ecore::EClass_ptr RealLiteral_ = ecoreFactory->createEClass();
	RealLiteral_->setName("RealLiteral");
	// m_eClassifiers.push_back(RealLiteral_);
	::ecore::EClass_ptr StringLiteral_ = ecoreFactory->createEClass();
	StringLiteral_->setName("StringLiteral");
	// m_eClassifiers.push_back(StringLiteral_);
	::ecore::EClass_ptr SwitchExpression_ = ecoreFactory->createEClass();
	SwitchExpression_->setName("SwitchExpression");
	// m_eClassifiers.push_back(SwitchExpression_);
	::ecore::EClass_ptr Case_ = ecoreFactory->createEClass();
	Case_->setName("Case");
	// m_eClassifiers.push_back(Case_);
	::ecore::EClass_ptr BinaryOperation_ = ecoreFactory->createEClass();
	BinaryOperation_->setName("BinaryOperation");
	// m_eClassifiers.push_back(BinaryOperation_);
	::ecore::EClass_ptr UnaryOperation_ = ecoreFactory->createEClass();
	UnaryOperation_->setName("UnaryOperation");
	// m_eClassifiers.push_back(UnaryOperation_);
	
	
	// AbstractExpression_->addESuperType(SyntaxElement_);
	// BooleanOperation_->addESuperType(BinaryOperation_);
	// Cast_->addESuperType(AbstractExpression_);
	// ChainExpression_->addESuperType(AbstractExpression_);
	// ConstructorCallExpression_->addESuperType(AbstractExpression_);
	// FeatureCall_->addESuperType(AbstractExpression_);
	// CollectionExpression_->addESuperType(FeatureCall_);
	// OperationCall_->addESuperType(FeatureCall_);
	// TypeSelectExpression_->addESuperType(FeatureCall_);
	// GlobalVarExpression_->addESuperType(AbstractExpression_);
	// IfExpression_->addESuperType(AbstractExpression_);
	// LetExpression_->addESuperType(AbstractExpression_);
	// ListLiteral_->addESuperType(AbstractExpression_);
	// Literal_->addESuperType(AbstractExpression_);
	// BooleanLiteral_->addESuperType(Literal_);
	// IntegerLiteral_->addESuperType(Literal_);
	// NullLiteral_->addESuperType(Literal_);
	// RealLiteral_->addESuperType(Literal_);
	// StringLiteral_->addESuperType(Literal_);
	// SwitchExpression_->addESuperType(AbstractExpression_);
	// Case_->addESuperType(SyntaxElement_);
	// BinaryOperation_->addESuperType(AbstractExpression_);
	// UnaryOperation_->addESuperType(AbstractExpression_);
	
	
	
	
}

const ExpressionPackage_ptr ExpressionPackage::_instance()
{
	static ExpressionPackage __instance;
	return &__instance;
}

e4c::tag_t ExpressionPackage::getTag_AbstractExpression() const
{
	return e4c::tag< AbstractExpression >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_BooleanOperation() const
{
	return e4c::tag< BooleanOperation >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_Cast() const
{
	return e4c::tag< Cast >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_ChainExpression() const
{
	return e4c::tag< ChainExpression >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_ConstructorCallExpression() const
{
	return e4c::tag< ConstructorCallExpression >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_FeatureCall() const
{
	return e4c::tag< FeatureCall >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_CollectionExpression() const
{
	return e4c::tag< CollectionExpression >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_OperationCall() const
{
	return e4c::tag< OperationCall >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_TypeSelectExpression() const
{
	return e4c::tag< TypeSelectExpression >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_GlobalVarExpression() const
{
	return e4c::tag< GlobalVarExpression >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_IfExpression() const
{
	return e4c::tag< IfExpression >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_LetExpression() const
{
	return e4c::tag< LetExpression >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_ListLiteral() const
{
	return e4c::tag< ListLiteral >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_Literal() const
{
	return e4c::tag< Literal >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_BooleanLiteral() const
{
	return e4c::tag< BooleanLiteral >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_IntegerLiteral() const
{
	return e4c::tag< IntegerLiteral >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_NullLiteral() const
{
	return e4c::tag< NullLiteral >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_RealLiteral() const
{
	return e4c::tag< RealLiteral >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_StringLiteral() const
{
	return e4c::tag< StringLiteral >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_SwitchExpression() const
{
	return e4c::tag< SwitchExpression >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_Case() const
{
	return e4c::tag< Case >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_BinaryOperation() const
{
	return e4c::tag< BinaryOperation >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_UnaryOperation() const
{
	return e4c::tag< UnaryOperation >::get();
}
 
e4c::tag_t ExpressionPackage::getTag_Cast__type() const
{
	return e4c::tag< Cast__type_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_Cast__target() const
{
	return e4c::tag< Cast__target_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_ChainExpression__first() const
{
	return e4c::tag< ChainExpression__first_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_ChainExpression__next() const
{
	return e4c::tag< ChainExpression__next_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_ConstructorCallExpression__type() const
{
	return e4c::tag< ConstructorCallExpression__type_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_FeatureCall__target() const
{
	return e4c::tag< FeatureCall__target_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_FeatureCall__name() const
{
	return e4c::tag< FeatureCall__name_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_CollectionExpression__closure() const
{
	return e4c::tag< CollectionExpression__closure_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_CollectionExpression__eleName() const
{
	return e4c::tag< CollectionExpression__eleName_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_OperationCall__params() const
{
	return e4c::tag< OperationCall__params_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_TypeSelectExpression__typeLiteral() const
{
	return e4c::tag< TypeSelectExpression__typeLiteral_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_GlobalVarExpression__globalVarName() const
{
	return e4c::tag< GlobalVarExpression__globalVarName_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_IfExpression__condition() const
{
	return e4c::tag< IfExpression__condition_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_IfExpression__thenPart() const
{
	return e4c::tag< IfExpression__thenPart_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_IfExpression__elsePart() const
{
	return e4c::tag< IfExpression__elsePart_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_LetExpression__varExpression() const
{
	return e4c::tag< LetExpression__varExpression_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_LetExpression__targetExpression() const
{
	return e4c::tag< LetExpression__targetExpression_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_LetExpression__varName() const
{
	return e4c::tag< LetExpression__varName_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_ListLiteral__elements() const
{
	return e4c::tag< ListLiteral__elements_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_Literal__literalValue() const
{
	return e4c::tag< Literal__literalValue_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_SwitchExpression__switchExpr() const
{
	return e4c::tag< SwitchExpression__switchExpr_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_SwitchExpression__defaultExpr() const
{
	return e4c::tag< SwitchExpression__defaultExpr_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_SwitchExpression__cases() const
{
	return e4c::tag< SwitchExpression__cases_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_Case__condition() const
{
	return e4c::tag< Case__condition_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_Case__thenPart() const
{
	return e4c::tag< Case__thenPart_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_BinaryOperation__left() const
{
	return e4c::tag< BinaryOperation__left_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_BinaryOperation__right() const
{
	return e4c::tag< BinaryOperation__right_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_BinaryOperation__operator() const
{
	return e4c::tag< BinaryOperation__operator_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_UnaryOperation__operator() const
{
	return e4c::tag< UnaryOperation__operator_tag >::get();
}

e4c::tag_t ExpressionPackage::getTag_UnaryOperation__operand() const
{
	return e4c::tag< UnaryOperation__operand_tag >::get();
}


extern "C" ::ecore::EPackage_ptr e4c_xpand3_expression()
{
	return ::xpand3::expression::ExpressionPackage::_instance();
}
