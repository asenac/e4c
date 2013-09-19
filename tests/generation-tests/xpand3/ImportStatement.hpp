
#ifndef EMF_CPP_XPAND3_IMPORTSTATEMENT__HPP
#define EMF_CPP_XPAND3_IMPORTSTATEMENT__HPP

#include <xpand3/fwd.hpp>
#include <xpand3/meta.hpp>
#include <xpand3/SyntaxElement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{


// xpand3::ImportStatement
class ImportStatement :  public virtual ::xpand3::SyntaxElement
{
public:

	typedef ImportStatement_ptr ptr_type;
	
	ImportStatement();
	virtual ~ImportStatement();

	typedef std::unique_ptr < xpand3::Identifier > importedId_t;
	typedef int exported_t;

	
	// TODO
	void setExported(exported_t _exported);
	exported_t getExported() const;

	
protected:

	importedId_t m_importedId;
	exported_t m_exported;

};

} // xpand3


#endif // EMF_CPP_XPAND3_IMPORTSTATEMENT__HPP
