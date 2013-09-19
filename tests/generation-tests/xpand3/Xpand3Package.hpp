#ifndef EMF_CPP_XPAND3_PACKAGE_HPP
#define EMF_CPP_XPAND3_PACKAGE_HPP

#include <e4c/tag.hpp>
#include <ecore/EPackage.hpp>
#include <xpand3/fwd.hpp>

namespace xpand3
{


class Xpand3Package : public ::ecore::EPackage
{
public:
    static const Xpand3Package_ptr _instance();
 
 	// Classifiers
 	e4c::tag_t getTag_SyntaxElement() const;
 	e4c::tag_t getTag_File() const;
 	e4c::tag_t getTag_ImportStatement() const;
 	e4c::tag_t getTag_Identifier() const;
 	e4c::tag_t getTag_DeclaredParameter() const;
 
 	// Structural features
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
};

} // xpand3


#endif // EMF_CPP_XPAND3_PACKAGE_HPP
