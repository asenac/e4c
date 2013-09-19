
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

	typedef boost::ptr_vector < xpand3::ImportStatement > imports_t;
	typedef boost::ptr_vector < xpand3::declaration::AbstractDeclaration > declarations_t;

	
	// TODO
	// TODO

	
protected:

	imports_t m_imports;
	declarations_t m_declarations;

};

} // xpand3


#endif // EMF_CPP_XPAND3_FILE__HPP
