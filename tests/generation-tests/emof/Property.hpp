
#ifndef EMF_CPP_EMOF_PROPERTY__HPP
#define EMF_CPP_EMOF_PROPERTY__HPP

#include <emof/fwd.hpp>
#include <emof/meta.hpp>
#include <emof/TypedElement.hpp>
#include <emof/MultiplicityElement.hpp>

#include <e4c/mapping.hpp>

namespace emof
{


class Property :  public virtual ::emof::TypedElement,  public virtual ::emof::MultiplicityElement
{
public:

	typedef Property_ptr ptr_type;
	
	Property();
	virtual ~Property();

	typedef emof::Class_ptr class_t;
	typedef ::emof::String default_t;
	typedef ::emof::Boolean isComposite_t;
	typedef ::emof::Boolean isDerived_t;
	typedef ::emof::Boolean isId_t;
	typedef ::emof::Boolean isReadOnly_t;
	typedef emof::Property_ptr opposite_t;
	
	class_t getClass() const;
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
	opposite_t getOpposite() const;
	void setOpposite(opposite_t opposite_);
	

	/*PROTECTED REGION ID(emof::Property public) START*/
	/*PROTECTED REGION END*/
		
protected:

	friend class EmofPackage;

	emof::Class_ptr m_class;
	default_t m_default;
	isComposite_t m_isComposite;
	isDerived_t m_isDerived;
	isId_t m_isId;
	isReadOnly_t m_isReadOnly;
	emof::Property_ptr m_opposite;

	
	friend class ::emof::Class;
	void setClass(class_t class_);
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(emof::Property protected) START*/
	/*PROTECTED REGION END*/
};

} // emof


#endif // EMF_CPP_EMOF_PROPERTY__HPP
