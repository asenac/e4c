
#ifndef EMF_CPP_KDM_DATA_ABSTRACTDATAELEMENT__HPP
#define EMF_CPP_KDM_DATA_ABSTRACTDATAELEMENT__HPP

#include <kdm/data/fwd.hpp>
#include <kdm/data/meta.hpp>
#include <kdm/core/KDMEntity.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace data
{


class AbstractDataElement :  public virtual ::kdm::core::KDMEntity
{
public:

    typedef AbstractDataElement_ptr ptr_type;

    virtual ~AbstractDataElement();

    typedef std::set < kdm::source::SourceRef_ptr > source_t;
    typedef std::set < kdm::data::AbstractDataRelationship_ptr > dataRelation_t;
    typedef std::vector < kdm::action::ActionElement_ptr > abstraction_t;

    source_t getSource() const;
    void addSource(kdm::source::SourceRef_ptr source_);
    void addAllSource(const source_t& source_);
    dataRelation_t getDataRelation() const;
    void addDataRelation(kdm::data::AbstractDataRelationship_ptr dataRelation_);
    void addAllDataRelation(const dataRelation_t& dataRelation_);
    abstraction_t getAbstraction() const;
    void addAbstraction(kdm::action::ActionElement_ptr abstraction_);
    void addAllAbstraction(const abstraction_t& abstraction_);


    /*PROTECTED REGION ID(kdm::data::AbstractDataElement public) START*/
    /*PROTECTED REGION END*/

protected:
    AbstractDataElement();

    friend class DataPackage;

    std::set < std::unique_ptr < kdm::source::SourceRef > > m_source;
    std::set < std::unique_ptr < kdm::data::AbstractDataRelationship > > m_dataRelation;
    std::vector < std::unique_ptr < kdm::action::ActionElement > > m_abstraction;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::data::AbstractDataElement protected) START*/
    /*PROTECTED REGION END*/
};

} // data
} // kdm


#endif // EMF_CPP_KDM_DATA_ABSTRACTDATAELEMENT__HPP
