#include "MorLayoutConnection.h"

FMorLayoutConnection::FMorLayoutConnection() {
    this->ZoneSet = EZoneSet::Moria;
    this->bExclusive = false;
    this->bRequired = false;
    this->bLeafZoneRoute = false;
    this->OriginKind = EConnectionEndpointKind::Zone;
    this->OriginFavor = EConnectionFavorSide::Any;
    this->DestinationKind = EConnectionEndpointKind::Zone;
    this->DestinationFavor = EConnectionFavorSide::Any;
    this->ZoneRule = EConnectionZoneRule::Shared;
}

