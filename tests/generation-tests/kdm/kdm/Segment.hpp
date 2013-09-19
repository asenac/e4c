
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

	typedef boost::ptr_set < kdm::kdm::Segment > segment_t;
	typedef boost::ptr_set < kdm::kdm::KDMModel > model_t;

	
	// TODO
	// TODO

	
protected:

	segment_t m_segment;
	model_t m_model;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_SEGMENT__HPP
