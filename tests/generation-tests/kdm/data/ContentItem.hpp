
#ifndef EMF_CPP_KDM_DATA_CONTENTITEM__HPP
#define EMF_CPP_KDM_DATA_CONTENTITEM__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/AbstractContentElement.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class ContentItem :  public virtual ::kdm::data::AbstractContentElement
{
public:

    typedef ContentItem_ptr ptr_type;

    ContentItem();
    virtual ~ContentItem();

    typedef kdm::data::ComplexContentType_ptr type_t;
    typedef std::set < kdm::data::AbstractContentElement_ptr > contentElement_t;

    type_t getType() const;
    void setType(type_t type_);
    contentElement_t getContentElement() const;
    void addContentElement(kdm::data::AbstractContentElement_ptr contentElement_);
    void addAllContentElement(const contentElement_t& contentElement_);


    /*PROTECTED REGION ID(kdm::data::ContentItem public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;

    kdm::data::ComplexContentType_ptr m_type;
    std::set < std::unique_ptr < kdm::data::AbstractContentElement > > m_contentElement;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::ContentItem protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_CONTENTITEM__HPP
