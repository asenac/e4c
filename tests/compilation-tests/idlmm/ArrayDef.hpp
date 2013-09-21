
#ifndef EMF_CPP_IDLMM_ARRAYDEF__HPP
#define EMF_CPP_IDLMM_ARRAYDEF__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Typed.hpp>
#include <idlmm/IDLType.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class ArrayDef :  public virtual ::idlmm::Typed,  public virtual ::idlmm::IDLType
{
public:

	typedef ArrayDef_ptr ptr_type;
	
	ArrayDef();
	virtual ~ArrayDef();

	typedef ::ecore::EString name_t;
	typedef std::vector < idlmm::Expression_ptr > bounds_t;

	
	void setName(name_t _name);
	name_t getName() const;
	bounds_t getBounds() const;
	void addBounds(idlmm::Expression_ptr bounds_);
	void addAllBounds(const bounds_t& bounds_);

		
protected:

	name_t m_name;
	std::vector < std::unique_ptr < idlmm::Expression > > m_bounds;

	
};

} // idlmm


#endif // EMF_CPP_IDLMM_ARRAYDEF__HPP
