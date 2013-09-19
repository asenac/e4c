
#ifndef EMF_CPP_XTEXT_ENUMLITERALDECLARATION__HPP
#define EMF_CPP_XTEXT_ENUMLITERALDECLARATION__HPP

#include <xtext/fwd.hpp>
#include <xtext/meta.hpp>
#include <xtext/AbstractElement.hpp>

#include <e4c/mapping.hpp>

namespace xtext
{


// xtext::EnumLiteralDeclaration
class EnumLiteralDeclaration :  public virtual ::xtext::AbstractElement
{
public:

	typedef EnumLiteralDeclaration_ptr ptr_type;
	
	EnumLiteralDeclaration();
	virtual ~EnumLiteralDeclaration();

	typedef ecore::EEnumLiteral_ptr enumLiteral_t;
	typedef std::unique_ptr < xtext::Keyword > literal_t;

	
	// TODO
	// TODO

	
protected:

	enumLiteral_t m_enumLiteral;
	literal_t m_literal;

};

} // xtext


#endif // EMF_CPP_XTEXT_ENUMLITERALDECLARATION__HPP
