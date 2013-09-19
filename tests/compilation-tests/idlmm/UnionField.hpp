
#ifndef EMF_CPP_IDLMM_UNIONFIELD__HPP
#define EMF_CPP_IDLMM_UNIONFIELD__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/Typed.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


// idlmm::UnionField
class UnionField :  public virtual ::idlmm::Typed
{
public:

	typedef UnionField_ptr ptr_type;
	
	UnionField();
	virtual ~UnionField();

	typedef int identifier_t;
	typedef boost::ptr_vector < idlmm::Expression > label_t;

	
	void setIdentifier(identifier_t _identifier);
	identifier_t getIdentifier() const;
	// TODO

	
protected:

	identifier_t m_identifier;
	label_t m_label;

};

} // idlmm


#endif // EMF_CPP_IDLMM_UNIONFIELD__HPP
