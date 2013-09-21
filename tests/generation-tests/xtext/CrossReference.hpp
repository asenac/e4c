
#ifndef EMF_CPP_XTEXT_CROSSREFERENCE__HPP
#define EMF_CPP_XTEXT_CROSSREFERENCE__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::CrossReference
class CrossReference :  public virtual ::xtext::AbstractElement
{
public:

	typedef CrossReference_ptr ptr_type;
	
	CrossReference();
	virtual ~CrossReference();

	typedef xtext::TypeRef_ptr type_t;
	typedef xtext::AbstractElement_ptr terminal_t;

	
	type_t getType() const;
	terminal_t getTerminal() const;


	std::unique_ptr < xtext::TypeRef > m_type;
	std::unique_ptr < xtext::AbstractElement > m_terminal;

		
protected:

};

} // xtext


#endif // EMF_CPP_XTEXT_CROSSREFERENCE__HPP
