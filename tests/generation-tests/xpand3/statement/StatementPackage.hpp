#ifndef EMF_CPP_XPAND3_STATEMENT_PACKAGE_HPP
#define EMF_CPP_XPAND3_STATEMENT_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <xpand3/statement/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace xpand3
{
namespace statement
{


class StatementPackage : public ::ecore::EPackage
{
public:
    static const StatementPackage_ptr _instance();

     ::ecore::EClass_ptr getAbstractStatement() const;
     ::ecore::EClass_ptr getExpandStatement() const;
     ::ecore::EClass_ptr getExpressionStatement() const;
     ::ecore::EClass_ptr getErrorStatement() const;
     ::ecore::EClass_ptr getAbstractStatementWithBody() const;
     ::ecore::EClass_ptr getFileStatement() const;
     ::ecore::EClass_ptr getForEachStatement() const;
     ::ecore::EClass_ptr getIfStatement() const;
     ::ecore::EClass_ptr getLetStatement() const;
     ::ecore::EClass_ptr getProtectStatement() const;
     ::ecore::EClass_ptr getTextStatement() const;

     ::ecore::EAttribute_ptr getExpandStatement__foreach() const;
     ::ecore::EReference_ptr getExpandStatement__parameters() const;
     ::ecore::EReference_ptr getExpandStatement__separator() const;
     ::ecore::EReference_ptr getExpandStatement__target() const;
     ::ecore::EReference_ptr getExpandStatement__definition() const;
     ::ecore::EReference_ptr getExpressionStatement__expression() const;
     ::ecore::EReference_ptr getErrorStatement__message() const;
     ::ecore::EReference_ptr getAbstractStatementWithBody__body() const;
     ::ecore::EReference_ptr getFileStatement__fileNameExpression() const;
     ::ecore::EReference_ptr getFileStatement__outletNameIdentifier() const;
     ::ecore::EAttribute_ptr getFileStatement__once() const;
     ::ecore::EReference_ptr getForEachStatement__target() const;
     ::ecore::EReference_ptr getForEachStatement__separator() const;
     ::ecore::EReference_ptr getForEachStatement__variable() const;
     ::ecore::EReference_ptr getForEachStatement__iteratorName() const;
     ::ecore::EReference_ptr getIfStatement__condition() const;
     ::ecore::EReference_ptr getIfStatement__elseIf() const;
     ::ecore::EReference_ptr getLetStatement__varName() const;
     ::ecore::EReference_ptr getLetStatement__varValue() const;
     ::ecore::EReference_ptr getProtectStatement__commentStart() const;
     ::ecore::EReference_ptr getProtectStatement__commentEnd() const;
     ::ecore::EReference_ptr getProtectStatement__id() const;
     ::ecore::EAttribute_ptr getProtectStatement__disable() const;
     ::ecore::EAttribute_ptr getTextStatement__value() const;
     ::ecore::EAttribute_ptr getTextStatement__deleteLine() const;

     e4c::tag_t getTag_AbstractStatement() const;
     e4c::tag_t getTag_ExpandStatement() const;
     e4c::tag_t getTag_ExpressionStatement() const;
     e4c::tag_t getTag_ErrorStatement() const;
     e4c::tag_t getTag_AbstractStatementWithBody() const;
     e4c::tag_t getTag_FileStatement() const;
     e4c::tag_t getTag_ForEachStatement() const;
     e4c::tag_t getTag_IfStatement() const;
     e4c::tag_t getTag_LetStatement() const;
     e4c::tag_t getTag_ProtectStatement() const;
     e4c::tag_t getTag_TextStatement() const;

     e4c::tag_t getTag_ExpandStatement__foreach() const;
     e4c::tag_t getTag_ExpandStatement__parameters() const;
     e4c::tag_t getTag_ExpandStatement__separator() const;
     e4c::tag_t getTag_ExpandStatement__target() const;
     e4c::tag_t getTag_ExpandStatement__definition() const;
     e4c::tag_t getTag_ExpressionStatement__expression() const;
     e4c::tag_t getTag_ErrorStatement__message() const;
     e4c::tag_t getTag_AbstractStatementWithBody__body() const;
     e4c::tag_t getTag_FileStatement__fileNameExpression() const;
     e4c::tag_t getTag_FileStatement__outletNameIdentifier() const;
     e4c::tag_t getTag_FileStatement__once() const;
     e4c::tag_t getTag_ForEachStatement__target() const;
     e4c::tag_t getTag_ForEachStatement__separator() const;
     e4c::tag_t getTag_ForEachStatement__variable() const;
     e4c::tag_t getTag_ForEachStatement__iteratorName() const;
     e4c::tag_t getTag_IfStatement__condition() const;
     e4c::tag_t getTag_IfStatement__elseIf() const;
     e4c::tag_t getTag_LetStatement__varName() const;
     e4c::tag_t getTag_LetStatement__varValue() const;
     e4c::tag_t getTag_ProtectStatement__commentStart() const;
     e4c::tag_t getTag_ProtectStatement__commentEnd() const;
     e4c::tag_t getTag_ProtectStatement__id() const;
     e4c::tag_t getTag_ProtectStatement__disable() const;
     e4c::tag_t getTag_TextStatement__value() const;
     e4c::tag_t getTag_TextStatement__deleteLine() const;

protected:
    StatementPackage();

     ::ecore::EClass_ptr m_AbstractStatement;
     ::ecore::EClass_ptr m_ExpandStatement;
     ::ecore::EClass_ptr m_ExpressionStatement;
     ::ecore::EClass_ptr m_ErrorStatement;
     ::ecore::EClass_ptr m_AbstractStatementWithBody;
     ::ecore::EClass_ptr m_FileStatement;
     ::ecore::EClass_ptr m_ForEachStatement;
     ::ecore::EClass_ptr m_IfStatement;
     ::ecore::EClass_ptr m_LetStatement;
     ::ecore::EClass_ptr m_ProtectStatement;
     ::ecore::EClass_ptr m_TextStatement;
     ::ecore::EAttribute_ptr m_ExpandStatement__foreach;
     ::ecore::EReference_ptr m_ExpandStatement__parameters;
     ::ecore::EReference_ptr m_ExpandStatement__separator;
     ::ecore::EReference_ptr m_ExpandStatement__target;
     ::ecore::EReference_ptr m_ExpandStatement__definition;
     ::ecore::EReference_ptr m_ExpressionStatement__expression;
     ::ecore::EReference_ptr m_ErrorStatement__message;
     ::ecore::EReference_ptr m_AbstractStatementWithBody__body;
     ::ecore::EReference_ptr m_FileStatement__fileNameExpression;
     ::ecore::EReference_ptr m_FileStatement__outletNameIdentifier;
     ::ecore::EAttribute_ptr m_FileStatement__once;
     ::ecore::EReference_ptr m_ForEachStatement__target;
     ::ecore::EReference_ptr m_ForEachStatement__separator;
     ::ecore::EReference_ptr m_ForEachStatement__variable;
     ::ecore::EReference_ptr m_ForEachStatement__iteratorName;
     ::ecore::EReference_ptr m_IfStatement__condition;
     ::ecore::EReference_ptr m_IfStatement__elseIf;
     ::ecore::EReference_ptr m_LetStatement__varName;
     ::ecore::EReference_ptr m_LetStatement__varValue;
     ::ecore::EReference_ptr m_ProtectStatement__commentStart;
     ::ecore::EReference_ptr m_ProtectStatement__commentEnd;
     ::ecore::EReference_ptr m_ProtectStatement__id;
     ::ecore::EAttribute_ptr m_ProtectStatement__disable;
     ::ecore::EAttribute_ptr m_TextStatement__value;
     ::ecore::EAttribute_ptr m_TextStatement__deleteLine;
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_PACKAGE_HPP
