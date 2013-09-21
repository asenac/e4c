
#ifndef EMF_CPP_XPAND3_FILE__HPP
#define EMF_CPP_XPAND3_FILE__HPP

#include <xpand3/fwd.hpp>
#include <xpand3/meta.hpp>
#include <xpand3/SyntaxElement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{


// xpand3::File
class File :  public virtual ::xpand3::SyntaxElement
{
public:

	typedef File_ptr ptr_type;
	
	File();
	virtual ~File();

	typedef std::vector < xpand3::ImportStatement_ptr > imports_t;
	typedef std::vector < xpand3::declaration::AbstractDeclaration_ptr > declarations_t;

	
	imports_t getImports() const;
	declarations_t getDeclarations() const;


	std::vector < std::unique_ptr < xpand3::ImportStatement > > m_imports;
	std::vector < std::unique_ptr < xpand3::declaration::AbstractDeclaration > > m_declarations;

		
protected:

};

} // xpand3


#endif // EMF_CPP_XPAND3_FILE__HPP
