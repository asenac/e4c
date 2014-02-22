
#ifndef EMF_CPP_KDM_DATA_RELATIONALSCHEMA__HPP
#define EMF_CPP_KDM_DATA_RELATIONALSCHEMA__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/data/DataContainer.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class RelationalSchema :  public virtual ::kdm::data::DataContainer
{
public:

    typedef RelationalSchema_ptr ptr_type;

    RelationalSchema();
    virtual ~RelationalSchema();

    typedef std::set < kdm::code::CodeItem_ptr > codeElement_t;

    codeElement_t getCodeElement() const;
    void addCodeElement(kdm::code::CodeItem_ptr codeElement_);
    void addAllCodeElement(const codeElement_t& codeElement_);


    /*PROTECTED REGION ID(kdm::data::RelationalSchema public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class DataPackage;

    std::set < std::unique_ptr < kdm::code::CodeItem > > m_codeElement;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::RelationalSchema protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_RELATIONALSCHEMA__HPP
