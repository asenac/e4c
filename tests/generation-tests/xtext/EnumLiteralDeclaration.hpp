
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
	typedef xtext::Keyword_ptr literal_t;

	
	enumLiteral_t getEnumLiteral() const;
	literal_t getLiteral() const;


	ecore::EEnumLiteral_ptr m_enumLiteral;
	std::unique_ptr < xtext::Keyword > m_literal;

		
protected:

};

} // xtext


#endif // EMF_CPP_XTEXT_ENUMLITERALDECLARATION__HPP
