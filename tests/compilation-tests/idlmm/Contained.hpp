#ifndef EMF_CPP_IDLMM_CONTAINED__HPP
#define EMF_CPP_IDLMM_CONTAINED__HPP

#include <idlmm/fwd.hpp>
#include <idlmm/meta.hpp>
#include <idlmm/NamedElement.hpp>

#include <e4c/mapping.hpp>

namespace idlmm
{


class Contained :  public virtual ::idlmm::NamedElement
{
public:

	typedef Contained_ptr ptr_type;
	
	virtual ~Contained();

	typedef ::ecore::EString repositoryId_t;
	typedef ::ecore::EString version_t;
	typedef ::ecore::EString absoluteName_t;
	typedef idlmm::Container_ptr definedIn_t;
	
	void setRepositoryId(repositoryId_t _repositoryId);
	repositoryId_t getRepositoryId() const;
	void setVersion(version_t _version);
	version_t getVersion() const;
	void setAbsoluteName(absoluteName_t _absoluteName);
	absoluteName_t getAbsoluteName() const;
	definedIn_t getDefinedIn() const;
	

	/*PROTECTED REGION ID(idlmm::Contained public) START*/
	/*PROTECTED REGION END*/
		
protected:
	Contained();

	friend class IdlmmPackage;

	repositoryId_t m_repositoryId;
	version_t m_version;
	absoluteName_t m_absoluteName;
	idlmm::Container_ptr m_definedIn;

	
	friend class ::idlmm::Container;
	void setDefinedIn(definedIn_t definedIn_);
	
	
	virtual ecore::EClass_ptr eClassImpl() const;
	
	/*PROTECTED REGION ID(idlmm::Contained protected) START*/
	/*PROTECTED REGION END*/
};

} // idlmm


#endif // EMF_CPP_IDLMM_CONTAINED__HPP
