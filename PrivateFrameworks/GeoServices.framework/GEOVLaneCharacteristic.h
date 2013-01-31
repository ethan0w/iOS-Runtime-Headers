/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOVLaneCharacteristic : PBCodable  {
    NSMutableArray *_laneDirections;
    NSMutableArray *_laneDividers;
    NSMutableArray *_laneTypes;
    unsigned int _roadLaneCount;
    struct { 
        unsigned int roadLaneCount : 1; 
    } _has;
}

@property BOOL hasRoadLaneCount;
@property unsigned int roadLaneCount;
@property(retain) NSMutableArray * laneDividers;
@property(retain) NSMutableArray * laneDirections;
@property(retain) NSMutableArray * laneTypes;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (id)laneTypes;
- (id)laneDirections;
- (id)laneDividers;
- (void)setHasRoadLaneCount:(BOOL)arg1;
- (id)laneTypeAtIndex:(unsigned int)arg1;
- (void)clearLaneTypes;
- (unsigned int)laneTypesCount;
- (id)laneDirectionAtIndex:(unsigned int)arg1;
- (void)clearLaneDirections;
- (unsigned int)laneDirectionsCount;
- (id)laneDividerAtIndex:(unsigned int)arg1;
- (void)clearLaneDividers;
- (unsigned int)laneDividersCount;
- (void)setRoadLaneCount:(unsigned int)arg1;
- (unsigned int)roadLaneCount;
- (BOOL)hasRoadLaneCount;
- (void)addLaneType:(id)arg1;
- (void)addLaneDirection:(id)arg1;
- (void)addLaneDivider:(id)arg1;
- (void)setLaneTypes:(id)arg1;
- (void)setLaneDirections:(id)arg1;
- (void)setLaneDividers:(id)arg1;
- (id)dictionaryRepresentation;

@end
