
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

	typedef xpand3::Identifier_ptr importedId_t;
	typedef ::ecore::EBoolean exported_t;

	
	importedId_t getImportedId() const;
	void setExported(exported_t _exported);
	exported_t getExported() const;


	std::unique_ptr < xpand3::Identifier > m_importedId;
	exported_t m_exported;

		
protected:

};

} // xpand3


#endif // EMF_CPP_XPAND3_IMPORTSTATEMENT__HPP
