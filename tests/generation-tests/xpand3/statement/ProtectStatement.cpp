
#include "ProtectStatement.hpp"
#include <xpand3/statement/StatementPackage.hpp>
#include <xpand3/expression/AbstractExpression.hpp>

using namespace xpand3::statement;

/*PROTECTED REGION ID(xpand3::statement::ProtectStatement include) START*/
/*PROTECTED REGION END*/

ProtectStatement::ProtectStatement() :
    m_commentStart(),
    m_commentEnd(),
    m_id(),
    m_disable()
{
    /*PROTECTED REGION ID(ProtectStatement constructor) START*/
    /*PROTECTED REGION END*/
}

ProtectStatement::~ProtectStatement()
{
    /*PROTECTED REGION ID(ProtectStatement destructor) START*/
    /*PROTECTED REGION END*/
}

ProtectStatement::commentStart_t ProtectStatement::getCommentStart() const
{
    return e4c::returned(m_commentStart);
}


void ProtectStatement::setCommentStart(commentStart_t commentStart_)
{
    m_commentStart.reset(commentStart_);
}

ProtectStatement::commentStart_t ProtectStatement::releaseCommentStart()
{
    return m_commentStart.release();
}

ProtectStatement::commentEnd_t ProtectStatement::getCommentEnd() const
{
    return e4c::returned(m_commentEnd);
}


void ProtectStatement::setCommentEnd(commentEnd_t commentEnd_)
{
    m_commentEnd.reset(commentEnd_);
}

ProtectStatement::commentEnd_t ProtectStatement::releaseCommentEnd()
{
    return m_commentEnd.release();
}

ProtectStatement::id_t ProtectStatement::getId() const
{
    return e4c::returned(m_id);
}


void ProtectStatement::setId(id_t id_)
{
    m_id.reset(id_);
}

ProtectStatement::id_t ProtectStatement::releaseId()
{
    return m_id.release();
}

void ProtectStatement::setDisable(disable_t _disable)
{
    m_disable = _disable;;
}

ProtectStatement::disable_t ProtectStatement::getDisable() const
{
    return m_disable;
}



/*PROTECTED REGION ID(xpand3::statement::ProtectStatement implementation) START*/
/*PROTECTED REGION END*/

ecore::EClass_ptr ProtectStatement::eClassImpl() const
{
    return StatementPackage::_instance()->getProtectStatement();
}

