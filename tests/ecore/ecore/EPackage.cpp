
#include "EPackage.hpp"
#include <ecore/EFactory.hpp>
#include <ecore/EClassifier.hpp>
#include <ecore/EPackage.hpp>

using namespace ecore;

EPackage::EPackage() : nsURI(this), nsPrefix(this), eFactoryInstance(this), eClassifiers(this), eSubpackages(this), eSuperPackage(this)
{
}

EPackage::~EPackage()
{
}

