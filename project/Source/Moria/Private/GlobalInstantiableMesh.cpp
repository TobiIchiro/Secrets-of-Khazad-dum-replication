#include "GlobalInstantiableMesh.h"

FGlobalInstantiableMesh::FGlobalInstantiableMesh() {
    this->Mesh = NULL;
    this->NumCustomDataFloats = 0;
    this->bAffectNavigation = false;
    this->bBigCharactersBreak = false;
    this->bReceivesDecals = false;
}

