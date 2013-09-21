
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


// kdm::kdm::Segment
class Segment :  public virtual ::kdm::kdm::KDMFramework
{
public:

	typedef Segment_ptr ptr_type;
	
	Segment();
	virtual ~Segment();

	typedef std::set < kdm::kdm::Segment_ptr > segment_t;
	typedef std::set < kdm::kdm::KDMModel_ptr > model_t;

	
	segment_t getSegment() const;
	model_t getModel() const;


	std::set < std::unique_ptr < kdm::kdm::Segment > > m_segment;
	std::set < std::unique_ptr < kdm::kdm::KDMModel > > m_model;

		
protected:

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_SEGMENT__HPP
