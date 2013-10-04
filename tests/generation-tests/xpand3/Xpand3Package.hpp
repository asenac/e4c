#ifndef EMF_CPP_XPAND3_PACKAGE_HPP
#define EMF_CPP_XPAND3_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <xpand3/fwd.hpp>
#include <e4c/detail/holder.ipp>

namespace xpand3
{


class Xpand3Package : public ::ecore::EPackage
{
public:
    static const Xpand3Package_ptr _instance();

 	::ecore::EClass_ptr getSyntaxElement() const;
 	::ecore::EClass_ptr getFile() const;
 	::ecore::EClass_ptr getImportStatement() const;
 	::ecore::EClass_ptr getIdentifier() const;
 	::ecore::EClass_ptr getDeclaredParameter() const;
 	
 	::ecore::EAttribute_ptr getSyntaxElement__line() const;
 	::ecore::EAttribute_ptr getSyntaxElement__start() const;
 	::ecore::EAttribute_ptr getSyntaxElement__end() const;
 	::ecore::EAttribute_ptr getSyntaxElement__fileName() const;
 	::ecore::EReference_ptr getFile__imports() const;
 	::ecore::EReference_ptr getFile__declarations() const;
 	::ecore::EReference_ptr getImportStatement__importedId() const;
 	::ecore::EAttribute_ptr getImportStatement__exported() const;
 	::ecore::EAttribute_ptr getIdentifier__value() const;
 	::ecore::EReference_ptr getDeclaredParameter__name() const;
 	::ecore::EReference_ptr getDeclaredParameter__type() const;

 	e4c::tag_t getTag_SyntaxElement() const;
 	e4c::tag_t getTag_File() const;
 	e4c::tag_t getTag_ImportStatement() const;
 	e4c::tag_t getTag_Identifier() const;
 	e4c::tag_t getTag_DeclaredParameter() const;
 
 	e4c::tag_t getTag_SyntaxElement__line() const;
 	e4c::tag_t getTag_SyntaxElement__start() const;
 	e4c::tag_t getTag_SyntaxElement__end() const;
 	e4c::tag_t getTag_SyntaxElement__fileName() const;
 	e4c::tag_t getTag_File__imports() const;
 	e4c::tag_t getTag_File__declarations() const;
 	e4c::tag_t getTag_ImportStatement__importedId() const;
 	e4c::tag_t getTag_ImportStatement__exported() const;
 	e4c::tag_t getTag_Identifier__value() const;
 	e4c::tag_t getTag_DeclaredParameter__name() const;
 	e4c::tag_t getTag_DeclaredParameter__type() const;

protected:
    Xpand3Package();
    
 	::ecore::EClass_ptr m_SyntaxElement;
 	::ecore::EClass_ptr m_File;
 	::ecore::EClass_ptr m_ImportStatement;
 	::ecore::EClass_ptr m_Identifier;
 	::ecore::EClass_ptr m_DeclaredParameter;
 	::ecore::EAttribute_ptr m_SyntaxElement__line;
 	::ecore::EAttribute_ptr m_SyntaxElement__start;
 	::ecore::EAttribute_ptr m_SyntaxElement__end;
 	::ecore::EAttribute_ptr m_SyntaxElement__fileName;
 	::ecore::EReference_ptr m_File__imports;
 	::ecore::EReference_ptr m_File__declarations;
 	::ecore::EReference_ptr m_ImportStatement__importedId;
 	::ecore::EAttribute_ptr m_ImportStatement__exported;
 	::ecore::EAttribute_ptr m_Identifier__value;
 	::ecore::EReference_ptr m_DeclaredParameter__name;
 	::ecore::EReference_ptr m_DeclaredParameter__type;
};

} // xpand3


#endif // EMF_CPP_XPAND3_PACKAGE_HPP
