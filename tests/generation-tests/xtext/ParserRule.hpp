
#ifndef EMF_CPP_XTEXT_PARSERRULE__HPP
#define EMF_CPP_XTEXT_PARSERRULE__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractRule.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::ParserRule
class ParserRule :  public virtual ::xtext::AbstractRule
{
public:

	typedef ParserRule_ptr ptr_type;
	
	ParserRule();
	virtual ~ParserRule();

	typedef int definesHiddenTokens_t;
	typedef std::set < xtext::AbstractRule_ptr > hiddenTokens_t;

	
	void setDefinesHiddenTokens(definesHiddenTokens_t _definesHiddenTokens);
	definesHiddenTokens_t getDefinesHiddenTokens() const;
	// TODO

	
protected:

	definesHiddenTokens_t m_definesHiddenTokens;
	hiddenTokens_t m_hiddenTokens;

};

} // xtext


#endif // EMF_CPP_XTEXT_PARSERRULE__HPP
