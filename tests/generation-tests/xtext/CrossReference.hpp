
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

	typedef std::unique_ptr < xtext::TypeRef > type_t;
	typedef std::unique_ptr < xtext::AbstractElement > terminal_t;

	
	// TODO
	// TODO

	
protected:

	type_t m_type;
	terminal_t m_terminal;

};

} // xtext


#endif // EMF_CPP_XTEXT_CROSSREFERENCE__HPP
