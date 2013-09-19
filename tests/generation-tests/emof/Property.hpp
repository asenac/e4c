
#ifndef EMF_CPP_EMOF_PROPERTY__HPP
#define EMF_CPP_EMOF_PROPERTY__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/TypedElement.hpp>
#include <emof/MultiplicityElement.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


// emof::Property
class Property :  public virtual ::emof::TypedElement,  public virtual ::emof::MultiplicityElement
{
public:

	typedef Property_ptr ptr_type;
	
	Property();
	virtual ~Property();

	typedef emof::Class_ptr class_t;
	typedef int default_t;
	typedef int isComposite_t;
	typedef int isDerived_t;
	typedef int isId_t;
	typedef int isReadOnly_t;
	typedef emof::Property_ptr opposite_t;

	
	// TODO
	void setDefault(default_t _default);
	default_t getDefault() const;
	void setIsComposite(isComposite_t _isComposite);
	isComposite_t getIsComposite() const;
	void setIsDerived(isDerived_t _isDerived);
	isDerived_t getIsDerived() const;
	void setIsId(isId_t _isId);
	isId_t getIsId() const;
	void setIsReadOnly(isReadOnly_t _isReadOnly);
	isReadOnly_t getIsReadOnly() const;
	// TODO

	
protected:

	class_t m_class;
	default_t m_default;
	isComposite_t m_isComposite;
	isDerived_t m_isDerived;
	isId_t m_isId;
	isReadOnly_t m_isReadOnly;
	opposite_t m_opposite;

};

} // emof


#endif // EMF_CPP_EMOF_PROPERTY__HPP
