
#ifndef EMF_CPP_IDLMM_FIXEDDEF__HPP
#define EMF_CPP_IDLMM_FIXEDDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/IDLType.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::FixedDef
class FixedDef :  public virtual ::idlmm::IDLType
{
public:

	typedef FixedDef_ptr ptr_type;
	
	FixedDef();
	virtual ~FixedDef();

	typedef idlmm::Expression_ptr digits_t;
	typedef idlmm::Expression_ptr scale_t;

	
	digits_t getDigits() const;
	void setDigits(digits_t digits_);
	digits_t releaseDigits();
	scale_t getScale() const;
	void setScale(scale_t scale_);
	scale_t releaseScale();

		
protected:

	std::unique_ptr < idlmm::Expression > m_digits;
	std::unique_ptr < idlmm::Expression > m_scale;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_FIXEDDEF__HPP
