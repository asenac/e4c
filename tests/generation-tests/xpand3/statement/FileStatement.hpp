
#ifndef EMF_CPP_XPAND3_STATEMENT_FILESTATEMENT__HPP
#define EMF_CPP_XPAND3_STATEMENT_FILESTATEMENT__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/statement/AbstractStatementWithBody.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


class FileStatement :  public virtual ::xpand3::statement::AbstractStatementWithBody
{
public:

    typedef FileStatement_ptr ptr_type;

    FileStatement();
    virtual ~FileStatement();

    typedef xpand3::expression::AbstractExpression_ptr fileNameExpression_t;
    typedef xpand3::Identifier_ptr outletNameIdentifier_t;
    typedef ::ecore::EBoolean once_t;

    fileNameExpression_t getFileNameExpression() const;
    void setFileNameExpression(fileNameExpression_t fileNameExpression_);
    fileNameExpression_t releaseFileNameExpression();
    outletNameIdentifier_t getOutletNameIdentifier() const;
    void setOutletNameIdentifier(outletNameIdentifier_t outletNameIdentifier_);
    outletNameIdentifier_t releaseOutletNameIdentifier();
    void setOnce(once_t _once);
    once_t getOnce() const;


    /*PROTECTED REGION ID(xpand3::statement::FileStatement public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class StatementPackage;

    std::unique_ptr < xpand3::expression::AbstractExpression > m_fileNameExpression;
    std::unique_ptr < xpand3::Identifier > m_outletNameIdentifier;
    once_t m_once;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::statement::FileStatement protected) START*/
    /*PROTECTED REGION END*/
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_FILESTATEMENT__HPP
