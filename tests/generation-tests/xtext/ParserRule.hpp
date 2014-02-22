
#ifndef EMF_CPP_XTEXT_PARSERRULE__HPP
#define EMF_CPP_XTEXT_PARSERRULE__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractRule.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


class ParserRule :  public virtual ::xtext::AbstractRule
{
public:

    typedef ParserRule_ptr ptr_type;

    ParserRule();
    virtual ~ParserRule();

    typedef ::ecore::EBoolean definesHiddenTokens_t;
    typedef std::vector < xtext::AbstractRule_ptr > hiddenTokens_t;

    void setDefinesHiddenTokens(definesHiddenTokens_t _definesHiddenTokens);
    definesHiddenTokens_t getDefinesHiddenTokens() const;
    hiddenTokens_t getHiddenTokens() const;
    void addHiddenTokens(xtext::AbstractRule_ptr hiddenTokens_);
    void addAllHiddenTokens(const hiddenTokens_t& hiddenTokens_);


    /*PROTECTED REGION ID(xtext::ParserRule public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class XtextPackage;

    definesHiddenTokens_t m_definesHiddenTokens;
    std::vector < xtext::AbstractRule_ptr > m_hiddenTokens;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xtext::ParserRule protected) START*/
    /*PROTECTED REGION END*/
};

} // xtext


#endif // EMF_CPP_XTEXT_PARSERRULE__HPP
