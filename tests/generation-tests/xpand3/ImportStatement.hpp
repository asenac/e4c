
#ifndef EMF_CPP_XPAND3_IMPORTSTATEMENT__HPP
#define EMF_CPP_XPAND3_IMPORTSTATEMENT__HPP

#include <xpand3/fwd.hpp>
#include <xpand3/meta.hpp>
#include <xpand3/SyntaxElement.hpp>

#include <e4c/mapping.hpp>

namespace xpand3
{


class ImportStatement :  public virtual ::xpand3::SyntaxElement
{
public:

    typedef ImportStatement_ptr ptr_type;

    ImportStatement();
    virtual ~ImportStatement();

    typedef xpand3::Identifier_ptr importedId_t;
    typedef ::ecore::EBoolean exported_t;

    importedId_t getImportedId() const;
    void setImportedId(importedId_t importedId_);
    importedId_t releaseImportedId();
    void setExported(exported_t _exported);
    exported_t getExported() const;


    /*PROTECTED REGION ID(xpand3::ImportStatement public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class Xpand3Package;

    std::unique_ptr < xpand3::Identifier > m_importedId;
    exported_t m_exported;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(xpand3::ImportStatement protected) START*/
    /*PROTECTED REGION END*/
};

} // xpand3


#endif // EMF_CPP_XPAND3_IMPORTSTATEMENT__HPP
