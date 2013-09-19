#ifndef EMF_CPP_XPAND3_STATEMENT_PACKAGE_HPP
#define EMF_CPP_XPAND3_STATEMENT_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <xpand3/statement/fwd.hpp>

namespace xpand3
{
namespace statement
{


class StatementPackage : public ::ecore::EPackage
{
public:
    static const StatementPackage_ptr _instance();
 
 	// Classifiers
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
 
 	// Structural features
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
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_PACKAGE_HPP
