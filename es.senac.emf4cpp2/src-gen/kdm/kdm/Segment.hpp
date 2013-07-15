
#ifndef EMF_CPP_KDM_KDM_SEGMENT__HPP
#define EMF_CPP_KDM_KDM_SEGMENT__HPP

#include <kdm/kdm/fwd.hpp>
#include <kdm/kdm/meta.hpp>
#include <kdm/kdm/KDMFramework.hpp>


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

	// Typedefs
	typedef ::e4c::impl::reference< Segment__segment_tag > _segment_t;
	typedef ::e4c::impl::reference< Segment__model_tag > _model_t;

	
	// Members
	_segment_t segment;
	_model_t model;

};

} // kdm
} // kdm


#endif // EMF_CPP_KDM_KDM_SEGMENT__HPP
