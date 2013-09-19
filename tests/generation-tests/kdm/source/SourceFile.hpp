
#ifndef EMF_CPP_KDM_SOURCE_SOURCEFILE__HPP
#define EMF_CPP_KDM_SOURCE_SOURCEFILE__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/source/InventoryItem.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


// kdm::source::SourceFile
class SourceFile :  public virtual ::kdm::source::InventoryItem
{
public:

	typedef SourceFile_ptr ptr_type;
	
	SourceFile();
	virtual ~SourceFile();

	typedef int language_t;
	typedef int encoding_t;

	
	void setLanguage(language_t _language);
	language_t getLanguage() const;
	void setEncoding(encoding_t _encoding);
	encoding_t getEncoding() const;

	
protected:

	language_t m_language;
	encoding_t m_encoding;

};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_SOURCEFILE__HPP
