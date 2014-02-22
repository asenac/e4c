
#ifndef EMF_CPP_KDM_SOURCE_SOURCEREGION__HPP
#define EMF_CPP_KDM_SOURCE_SOURCEREGION__HPP

#include <kdm/source/fwd.hpp>
#include <kdm/source/meta.hpp>
#include <kdm/core/Element.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace source
{


class SourceRegion :  public virtual ::kdm::core::Element
{
public:

    typedef SourceRegion_ptr ptr_type;

    SourceRegion();
    virtual ~SourceRegion();

    typedef kdm::source::SourceFile_ptr file_t;
    typedef ::kdm::core::Integer startLine_t;
    typedef ::kdm::core::Integer startPosition_t;
    typedef ::kdm::core::Integer endLine_t;
    typedef ::kdm::core::Integer endPosition_t;
    typedef ::kdm::core::String language_t;
    typedef ::kdm::core::String path_t;

    file_t getFile() const;
    void setFile(file_t file_);
    void setStartLine(startLine_t _startLine);
    startLine_t getStartLine() const;
    void setStartPosition(startPosition_t _startPosition);
    startPosition_t getStartPosition() const;
    void setEndLine(endLine_t _endLine);
    endLine_t getEndLine() const;
    void setEndPosition(endPosition_t _endPosition);
    endPosition_t getEndPosition() const;
    void setLanguage(language_t _language);
    language_t getLanguage() const;
    void setPath(path_t _path);
    path_t getPath() const;


    /*PROTECTED REGION ID(kdm::source::SourceRegion public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class SourcePackage;

    kdm::source::SourceFile_ptr m_file;
    startLine_t m_startLine;
    startPosition_t m_startPosition;
    endLine_t m_endLine;
    endPosition_t m_endPosition;
    language_t m_language;
    path_t m_path;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::source::SourceRegion protected) START*/
    /*PROTECTED REGION END*/
};

} // source
} // kdm


#endif // EMF_CPP_KDM_SOURCE_SOURCEREGION__HPP
