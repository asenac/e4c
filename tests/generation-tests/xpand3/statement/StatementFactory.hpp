#ifndef EMF_CPP_XPAND3_STATEMENT_FACTORY_HPP
#define EMF_CPP_XPAND3_STATEMENT_FACTORY_HPP

#include <ecore/EFactory.hpp>
#include <xpand3/statement/fwd.hpp>

namespace xpand3
{
namespace statement
{


class StatementFactory : public ::ecore::EFactory
{
public:

    static const StatementFactory_ptr _instance();

    ExpandStatement_ptr createExpandStatement() const;
    ExpressionStatement_ptr createExpressionStatement() const;
    ErrorStatement_ptr createErrorStatement() const;
    FileStatement_ptr createFileStatement() const;
    ForEachStatement_ptr createForEachStatement() const;
    IfStatement_ptr createIfStatement() const;
    LetStatement_ptr createLetStatement() const;
    ProtectStatement_ptr createProtectStatement() const;
    TextStatement_ptr createTextStatement() const;

protected:

    StatementFactory();
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_FACTORY_HPP
