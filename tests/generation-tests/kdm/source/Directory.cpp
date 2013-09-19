
#include "Directory.hpp"

using namespace kdm::source;

Directory::Directory() : 
	m_path()
{
}

Directory::~Directory()
{
}

void Directory::setPath(path_t _path)
{
	m_path = _path;;
}

path_t Directory::getPath() const
{
	return m_path;
}



