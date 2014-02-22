
#ifndef EMF_CPP_XPAND3_STATEMENT_ABSTRACTSTATEMENTWITHBODY__HPP
#define EMF_CPP_XPAND3_STATEMENT_ABSTRACTSTATEMENTWITHBODY__HPP

#include <xpand3/statement/fwd.hpp>
#include <xpand3/statement/meta.hpp>
#include <xpand3/statement/AbstractStatement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{
namespace statement
{


class AbstractStatementWithBody :  public virtual ::xpand3::statement::AbstractStatement
{
public:

    typedef AbstractStatementWithBody_ptr ptr_type;

    virtual ~AbstractStatementWithBody();

    typedef std::vector < xpand3::statement::AbstractStatement_ptr > body_t;

    body_t getBody() const;
    void addBody(xpand3::statement::AbstractStatement_ptr body_);
    void addAllBody(const body_t& body_);


    /*PROTECTED REGION ID(xpand3::statement::AbstractStatementWithBody public) START*/
    /*PROTECTED REGION END*/

protected:
    AbstractStatementWithBody();

    friend class StatementPackage;

    std::vector < std::unique_ptr < xpand3::statement::AbstractStatement > > m_body;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::statement::AbstractStatementWithBody protected) START*/
    /*PROTECTED REGION END*/
};

} // statement
} // xpand3


#endif // EMF_CPP_XPAND3_STATEMENT_ABSTRACTSTATEMENTWITHBODY__HPP
