
#ifndef EMF_CPP_KDM_KDM_SEGMENT__HPP
#define EMF_CPP_KDM_KDM_SEGMENT__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/kdm/KDMFramework.hpp>

#include <e4c/mapping.hpp>

namespace kdm
{
namespace kdm
{


class Segment :  public virtual ::kdm::kdm::KDMFramework
{
public:

    typedef Segment_ptr ptr_type;

    Segment();
    virtual ~Segment();

    typedef std::set < kdm::kdm::Segment_ptr > segment_t;
    typedef std::set < kdm::kdm::KDMModel_ptr > model_t;

    segment_t getSegment() const;
    void addSegment(kdm::kdm::Segment_ptr segment_);
    void addAllSegment(const segment_t& segment_);
    model_t getModel() const;
    void addModel(kdm::kdm::KDMModel_ptr model_);
    void addAllModel(const model_t& model_);


    /*PROTECTED REGION ID(kdm::kdm::Segment public) START*/
    /*PROTECTED REGION END*/

protected:

    friend class KdmPackage;

    std::set < std::unique_ptr < kdm::kdm::Segment > > m_segment;
    std::set < std::unique_ptr < kdm::kdm::KDMModel > > m_model;




    virtual ecore::EClass_ptr eClassImpl() const;

    /*PROTECTED REGION ID(kdm::kdm::Segment protected) START*/
    /*PROTECTED REGION END*/
};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_SEGMENT__HPP
