
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

	typedef ::ecore::EBoolean definesHiddenTokens_t;
	typedef std::vector < xtext::AbstractRule_ptr > hiddenTokens_t;

	
	void setDefinesHiddenTokens(definesHiddenTokens_t _definesHiddenTokens);
	definesHiddenTokens_t getDefinesHiddenTokens() const;
	hiddenTokens_t getHiddenTokens() const;


	definesHiddenTokens_t m_definesHiddenTokens;
	std::vector < xtext::AbstractRule_ptr > m_hiddenTokens;

		
protected:

};

} // xtext


#endif // EMF_CPP_XTEXT_PARSERRULE__HPP
