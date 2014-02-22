
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


class SourceFile :  public virtual ::kdm::source::InventoryItem
{
public:

    typedef SourceFile_ptr ptr_type;

    SourceFile();
    virtual ~SourceFile();

    typedef ::kdm::core::String language_t;
    typedef ::kdm::core::String encoding_t;

    void setLanguage(language_t _language);
    language_t getLanguage() const;
    void setEncoding(encoding_t _encoding);
    encoding_t getEncoding() const;


    /*PROTECTED REGION ID(kdm::source::SourceFile public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SourcePackage;

    language_t m_language;
    encoding_t m_encoding;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::source::SourceFile protected) START*/
    /*PROTECTED REGION END*/
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_SOURCEFILE__HPP
