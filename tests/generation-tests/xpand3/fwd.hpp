#ifndef EMF_CPP_XPAND3_FWD_HPP
#define EMF_CPP_XPAND3_FWD_HPP

#include <xpand3/expression/fwd.hpp>
#include <xpand3/statement/fwd.hpp>
#include <xpand3/declaration/fwd.hpp>

namespace xpand3
{


class Xpand3Package;
typedef Xpand3Package * Xpand3Package_ptr;
class Xpand3Factory;
typedef Xpand3Factory * Xpand3Factory_ptr;

// Data types


// Classes
class SyntaxElement;
typedef SyntaxElement* SyntaxElement_ptr;
class File;
typedef File* File_ptr;
class ImportStatement;
typedef ImportStatement* ImportStatement_ptr;
class Identifier;
typedef Identifier* Identifier_ptr;
class DeclaredParameter;
typedef DeclaredParameter* DeclaredParameter_ptr;


// Structural features
struct SyntaxElement__line_tag;
struct SyntaxElement__start_tag;
struct SyntaxElement__end_tag;
struct SyntaxElement__fileName_tag;
struct File__imports_tag;
struct File__declarations_tag;
struct ImportStatement__importedId_tag;
struct ImportStatement__exported_tag;
struct Identifier__value_tag;
struct DeclaredParameter__name_tag;
struct DeclaredParameter__type_tag;


} // xpand3


#endif // EMF_CPP_XPAND3_FWD_HPP
