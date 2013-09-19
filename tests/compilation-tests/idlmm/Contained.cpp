
#include "Contained.hpp"
#include <idlmm/Container.hpp>

using namespace idlmm;

Contained::Contained() : 
	m_repositoryId(),
    m_version(),
    m_absoluteName(),
    m_definedIn()
{
}

Contained::~Contained()
{
}

void Contained::setRepositoryId(repositoryId_t _repositoryId)
{
	m_repositoryId = _repositoryId;;
}

repositoryId_t Contained::getRepositoryId() const
{
	return m_repositoryId;
}

void Contained::setVersion(version_t _version)
{
	m_version = _version;;
}

version_t Contained::getVersion() const
{
	return m_version;
}

void Contained::setAbsoluteName(absoluteName_t _absoluteName)
{
	m_absoluteName = _absoluteName;;
}

absoluteName_t Contained::getAbsoluteName() const
{
	return m_absoluteName;
}



